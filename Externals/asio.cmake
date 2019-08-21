add_library(asio INTERFACE)

file(GLOB_RECURSE inc
    asio/asio/include/*.h 
    asio/asio/include/*.hpp
)

target_compile_definitions(asio
INTERFACE
	ASIO_STANDALONE
	ASIO_HAS_STD_TYPE_TRAITS
	ASIO_HAS_STD_ADDRESSOF
	ASIO_HAS_STD_ARRAY
	ASIO_HAS_CSTDINT
	ASIO_HAS_STD_SHARED_PTR
)

target_sources(asio
INTERFACE
    ${inc}
)

target_include_directories(asio
INTERFACE
	"asio/asio/include"
)

source_group(asio ${CMAKE_CURRENT_SOURCE_DIR}/asio)