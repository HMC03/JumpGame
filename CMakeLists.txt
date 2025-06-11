cmake_minimum_required(VERSION 3.22)
Project(JumpGame)

add_executable(main main.cc)

find_package(SFML REQUIRED COMPONENTS graphics window system)

target_link_libraries(main sfml-graphics sfml-window sfml-system)