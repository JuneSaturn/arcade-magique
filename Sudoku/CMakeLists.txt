# CMakeList.txt : CMake project for Sudoku, include source and define
# project specific logic here.

add_executable (Sudoku "Sudoku.cpp" "Sudoku.h")
target_link_libraries(Sudoku PRIVATE Common)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Sudoku PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
