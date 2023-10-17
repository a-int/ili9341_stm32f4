project(${CMAKE_PROJECT_NAME})

add_executable(ili9341.elf 
	ili9341.c
)
target_include_directories(ili9341.elf PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../inc/vendor/)
target_include_directories(ili9341.elf PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../inc/ili9341/)
target_include_directories(ili9341.elf PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../external/llcm4/include/llcm/)
target_link_options(ili9341.elf PRIVATE 
    ${arch_flags} 
    ${common_flags}
    ${link_flags}
)

target_link_libraries(ili9341.elf
	llcm_core
	llcm
	usart
	spi
)
