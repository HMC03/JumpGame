cmake_minimum_required(VERSION 3.22)
Project(JumpGame)

add_executable(main main.cc)

find_package(SFML 3 REQUIRED COMPONENTS Graphics Audio Network)

target_link_libraries(main PRIVATE SFML::Graphics SFML::Audio SFML::Network)