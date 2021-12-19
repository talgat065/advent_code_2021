#set(CMAKE_CXX_STANDARD 17)

add_executable(day01 main.cpp)

configure_file(input.txt ${CMAKE_CURRENT_BINARY_DIR}/input.txt)
