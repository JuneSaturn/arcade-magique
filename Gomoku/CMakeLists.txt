# CMakeList.txt : CMake project for Gomoku, include source and define
# project specific logic here.

add_executable (Gomoku "Gomoku.cpp" "Gomoku.h")
target_link_libraries(Gomoku PRIVATE Common)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Gomoku PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
