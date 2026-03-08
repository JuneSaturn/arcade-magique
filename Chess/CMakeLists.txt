# CMakeList.txt : CMake project for Chess, include source and define
# project specific logic here.

add_executable (Chess "Chess.cpp" "Chess.h")
target_link_libraries(Chess PRIVATE Common)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Chess PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
