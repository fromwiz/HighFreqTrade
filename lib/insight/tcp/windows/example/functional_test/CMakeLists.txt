# CMake ��Ͱ汾��Ҫ��
cmake_minimum_required (VERSION 2.5)

# ��Ŀ��Ϣ
project (functional_test)

# �汾��Ϣ
set (Demo_VERSION_MAJOR 1)
set (Demo_VERSION_MINOR 0)

# �������
set (CMAKE_BUILE_TYPE DEBUG) 
add_definitions(-DDEBUG)

# ���ҵ�ǰĿ¼�µ�����Դ�ļ�
# �������Ʊ��浽 DIR_LIB_SRCS ����
aux_source_directory(. DIR_LIB_SRCS)
aux_source_directory(protobuf DIR_LIB_SRCS)

include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX11)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
elseif(COMPILER_SUPPORTS_CXX0X)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else()
     message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()

# ������Ŀ¼
#add_subdirectory(protobuf)

set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../build)

# ���ӿ�Ŀ¼
link_directories ("${PROJECT_SOURCE_DIR}/../build/")

# ���Ӱ���Ŀ¼
include_directories("${PROJECT_SOURCE_DIR}"
	"${PROJECT_SOURCE_DIR}/protobuf"
	"${PROJECT_SOURCE_DIR}/../../include/ACE_Wrappers"
	"${PROJECT_SOURCE_DIR}/../../include/mdc_gateway_client/include"
	"${PROJECT_SOURCE_DIR}/../../include/openssl-1.0.1e/include"
	"${PROJECT_SOURCE_DIR}/../../include/protobuf-3.1.0/include")
	
# ���ɿ�ִ�ж���
add_executable (functional_test ${DIR_LIB_SRCS})

# �������ӿ�
target_link_libraries(functional_test ACE.so)
target_link_libraries(functional_test ACE_SSL.so)
target_link_libraries(functional_test protobuf.so)
target_link_libraries(functional_test mdc_gateway_client.so)
