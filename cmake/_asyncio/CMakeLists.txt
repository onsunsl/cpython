project(_asyncio)


include_directories(${baseIncludeDirs})

add_library(_asyncio SHARED ${CMAKE_SOURCE_DIR}/Modules/_asynciomodule.c)
target_link_directories(${PROJECT_NAME} PRIVATE ${OUT_DIR})