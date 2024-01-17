project(_lzma)

set(xzDir ${CMAKE_SOURCE_DIR}/externals/xz-5.2.5)

include_directories(${baseIncludeDirs})
include_directories(${xzDir}/src/liblzma/api)

add_library(_lzma SHARED
    ${CMAKE_SOURCE_DIR}/modules/_lzmamodule.c
)


target_link_directories(_lzma PRIVATE ${OUT_DIR})
target_link_libraries(_lzma PRIVATE ${pythonLibs} liblzma)
