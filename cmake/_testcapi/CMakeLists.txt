project(_testcapi)

include_directories(${baseIncludeDirs})

add_library(_testcapi SHARED
    ${CMAKE_SOURCE_DIR}/modules/_testcapimodule.c
)

target_link_libraries(_testcapi ${PYTHONLIBS})
target_link_directories(_testcapi PUBLIC ${OUT_DIR})
