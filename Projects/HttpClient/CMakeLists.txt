add_library(HttpClient STATIC)

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

target_sources(HttpClient 
    PRIVATE
        ${inc}
        ${src}
)

target_include_directories(HttpClient
    PUBLIC
	    "Include"
    PRIVATE
        "Source"
        "${PROJECT_SOURCE_DIR}/Projects/MBConnectionPlugin/Include"
)

target_link_libraries(HttpClient
    PUBLIC
        asio
)

vs_source_group(${CMAKE_CURRENT_SOURCE_DIR} "${inc}")
vs_source_group(${CMAKE_CURRENT_SOURCE_DIR} "${src}")