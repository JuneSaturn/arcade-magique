# CMakeList.txt : CMake project for Spider, include source and define
# project specific logic here.

add_executable (Spider "Spider.cpp" "Spider.h")
target_link_libraries(Spider PRIVATE Common)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Spider PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
