# CMakeList.txt : CMake project for Snake, include source and define
# project specific logic here.

add_executable (Snake "Snake.cpp" "Snake.h")
target_link_libraries(Snake PRIVATE Common)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Snake PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
