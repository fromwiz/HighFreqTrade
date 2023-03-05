# CMakeList.txt : CMake project for HighFreqTrade, include source and define
# project specific logic here.
#
project ("InsightQuote")

set(CMAKE_VERBOSE_MAKEFILE ON)
option(USE_UDP "use udp interface" ON)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -std=c++0x  --std=c++11")
list(APPEND SRC_DIR_LIST "${PROJECT_SOURCE_DIR}")
list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}")
list(APPEND LINK_DIR_LIST "${PROJECT_SOURCE_DIR}")

if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
	#set(CMAKE_C_COMPILER /usr/bin/gcc-4.8)
	#set(CMAKE_CXX_COMPILER /usr/bin/g++-4.8)
	if(USE_UDP)
		message("config for linux upd")
					
		set(INSTALL_DST_IDR ./udp)

		list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/include/mdc_gateway_client/include")
		list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/include/protobuf-3.1.0/include")
		list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/include/mdc_gateway_client/protobuf")

		list(APPEND SRC_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/include/mdc_gateway_client/protobuf")

		list(APPEND LINK_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs")

		
		install(FILES  "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs/libACE_SSL.so.6.4.3" DESTINATION ${INSTALL_DST_IDR})
		# install(FILES  "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs/libprotobuf.so.11" DESTINATION ${INSTALL_DST_IDR})
		install(FILES  "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs/libACE.so.6.4.3" DESTINATION ${INSTALL_DST_IDR})
		install(FILES  "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs/libssl.so.10" DESTINATION ${INSTALL_DST_IDR})
		install(FILES  "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs/libcrypto.so.10" DESTINATION ${INSTALL_DST_IDR})
		install(FILES  "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs/libaeron_client_shared.so" DESTINATION ${INSTALL_DST_IDR})
		install(FILES  "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs/libaeron_driver.so" DESTINATION ${INSTALL_DST_IDR})
		install(FILES  "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs/libmdc_gateway_client.so" DESTINATION ${INSTALL_DST_IDR})
		install(TARGETS libprotobuf DESTINATION ${INSTALL_DST_IDR})	

		install(FILES "${CMAKE_INSTALL_PREFIX}/${INSTALL_DST_IDR}/libprotobuf.so" DESTINATION ${INSTALL_DST_IDR} RENAME "libprotobuf.so.11" OPTIONAL)		
		install(FILES "${CMAKE_INSTALL_PREFIX}/${INSTALL_DST_IDR}/libprotobufd.so" DESTINATION ${INSTALL_DST_IDR} RENAME "libprotobuf.so.11" OPTIONAL)		
		message("${CMAKE_INSTALL_PREFIX}/${INSTALL_DST_IDR}/libprotobufd.so")
		
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


find_package(unofficial-sqlite3 REQUIRED)
target_link_libraries(InsightQuote PUBLIC unofficial::sqlite3::sqlite3)

find_package(fmt REQUIRED)
target_link_libraries(InsightQuote PUBLIC fmt::fmt)


target_link_libraries(InsightQuote PUBLIC
	aeron_client_shared
	aeron_driver	
	mdc_gateway_client
	libprotobuf	
	rt
	pthread
	)

install(TARGETS InsightQuote DESTINATION ${INSTALL_DST_IDR})


# TODO: Add tests and install targets if needed.
