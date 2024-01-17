project(_testinternalcapi)

include_directories(${baseIncludeDirs})
add_library(${PROJECT_NAME} SHARED  ${CMAKE_SOURCE_DIR}/modules/${PROJECT_NAME}.c)
target_link_directories(${PROJECT_NAME} PUBLIC ${OUT_DIR})
target_link_libraries(${PROJECT_NAME} ${PYTHONLIBS})