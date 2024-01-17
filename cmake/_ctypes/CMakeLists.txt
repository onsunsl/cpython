project(_ctypes)


include_directories(${baseIncludeDirs})

set(ffiDir ${CMAKE_SOURCE_DIR}/externals/libffi-3.4.2/${CMAKE_SYSTEM_PROCESSOR})

include_directories(${ffiDir}/include)
message(STATUS "ffiDir: ${ffiDir}")

add_compile_definitions(-DUSING_MALLOC_CLOSURE_DOT_C=1)


add_library(_ctypes SHARED  ${CMAKE_SOURCE_DIR}/Modules/_ctypes/_ctypes.c
                            ${CMAKE_SOURCE_DIR}/Modules/_ctypes/callbacks.c
                            ${CMAKE_SOURCE_DIR}/Modules/_ctypes/callproc.c
                            ${CMAKE_SOURCE_DIR}/Modules/_ctypes/stgdict.c
                            ${CMAKE_SOURCE_DIR}/Modules/_ctypes/cfield.c
                            ${CMAKE_SOURCE_DIR}/Modules/_ctypes/malloc_closure.c
)
target_link_libraries(_ctypes ${PYTHON_LIBRARIES} libffi-8.lib)
target_link_directories(_ctypes PRIVATE ${OUT_DIR} ${ffiDir})



