# CMakeList.txt : CMake project for Minesweeper, include source and define
# project specific logic here.

add_executable (Minesweeper "Minesweeper.cpp" "Minesweeper.h"  )
target_link_libraries(Minesweeper PRIVATE Common)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Minesweeper PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
