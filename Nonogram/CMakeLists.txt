# CMakeList.txt : CMake project for Nonogram, include source and define
# project specific logic here.

add_executable (nonogram "nonogram.cpp" "nonogram.h")
target_link_libraries(nonogram PRIVATE common)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET nonogram PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
