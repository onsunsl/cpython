project(pyexpat)

include_directories(${baseIncludeDirs})
include_directories(${CMAKE_SOURCE_DIR}/Modules/expat)

add_library(${PROJECT_NAME} SHARED
    ${CMAKE_SOURCE_DIR}/modules/pyexpat.c
    ${CMAKE_SOURCE_DIR}/modules/expat/xmlparse.c
    ${CMAKE_SOURCE_DIR}/modules/expat/xmlrole.c
    ${CMAKE_SOURCE_DIR}/modules/expat/xmltok.c
)


target_link_libraries(${PROJECT_NAME} ${PYTHONLIBS})
target_link_directories(${PROJECT_NAME} PUBLIC ${OUT_DIR})

