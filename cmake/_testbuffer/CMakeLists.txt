project(_testbuffer)

include_directories(${baseIncludeDirs})

add_library(_testbuffer SHARED
    ${CMAKE_SOURCE_DIR}/modules/_testbuffer.c
    )

target_link_libraries(_testbuffer ${PYTHONLIBS})
target_link_directories(_testbuffer PUBLIC ${OUT_DIR})

