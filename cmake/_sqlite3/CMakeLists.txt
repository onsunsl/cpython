project(_sqlite3)


include_directories(${baseIncludeDirs})
include_directories(${CMAKE_SOURCE_DIR}/externals/sqlite-3.38.4.0)

add_compile_definitions(-DPY_SQLITE_HAVE_SERIALIZE
                        -DPY_SQLITE_ENABLE_LOAD_EXTENSION
                        )

set(souces  ${CMAKE_SOURCE_DIR}/modules/_sqlite/connection.c
            ${CMAKE_SOURCE_DIR}/modules/_sqlite/cursor.c
            ${CMAKE_SOURCE_DIR}/modules/_sqlite/microprotocols.c
            ${CMAKE_SOURCE_DIR}/modules/_sqlite/module.c
            ${CMAKE_SOURCE_DIR}/modules/_sqlite/prepare_protocol.c
            ${CMAKE_SOURCE_DIR}/modules/_sqlite/row.c
            ${CMAKE_SOURCE_DIR}/modules/_sqlite/statement.c
            ${CMAKE_SOURCE_DIR}/modules/_sqlite/util.c
            ${CMAKE_SOURCE_DIR}/modules/_sqlite/blob.c
)


set(headers ${CMAKE_SOURCE_DIR}/modules/_sqlite/connection.h
            ${CMAKE_SOURCE_DIR}/modules/_sqlite/cursor.h
            ${CMAKE_SOURCE_DIR}/modules/_sqlite/microprotocols.h
            ${CMAKE_SOURCE_DIR}/modules/_sqlite/module.h
            ${CMAKE_SOURCE_DIR}/modules/_sqlite/prepare_protocol.h
            ${CMAKE_SOURCE_DIR}/modules/_sqlite/row.h
            ${CMAKE_SOURCE_DIR}/modules/_sqlite/statement.h
            ${CMAKE_SOURCE_DIR}/modules/_sqlite/util.h
            ${CMAKE_SOURCE_DIR}/modules/_sqlite/blob.h
)

add_library(_sqlite3 SHARED ${souces})
target_link_directories(_sqlite3 PUBLIC ${OUT_DIR})
target_link_libraries(_sqlite3 ${PYTHONLIBS} sqlite3)

