project(_socket)

include_directories(${baseIncludeDirs})

add_library(_socket SHARED
    ${CMAKE_SOURCE_DIR}/modules/socketmodule.c
)

if(${CMAKE_SYSTEM_NAME} STREQUAL "Windows")
    set(linkLibs ws2_32 iphlpapi ${PYTHONLIBS})
else()
    set(linkLibs ${PYTHONLIBS})
endif()

target_link_directories(_socket PUBLIC ${OUT_DIR})
target_link_libraries(_socket ${linkLibs})



