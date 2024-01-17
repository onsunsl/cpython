project(select)


include_directories(${baseIncludeDirs})


add_library(${PROJECT_NAME} ${CMAKE_SOURCE_DIR}/Modules/selectmodule.c)


target_link_directories(${PROJECT_NAME} PUBLIC ${OUT_DIR})
target_link_libraries(${PROJECT_NAME}  ${PYTHONLIBS})