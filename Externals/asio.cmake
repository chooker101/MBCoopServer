add_library(asio STATIC)

file(GLOB_RECURSE inc
    asio/include/*.c 
    asio/include/*.cpp 
    asio/include/*.h 
    asio/include/*.hpp
)

file(GLOB_RECURSE src 
    src/*.c 
    src/*.cpp 
    src/*.h 
    src/*.hpp
)

target_sources(asio
PRIVATE
    ${inc}
    ${src}
)