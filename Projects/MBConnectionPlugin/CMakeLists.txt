add_library(MBConnectionPlugin STATIC)

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

target_sources(MBConnectionPlugin 
    PRIVATE
        ${inc}
        ${src}
)

target_include_directories(MBConnectionPlugin
    PUBLIC
	    "Include"
    PRIVATE
	    "Source"
)

target_link_libraries(MBConnectionPlugin
    PUBLIC
        HttpClient
)

vs_source_group(${CMAKE_CURRENT_SOURCE_DIR} "${inc}")
vs_source_group(${CMAKE_CURRENT_SOURCE_DIR} "${src}")