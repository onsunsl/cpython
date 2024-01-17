project(_haslib)


include_directories(${baseIncludeDirs})
set(opensslDir ${CMAKE_SOURCE_DIR}/externals/openssl-bin-1.1.1n/${CMAKE_SYSTEM_PROCESSOR})
include_directories(${opensslDir}/include)

add_library(_haslib SHARED
    ${CMAKE_SOURCE_DIR}/modules/_hashopenssl.c
    )

target_link_directories(_haslib PUBLIC ${OUT_DIR} ${opensslDir})
target_link_libraries(_haslib PUBLIC libcrypto libssl)