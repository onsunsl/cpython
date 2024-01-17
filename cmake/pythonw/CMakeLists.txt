project(pythonw)


include_directories(${baseIncludeDirs})

add_executable( ${PROJECT_NAME} WIN32
                ${CMAKE_SOURCE_DIR}/PC/WinMain.c
)


target_link_directories(${PROJECT_NAME} PUBLIC ${OUT_DIR})
target_link_libraries(${PROJECT_NAME} ${PYTHONLIBS})

