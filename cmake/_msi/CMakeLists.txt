project(_msi)

include_directories(${baseIncludeDirs})

add_library(_msi SHARED ${CMAKE_SOURCE_DIR}/PC/_msi.c)

target_link_libraries(_msi ${PYHTONLIBS} cabinet msi rpcrt4)
target_link_directories(_msi PUBLIC ${OUT_DIR})