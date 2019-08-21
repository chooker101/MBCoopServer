add_executable(MBCoopServer)

file(GLOB_RECURSE src 
    *.c 
    *.cpp 
    *.h 
    *.hpp
)

target_sources(MBCoopServer 
PRIVATE
    ${src}
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


source_group(MBCoopServer ${CMAKE_CURRENT_SOURCE_DIR})