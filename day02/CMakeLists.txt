#set(CMAKE_CXX_STANDARD 17)

add_executable(day2 main.cpp)

configure_file(input.txt ${CMAKE_CURRENT_BINARY_DIR}/input.txt)
