project(pyshellext)


include_directories(${baseIncludeDirs})

add_library(${PROJECT_NAME}  SHARED
            ${CMAKE_SOURCE_DIR}/PC/pyshellext.cpp
            )


if(MSVC)
    # Add compile options
    target_compile_options(${PROJECT_NAME} PRIVATE
        /Ob1
    )

    # Add compile definitions
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        _UNICODE
        UNICODE
    )
endif()



target_link_directories(${PROJECT_NAME} PUBLIC ${OUT_DIR})
target_link_libraries(${PROJECT_NAME}  ${PYTHONLIBS} version shlwapi)