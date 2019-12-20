add_library(UDPClient STATIC)

file(GLOB_RECURSE inc 
    Include/*.c 
    Include/*.cpp 
    Include/*.h 
    Include/*.hpp
)

file(GLOB_RECURSE src 
    Source/*.c 
    Source/*.cpp 
    Source/*.h 
    Source/*.hpp
)

target_sources(UDPClient 
    PRIVATE
        ${inc}
        ${src}
)

target_include_directories(UDPClient
    PUBLIC
	    "Include"
    PRIVATE
        "Source"
        "${PROJECT_SOURCE_DIR}/Projects/MBConnectionPlugin/Include"
)

target_link_libraries(UDPClient
    PUBLIC
        asio
)

vs_source_group(${CMAKE_CURRENT_SOURCE_DIR} "${inc}")
vs_source_group(${CMAKE_CURRENT_SOURCE_DIR} "${src}")