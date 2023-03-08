# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.21)

set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake"
CACHE STRING "Vcpkg toolchain file")

project ("HighFreqTrade")

# Include sub-projects.
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/thirdlibs/fmt-9.1.0")
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/thirdlibs/spdlog-1.11.0")
add_subdirectory ("InsightQuote")
