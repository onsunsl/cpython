project(_queue)

include_directories(${baseIncludeDirs})

add_library(_queue SHARED
    ${CMAKE_SOURCE_DIR}/modules/_queuemodule.c
)

target_link_directories(_queue PUBLIC ${OUT_DIR})
target_link_libraries(_queue ${PYTHONLIBS})



