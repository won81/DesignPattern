cmake_minimum_required(VERSION 3.5)

project(example)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(MusicPlayer)

function(defstep name)
    add_executable(${name} ${name}.cpp)
    target_link_libraries(${name} state_pattern)
endfunction(defstep)

defstep(01_example)
