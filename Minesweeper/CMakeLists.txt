# CMakeList.txt : CMake project for Minesweeper, include source and define
# project specific logic here.

add_executable (minesweeper "minesweeper.cpp" "minesweeper.h" "logiciel.h" "logiciel.h")
target_link_libraries(minesweeper PRIVATE common)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET minesweeper PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
