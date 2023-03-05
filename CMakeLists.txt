# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)
add_compile_definitions(_GLIBCXX_USE_CXX11_ABI=0)
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake"
CACHE STRING "Vcpkg toolchain file")

project ("HighFreqTrade")

# Include sub-projects.
add_subdirectory ("protobuf-3.1.0/cmake")
add_subdirectory ("InsightQuote")
