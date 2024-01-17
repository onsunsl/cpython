project(_ssl)

set(opensslDir ${CMAKE_SOURCE_DIR}/externals/openssl-bin-1.1.1n/${CMAKE_SYSTEM_PROCESSOR})

include_directories(${baseIncludeDirs})
include_directories(${opensslDir}/include)


add_library(_ssl SHARED
    ${CMAKE_SOURCE_DIR}/modules/_ssl.c
    ${opensslDir}/include/applink.c
)

if(${CMAKE_SYSTEM_NAME} STREQUAL "Windows")
    target_link_libraries(_ssl ws2_32 crypt32 libssl libcrypto ${PYTHONLIBS})
else()
    target_link_libraries(_ssl libssl libcrypto  ${PYTHONLIBS})
endif()

target_link_directories(_ssl PUBLIC ${opensslDir} ${OUT_DIR})