add_library(asio STATIC)

file(GLOB_RECURSE inc
    asio/asio/include/*.c 
    asio/asio/include/*.cpp 
    asio/asio/include/*.h 
    asio/asio/include/*.hpp
)

file(GLOB_RECURSE src 
    asio/asio/src/*.c 
    asio/asio/src/*.cpp 
    asio/asio/src/*.h 
    asio/asio/src/*.hpp
)

add_definitions(
	-DASIO_STANDALONE
	-DASIO_HAS_STD_TYPE_TRAITS
	-DASIO_HAS_STD_ADDRESSOF
	-DASIO_HAS_STD_ARRAY
	-DASIO_HAS_CSTDINT
	-DASIO_HAS_STD_SHARED_PTR
)

target_sources(asio
PRIVATE
    ${inc}
    ${src}
)

target_include_directories(asio
PUBLIC
	"asio/asio/include"
PRIVATE
	"asio/asio/src"
)

source_group(asio ${CMAKE_CURRENT_SOURCE_DIR}/asio)