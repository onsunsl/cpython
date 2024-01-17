project(python_uwp)


include_directories(${baseIncludeDirs})

add_executable( ${PROJECT_NAME}
                ${CMAKE_SOURCE_DIR}/PC/python_uwp.cpp
)


if(MSVC)
    # Add compile options
    target_compile_options(${PROJECT_NAME} PRIVATE
        /EHsc /std:c++17
    )
endif()

target_link_directories(${PROJECT_NAME} PUBLIC ${OUT_DIR})
target_link_libraries(${PROJECT_NAME} ${PYTHONLIBS})

