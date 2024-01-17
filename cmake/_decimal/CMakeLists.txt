project(_decimal)




set(libmpdecSource  ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/basearith.c
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/constants.c
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/context.c
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/convolute.c
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/crt.c
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/difradix2.c
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/fnt.c
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/fourstep.c
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/io.c
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/mpdecimal.c
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/mpalloc.c
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/numbertheory.c
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/sixstep.c
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/transpose.c
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/basearith.h
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/bits.h
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/constants.h
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/convolute.h
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/crt.h
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/difradix2.h
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/docstrings.h
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/fnt.h
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/fourstep.h
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/mpdecimal.h
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/numbertheory.h
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/sixstep.h
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/transpose.h
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/typearith.h
                    ${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec/umodarith.h
)

add_definitions(-D_CRT_SECURE_NO_WARNINGS)
add_definitions(-DMASM)
if (CMAKE_CL_64)
    add_definitions(-DCONFIG_64)
else()
    add_definitions(-DCONFIG_32)
endif()
add_definitions(-DANSI)

include_directories(${baseIncludeDirs})
include_directories(${CMAKE_SOURCE_DIR}/Modules/_decimal)
include_directories(${CMAKE_SOURCE_DIR}/Modules/_decimal/libmpdec)

add_library(_decimal SHARED ${libmpdecSource} ${CMAKE_SOURCE_DIR}/Modules/_decimal/_decimal.c)

target_link_directories(_decimal PRIVATE ${OUT_DIR})
