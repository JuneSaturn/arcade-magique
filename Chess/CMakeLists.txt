# CMakeList.txt : CMake project for Chess, include source and define
# project specific logic here.

add_executable (chess "chess.cpp" "chess.h")
target_link_libraries(chess PRIVATE common)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET chess PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
