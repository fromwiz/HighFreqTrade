# CMakeList.txt : CMake project for HighFreqTrade, include source and define
# project specific logic here.
#
project ("insight_quote")

set(CMAKE_VERBOSE_MAKEFILE ON)
option(USE_UDP "use udp interface" OFF)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -std=c++0x  --std=c++11")
list(APPEND SRC_DIR_LIST "${PROJECT_SOURCE_DIR}")
list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}")
list(APPEND INCLUDE_DIR_LIST "${SPDLOG_INCLUDE_DIR}")

if(NOT MSVC)	
	if(USE_UDP)
		message("config for linux upd")
		add_compile_definitions(_GLIBCXX_USE_CXX11_ABI=0)
		add_definitions(-DINSIGHT_QUOTE_USE_UDP)
		set(INSTALL_DST_IDR ./linux_udp)		

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
		
		set(INSTALL_DST_IDR ./linux_tcp)
		list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/tcp/linux/include/mdc_gateway_client/include")
		list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/tcp/linux/include/protobuf-3.1.0/include")
		list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/tcp/linux/include/mdc_gateway_client/protobuf")

		list(APPEND SRC_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/tcp/linux/include/mdc_gateway_client/protobuf")

		list(APPEND PRE_BUILD_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/tcp/linux/libs")
		
		install(FILES  "${PROJECT_SOURCE_DIR}/../lib/insight/tcp/linux/libs/libACE_SSL.so.6.4.3" DESTINATION ${INSTALL_DST_IDR})
		install(FILES  "${PROJECT_SOURCE_DIR}/../lib/insight/tcp/linux/libs/libprotobuf.so.11" DESTINATION ${INSTALL_DST_IDR})
		install(FILES  "${PROJECT_SOURCE_DIR}/../lib/insight/tcp/linux/libs/libprotobuf.so" DESTINATION ${INSTALL_DST_IDR})
		install(FILES  "${PROJECT_SOURCE_DIR}/../lib/insight/tcp/linux/libs/libACE.so.6.4.3" DESTINATION ${INSTALL_DST_IDR})
		install(FILES  "${PROJECT_SOURCE_DIR}/../lib/insight/tcp/linux/libs/libmdc_gateway_client.so" DESTINATION ${INSTALL_DST_IDR})
	endif()
	
else()
	message("config for windows tcp")
	set(INSTALL_DST_IDR ./windows_tcp)

	list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/tcp/windows/include/mdc_gateway_client/include")
	list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/tcp/windows/include/protobuf-3.1.0/include")
	list(APPEND INCLUDE_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/tcp/windows/include/mdc_gateway_client/protobuf")

	list(APPEND SRC_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/tcp/windows/include/mdc_gateway_client/protobuf")

	if(${CMAKE_CXX_COMPILER_ARCHITECTURE_ID} STREQUAL "x64")
		set(ARC_ID "X64")
	else()
	    set(ARC_ID "32")
	endif()

	list(APPEND PRE_BUILD_DIR_LIST "${PROJECT_SOURCE_DIR}/../lib/insight/tcp/windows/libs/vs2017/Win${ARC_ID}${CMAKE_BUILD_TYPE}")

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

if(MSVC)
	if(${CMAKE_BUILD_TYPE} STREQUAL "Debug")
		target_link_libraries(insight_quote PUBLIC	
			mdc_gateway_clientd
			libprotobufd	
			ACEd
			ACE_SSLd
			libeay32
			ssleay32
			)
	else()
		target_link_libraries(insight_quote PUBLIC	
			mdc_gateway_client
			libprotobuf
			ACE
			ACE_SSL
			libeay32
			ssleay32
			)
	endif()
	add_custom_command(TARGET insight_quote POST_BUILD
		COMMAND ${CMAKE_COMMAND} -E copy_directory
			"${PROJECT_SOURCE_DIR}/../lib/insight/tcp/windows/cert"
			$<TARGET_FILE_DIR:insight_quote>/cert)
	
	install(TARGETS insight_quote
    COMPONENT insight_quote
    RUNTIME_DEPENDENCIES
    PRE_EXCLUDE_REGEXES "api-ms-" "ext-ms-"
    POST_EXCLUDE_REGEXES ".*system32/.*\\.dll"
    DIRECTORIES $<TARGET_FILE_DIR:insight_quote>
	DESTINATION ${INSTALL_DST_IDR}
	)
else()
	if(USE_UDP)
		target_link_libraries(insight_quote PUBLIC 
			aeron_client_shared
			aeron_driver
			)	
	endif()
	
	target_link_libraries(insight_quote PUBLIC	
		mdc_gateway_client
		protobuf	
		rt
		pthread	
		)
endif()


foreach(LOC_SRC ${PRE_BUILD_DIR_LIST})
	add_custom_command(TARGET insight_quote POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${LOC_SRC}
        $<TARGET_FILE_DIR:insight_quote>)
endforeach()


install(TARGETS insight_quote DESTINATION ${INSTALL_DST_IDR})


# TODO: Add tests and install targets if needed.
