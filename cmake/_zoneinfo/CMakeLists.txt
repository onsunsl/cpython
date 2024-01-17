project(_zoneinfo)

include_directories(${baseIncludeDirs})
add_library(${PROJECT_NAME} SHARED  ${CMAKE_SOURCE_DIR}/modules/${PROJECT_NAME}.c)
target_link_directories(${PROJECT_NAME} PUBLIC ${OUT_DIR})

if(${CMAKE_SYSTEM_NAME} STREQUAL "Windows")
    target_link_libraries(${PROJECT_NAME} ${PYTHONLIBS} rpcrt4)
else()
    target_link_libraries(${PROJECT_NAME} ${PYTHONLIBS})
endif()