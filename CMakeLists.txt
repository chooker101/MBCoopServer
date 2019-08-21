cmake_minimum_required(VERSION 3.13)
project(MBCoopServer CXX)

add_subdirectory(Externals)
add_subdirectory(Projects)

set(CMAKE_CONFIGURATION_TYPES "Debug;Release")

add_definitions(_WIN32_WINNT=0x0601)

set_property(GLOBAL PROPERTY USE_FOLDERS ON) # enables folder structures in IDEs
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)