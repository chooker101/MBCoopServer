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
  asio
)

source_group("MBCoopServer" ${CMAKE_CURRENT_SOURCE_DIR})
source_group("MBCoopServer\\Source" ${CMAKE_CURRENT_SOURCE_DIR}/Source)
source_group("MBCoopServer\\Source\\HttpServer" ${CMAKE_CURRENT_SOURCE_DIR}/Source/HttpServer)
source_group("MBCoopServer\\Include" ${CMAKE_CURRENT_SOURCE_DIR}/Include)