# CMakeList.txt : CMake project for Spider, include source and define
# project specific logic here.

add_executable (spider "spider.cpp" "spider.h")
target_link_libraries(spider PRIVATE common)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET spider PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
