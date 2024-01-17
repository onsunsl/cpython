project(pywlauncher)


include_directories(${baseIncludeDirs})

if(${CMAKE_SYSTEM_NAME} STREQUAL "Windows")
    add_executable(${PROJECT_NAME} WIN32 ${CMAKE_SOURCE_DIR}/PC/launcher2.c)
else()
    add_executable(${PROJECT_NAME}  ${CMAKE_SOURCE_DIR}/PC/launcher2.c)
endif()

target_link_directories(${PROJECT_NAME} PUBLIC ${OUT_DIR})
target_link_libraries(${PROJECT_NAME}  ${PYTHONLIBS} shell32 pathcch)