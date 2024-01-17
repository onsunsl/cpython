project(_overlapped)

include_directories(${baseIncludeDirs})

add_library(_overlapped SHARED
    ${CMAKE_SOURCE_DIR}/modules/overlapped.c
)


target_link_libraries(_overlapped ${PYTHONLIBS} ws2_32)
target_link_directories(_overlapped PUBLIC ${OUT_DIR})




