project(_multiprocessing)

include_directories(${baseIncludeDirs})

add_library(_multiprocessing SHARED
    ${CMAKE_SOURCE_DIR}/modules/_multiprocessing/multiprocessing.c
    ${CMAKE_SOURCE_DIR}/modules/_multiprocessing/semaphore.c
)

if(${CMAKE_SYSTEM_NAME} STREQUAL "Windows")
    set(linkLibs ${linkLibs} ${PYTHONLIBS} ws2_32)
else()
    set(linkLibs ${linkLibs} ${PYTHONLIBS})
endif()

target_link_libraries(_multiprocessing ${linkLibs})
target_link_directories(_multiprocessing PUBLIC ${OUT_DIR})