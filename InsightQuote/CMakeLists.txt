# CMakeList.txt : CMake project for HighFreqTrade, include source and define
# project specific logic here.
#
find_package(sqlite3 CONFIG REQUIRED)
# Add source to this project's executable.
add_executable (InsightQuote "InsightQuote.cpp" "InsightQuote.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET InsightQuote PROPERTY CXX_STANDARD 20)
endif()
target_link_libraries(InsightQuote PRIVATE sqlite3)
# TODO: Add tests and install targets if needed.
