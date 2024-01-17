project(sqlite3)

add_compile_definitions(-DSQLITE_ENABLE_MATH_FUNCTIONS
                        -DSQLITE_ENABLE_FTS4
                        -DSQLITE_ENABLE_FTS5
                        -DSQLITE_ENABLE_RTREE
                        -DSQLITE_OMIT_AUTOINIT
                        )

add_compile_definitions(SQLITE_API="__declspec(dllexport)")

add_library(sqlite3 SHARED
    ${CMAKE_SOURCE_DIR}/externals/sqlite-3.38.4.0/sqlite3.c
)
