add_executable(MBCoopServer)

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

file(GLOB pch
    *.c 
    *.cpp 
    *.h 
    *.hpp
)

target_sources(MBCoopServer 
PRIVATE
    ${inc}
    ${src}
    ${pch}
)

target_include_directories(MBCoopServer
PUBLIC
	"Include"
PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
	"Source"
)

target_link_libraries(MBCoopServer
PRIVATE
    MBConnectionPlugin
)

add_custom_command(TARGET MBCoopServer PRE_BUILD
    COMMAND nuget restore "${CMAKE_BINARY_DIR}/MBCoopServer.sln"
)

vs_source_group(${CMAKE_CURRENT_SOURCE_DIR} "${inc}")
vs_source_group(${CMAKE_CURRENT_SOURCE_DIR} "${src}")
vs_source_group(${CMAKE_CURRENT_SOURCE_DIR} "${pch}")