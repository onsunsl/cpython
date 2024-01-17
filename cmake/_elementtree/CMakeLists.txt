project(_elementtree)

include_directories(${baseIncludeDirs})
include_directories(${CMAKE_SOURCE_DIR}/Modules/expat)

add_library(_elementtree SHARED ${CMAKE_SOURCE_DIR}/Modules/_elementtree.c
                                ${CMAKE_SOURCE_DIR}/Modules/expat/xmlparse.c
                                ${CMAKE_SOURCE_DIR}/Modules/expat/xmlrole.c
                                ${CMAKE_SOURCE_DIR}/Modules/expat/xmltok.c
                                ${CMAKE_SOURCE_DIR}/Modules/expat/xmltok_impl.c
                                ${CMAKE_SOURCE_DIR}/Modules/expat/xmltok_ns.c
                                ${CMAKE_SOURCE_DIR}/Modules/expat/xmltok_impl.h
                                ${CMAKE_SOURCE_DIR}/Modules/expat/expat.h
                                ${CMAKE_SOURCE_DIR}/Modules/expat/expat_external.h
                                ${CMAKE_SOURCE_DIR}/Modules/expat/expat_config.h
                                ${CMAKE_SOURCE_DIR}/Modules/expat/ascii.h
                                ${CMAKE_SOURCE_DIR}/Modules/expat/asciitab.h
                                ${CMAKE_SOURCE_DIR}/Modules/expat/iasciitab.h
                                ${CMAKE_SOURCE_DIR}/Modules/expat/internal.h
                                ${CMAKE_SOURCE_DIR}/Modules/expat/latin1tab.h
                                ${CMAKE_SOURCE_DIR}/Modules/expat/nametab.h
                                ${CMAKE_SOURCE_DIR}/Modules/expat/utf8tab.h
                                ${CMAKE_SOURCE_DIR}/Modules/expat/xmlrole.h
                                ${CMAKE_SOURCE_DIR}/Modules/expat/xmltok.h
)


target_link_directories(_elementtree PRIVATE ${OUT_DIR})
