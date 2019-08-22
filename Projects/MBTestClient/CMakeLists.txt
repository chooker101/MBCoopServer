add_executable(MBTestClient)

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

target_sources(MBTestClient 
PRIVATE
    ${inc}
    ${src}
    ${pch}
)

target_include_directories(MBTestClient
PUBLIC
	"Include"
PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
	"Source"
)

target_link_libraries(MBTestClient
PRIVATE
  asio
)

source_group("MBTestClient" ${CMAKE_CURRENT_SOURCE_DIR})
source_group("MBTestClient\\Source" ${CMAKE_CURRENT_SOURCE_DIR}/Source)
source_group("MBTestClient\\Include" ${CMAKE_CURRENT_SOURCE_DIR}/Include)