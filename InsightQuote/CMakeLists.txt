# CMakeList.txt : CMake project for HighFreqTrade, include source and define
# project specific logic here.
#
project ("insight_quote")

set(CMAKE_VERBOSE_MAKEFILE ON)
option(USE_UDP "use udp interface" ON)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -std=c++0x  --std=c++11")
list(APPEND SRC_DIR_LIST "${PROJECT_SOURCE_DIR}")
list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}")
list(APPEND INCLUDE_DIR_LIST "${SPDLOG_INCLUDE_DIR}")

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

		list(APPEND PRE_BUILD_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs")

		
		install(FILES  "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs/libACE_SSL.so.6.4.3" DESTINATION ${INSTALL_DST_IDR})
		install(FILES  "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs/libprotobuf.so.11" DESTINATION ${INSTALL_DST_IDR})
		install(FILES  "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs/libprotobuf.so" DESTINATION ${INSTALL_DST_IDR})
		install(FILES  "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs/libACE.so.6.4.3" DESTINATION ${INSTALL_DST_IDR})
		install(FILES  "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs/libaeron_client_shared.so" DESTINATION ${INSTALL_DST_IDR})
		install(FILES  "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs/libaeron_driver.so" DESTINATION ${INSTALL_DST_IDR})
		install(FILES  "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs/libmdc_gateway_client.so" DESTINATION ${INSTALL_DST_IDR})
		
	else()		
		message("config for linux tcp")
		
		list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/include/mdc_gateway_client/include")
		list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/include/protobuf-3.1.0/include")
		list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/include/mdc_gateway_client/protobuf")

		list(APPEND SRC_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/include/mdc_gateway_client/protobuf")

		list(APPEND PRE_BUILD_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs")
		
	endif()
	
else()
	message("config for windows tcp")
	
	list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/include/mdc_gateway_client/include")
	list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/include/protobuf-3.1.0/include")
	list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/include/mdc_gateway_client/protobuf")

	list(APPEND SRC_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/include/mdc_gateway_client/protobuf")

	list(APPEND PRE_BUILD_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/udp/linux/libs")

endif()

message(${INCLUDE_DIR_LIST})
message(${PRE_BUILD_DIR_LIST})

foreach(LOC_SRC ${SRC_DIR_LIST})
	aux_source_directory(${LOC_SRC} LIB_PROTOBUF_SRC)
endforeach()


# Add source to this project's executable.
add_executable (insight_quote 
				${LIB_PROTOBUF_SRC}
				"InsightQuote.cpp" 
				)

target_include_directories(insight_quote PRIVATE ${INCLUDE_DIR_LIST})
target_link_directories(insight_quote PRIVATE ${PRE_BUILD_DIR_LIST})


find_package(unofficial-sqlite3 REQUIRED)
target_link_libraries(insight_quote PUBLIC unofficial::sqlite3::sqlite3)


target_link_libraries(insight_quote PUBLIC fmt::fmt)
target_link_libraries(insight_quote PUBLIC spdlog::spdlog)

target_link_libraries(insight_quote PUBLIC
	aeron_client_shared
	aeron_driver	
	mdc_gateway_client
	protobuf	
	rt
	pthread	
	)

foreach(LOC_SRC ${PRE_BUILD_DIR_LIST})
	add_custom_command(TARGET insight_quote POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${LOC_SRC}
        $<TARGET_FILE_DIR:insight_quote>)
endforeach()


install(TARGETS insight_quote DESTINATION ${INSTALL_DST_IDR})


# TODO: Add tests and install targets if needed.
