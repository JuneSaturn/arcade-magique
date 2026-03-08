# CMakeList.txt : CMake project for Gomoku, include source and define
# project specific logic here.

add_executable (gomoku "gomoku.cpp" "gomoku.h")
target_link_libraries(gomoku PRIVATE common)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET gomoku PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
