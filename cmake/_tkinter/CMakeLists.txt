project(_tkinter)

set(tcltkDir ${CMAKE_SOURCE_DIR}/externals/tcltk-8.6.12.1/${CMAKE_SYSTEM_PROCESSOR})

add_compile_definitions(Py_TCLTK_DIR="${tcltkDir}"
                        WITH_APPINIT
                        )

include_directories(${tcltkDir}/include)
include_directories(${baseIncludeDirs})

add_library(${PROJECT_NAME} SHARED  ${CMAKE_SOURCE_DIR}/modules/${PROJECT_NAME}.c
                                    ${CMAKE_SOURCE_DIR}/modules/tkappinit.c
)

target_link_directories(${PROJECT_NAME} PUBLIC ${OUT_DIR} ${tcltkDir}/lib)
target_link_libraries(${PROJECT_NAME} ${PYTHONLIBS} tk86t tcl86t)