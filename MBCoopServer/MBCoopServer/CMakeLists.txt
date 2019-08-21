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

target_sources(MBCoopServer 
PRIVATE
	${inc}
	${src}
)

target_include_directories(MBCoopServer
PUBLIC
	"Include"
PRIVATE
	"Source"
)

target_link_libraries(MBCoopServer
PRIVATE
  asio
)


source_group(MBCoopServer ${CMAKE_CURRENT_SOURCE_DIR})