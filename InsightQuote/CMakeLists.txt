# CMakeList.txt : CMake project for HighFreqTrade, include source and define
# project specific logic here.
#
project ("InsightQuote")
set(CMAKE_C_COMPILER /usr/bin/gcc-4.8)
set(CMAKE_CXX_COMPILER /usr/bin/g++-4.8)
set(CMAKE_VERBOSE_MAKEFILE ON)
option(USE_UDP "use udp interface" ON)
set (CMAKE_BUILE_TYPE DEBUG)
add_definitions(-DDEBUG)
add_definitions("-Wall -g")
include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX11)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O0 -pthread")
elseif(COMPILER_SUPPORTS_CXX0X)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else()
     message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()
#SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -std=c++0x  --std=c++11")
list(APPEND SRC_DIR_LIST "${PROJECT_SOURCE_DIR}")
list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}")
list(APPEND LINK_DIR_LIST "${PROJECT_SOURCE_DIR}")

if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
	if(USE_UDP)
		message("config for linux upd")
				
		list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/include/mdc_gateway_client/include")
		list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/include/protobuf-3.1.0/include")
		list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/include/mdc_gateway_client/protobuf")

		list(APPEND SRC_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/include/mdc_gateway_client/protobuf")

		list(APPEND LINK_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs")
	
	else()		
		message("config for linux tcp")
		
		list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/include/mdc_gateway_client/include")
		list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/include/protobuf-3.1.0/include")
		list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/include/mdc_gateway_client/protobuf")

		list(APPEND SRC_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/include/mdc_gateway_client/protobuf")

		list(APPEND LINK_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs")
		
	endif()
	
else()
	message("config for windows tcp")
	
	list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/include/mdc_gateway_client/include")
	list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/include/protobuf-3.1.0/include")
	list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/include/mdc_gateway_client/protobuf")

	list(APPEND SRC_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/include/mdc_gateway_client/protobuf")

	list(APPEND LINK_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs")

endif()

message(${INCLUDE_DIR_LIST})
message(${LINK_DIR_LIST})

foreach(LOC_SRC ${SRC_DIR_LIST})
	aux_source_directory(${LOC_SRC} LIB_PROTOBUF_SRC)
endforeach()


# Add source to this project's executable.
add_executable (InsightQuote 
				${LIB_PROTOBUF_SRC}
				"InsightQuote.cpp" 
				)

target_include_directories(InsightQuote PRIVATE ${INCLUDE_DIR_LIST})
target_link_directories(InsightQuote PRIVATE ${LINK_DIR_LIST})

#if (CMAKE_VERSION VERSION_GREATER 3.12)
#  set_property(TARGET InsightQuote PROPERTY CXX_STANDARD 20)
#endif()


find_package(unofficial-sqlite3 REQUIRED)
target_link_libraries(InsightQuote PUBLIC unofficial::sqlite3::sqlite3)

find_package(fmt REQUIRED)
target_link_libraries(InsightQuote PUBLIC fmt::fmt)

# find_package(OpenSSL REQUIRED)
# target_link_libraries(InsightQuote PUBLIC OpenSSL::SSL OpenSSL::Crypto)
# 
# find_package(Protobuf CONFIG REQUIRED)
# target_link_libraries(InsightQuote PUBLIC protobuf::libprotoc protobuf::libprotobuf protobuf::libprotobuf-lite)
# 
# find_path(ACE_INCLUDE_DIR ace/ACE.h)
# target_include_directories(InsightQuote PUBLIC ${ACE_INCLUDE_DIR})
# find_library(ACE_LIBRARY ACE)
# target_link_libraries(InsightQuote PUBLIC ${ACE_LIBRARY})
# find_library(ACE_SSL_LIBRARY ACE_SSL)
# target_link_libraries(InsightQuote PUBLIC ${ACE_SSL_LIBRARY})
# message(${ACE_LIBRARY})
# message(${ACE_SSL_LIBRARY})

add_library(crypto10 SHARED IMPORTED )
set_target_properties(crypto10 PROPERTIES IMPORTED_LOCATION 
	"${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs/libcrypto.so.10" )

add_library(ssl10 SHARED IMPORTED )
set_target_properties(ssl10 PROPERTIES IMPORTED_LOCATION 
	"${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs/libssl.so.10" )

add_library(ACE643 SHARED IMPORTED )
set_target_properties(ACE643 PROPERTIES IMPORTED_LOCATION 
	"${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs/libACE.so.6.4.3" )

add_library(ACESSL643 SHARED IMPORTED )
set_target_properties(ACESSL643 PROPERTIES IMPORTED_LOCATION 
	"${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs/libACE_SSL.so.6.4.3" )

add_library(PROTB SHARED IMPORTED )
set_target_properties(PROTB PROPERTIES IMPORTED_LOCATION 
	"${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs/libprotobuf.so" )

message("${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs/libprotobuf.so")
target_link_libraries(InsightQuote PUBLIC
	aeron_client_shared
	aeron_driver	
	mdc_gateway_client	
	#ACE643
	#ACESSL643
	PROTB
	#/usr/lib/libssl.so.10
	#/usr/lib/libcrypto.so.10
	#/usr/lib/libssl.so.10
	rt
	pthread
	)

# TODO: Add tests and install targets if needed.
