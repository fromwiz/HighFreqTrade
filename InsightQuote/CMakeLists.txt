# CMakeList.txt : CMake project for HighFreqTrade, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (InsightQuote "InsightQuote.cpp" "InsightQuote.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET InsightQuote PROPERTY CXX_STANDARD 20)
endif()


find_package(unofficial-sqlite3 CONFIG REQUIRED)
target_link_libraries(InsightQuote PRIVATE unofficial::sqlite3::sqlite3)

find_package(fmt CONFIG REQUIRED)
target_link_libraries(InsightQuote PRIVATE fmt::fmt)

# TODO: Add tests and install targets if needed.
