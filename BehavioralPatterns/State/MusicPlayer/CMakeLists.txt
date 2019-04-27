project (state_pattern)

file(GLOB_RECURSE sources src/*.cpp)
file(GLOB_RECURSE include inc/*.hpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror -Wall -Wextra -Wconversion -Wshadow -Wno-error=cpp -Wformat -Wformat-security")

add_library(${PROJECT_NAME} STATIC ${include} ${sources})
target_include_directories(${PROJECT_NAME} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/inc>)
