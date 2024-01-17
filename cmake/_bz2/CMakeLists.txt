project(_bz2)

set(bzip2SourceDir ${CMAKE_SOURCE_DIR}/externals/bzip2-1.0.8)

set(bzip2Source ${bzip2SourceDir}/bzlib.c
                ${bzip2SourceDir}/bzlib.h
                ${bzip2SourceDir}/bzlib_private.h
                ${bzip2SourceDir}/compress.c
                ${bzip2SourceDir}/crctable.c
                ${bzip2SourceDir}/decompress.c
                ${bzip2SourceDir}/huffman.c
                ${bzip2SourceDir}/randtable.c
                ${bzip2SourceDir}/blocksort.c
                ${bzip2SourceDir}/bzlib_private.h
                ${bzip2SourceDir}/bzlib.h
                )


include_directories(${baseIncludeDirs})
include_directories(${bzip2SourceDir})

add_library(_bz2 SHARED ${CMAKE_SOURCE_DIR}/Modules/_bz2module.c ${bzip2Source})
target_link_directories(${PROJECT_NAME} PRIVATE ${OUT_DIR})
