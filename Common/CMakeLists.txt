add_library(Common STATIC
    "Common.cpp"
    "Common.h"
)

target_include_directories(Common PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR} 
)