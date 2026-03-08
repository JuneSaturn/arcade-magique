# CMakeList.txt : CMake project for Klondike, include source and define
# project specific logic here.

add_executable (klondike "klondike.cpp" "klondike.h")
target_link_libraries(klondike PRIVATE common)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET klondike PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
