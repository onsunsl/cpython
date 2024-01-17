project(python)


include_directories(${baseIncludeDirs})

add_executable( ${PROJECT_NAME}
                ${CMAKE_SOURCE_DIR}/Programs/python.c
)


target_link_directories(${PROJECT_NAME} PUBLIC ${OUT_DIR})
target_link_libraries(${PROJECT_NAME} ${PYTHONLIBS})

