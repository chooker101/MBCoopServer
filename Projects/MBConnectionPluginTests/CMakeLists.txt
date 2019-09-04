add_executable(MBConnectionPluginTests)

file(GLOB_RECURSE tst 
    Tests/*.c 
    Tests/*.cpp 
    Tests/*.h 
    Tests/*.hpp
)

file(GLOB src
    *.c 
    *.cpp 
    *.h 
    *.hpp
)

target_sources(MBConnectionPluginTests 
    PRIVATE
        ${tst}
        ${src}
)

target_include_directories(MBConnectionPluginTests
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(MBConnectionPluginTests
    PRIVATE
        MBConnectionPlugin
        gtest
)

vs_source_group(${CMAKE_CURRENT_SOURCE_DIR} "${tst}")
vs_source_group(${CMAKE_CURRENT_SOURCE_DIR} "${src}")