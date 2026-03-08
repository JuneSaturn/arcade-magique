# CMakeList.txt : CMake project for Nonogram, include source and define
# project specific logic here.

add_executable (Nonogram "Nonogram.cpp" "Nonogram.h")
target_link_libraries(Nonogram PRIVATE Common)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Nonogram PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
