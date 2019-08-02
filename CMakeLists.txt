cmake_minimum_required(VERSION 3.14)
project(MBCoopServer CXX C)

add_subdirectory(asio)
add_subdirectory(MBCoopServer)

set(CMAKE_CONFIGURATION_TYPES "Debug;Release")

set_property(GLOBAL PROPERTY USE_FOLDERS ON) # enables folder structures in IDEs
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)