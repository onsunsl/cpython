cmake_minimum_required(VERSION 3.20)

project(cpython)
set(CMAKE_CXX_STANDARD 14)
#set(CMAKE_SHARED_LIBRARY_SUFFIX .pyd)
set(CMAKE_DEBUG_POSTFIX "_d")
set(CMAKE_RELEASE_POSTFIX  "")

# windows系统cmake生成c++动态库无lib文件解决方法
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_compile_definitions(FIELD3=2101)


# 从patchlevel.h 的宏定义读取python 版本信息
# <MajorVersionNumber>$([System.Text.RegularExpressions.Regex]::Match($(_PatchLevelContent), `define\s+PY_MAJOR_VERSION\s+(\d+)`).Groups[1].Value)</MajorVersionNumber>
# <MinorVersionNumber>$([System.Text.RegularExpressions.Regex]::Match($(_PatchLevelContent), `define\s+PY_MINOR_VERSION\s+(\d+)`).Groups[1].Value)</MinorVersionNumber>
file(STRINGS "Include/patchlevel.h" contents)
string(REGEX MATCH "define[ ]+PY_MAJOR_VERSION[ ]+([0-9])" M_OUT ${contents})
set(MajorVersionNumber ${CMAKE_MATCH_1})
string(REGEX MATCH "define[ ]+PY_MINOR_VERSION[ ]+([0-9]+)" M_OUT ${contents})
set(MinorVersionNumber ${CMAKE_MATCH_1})
string(REGEX MATCH "define[ ]+PY_MICRO_VERSION[ ]+([0-9]+)" M_OUT ${contents})
set(MicroVersionNumber ${CMAKE_MATCH_1})
message("Python Version:${PY_MAJOR_VERSION}.${PY_MINOR_VERSION}.${PY_MICRO_VERSION}")

if (${CMAKE_BUILD_TYPE} MATCHES Debug)
    set(pythonCoreName python${MajorVersionNumber}${MinorVersionNumber})
else()
    set(pythonCoreName python${MajorVersionNumber})
endif ()
message("pythonCoreName:" ${pythonCoreName})

set(OUT_DIR ${CMAKE_BINARY_DIR}/bin)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${OUT_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${OUT_DIR})

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG ${OUT_DIR})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE ${OUT_DIR})

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_DEBUG ${OUT_DIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_RELEASE ${OUT_DIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${OUT_DIR})
message("CMAKE_OSX_ARCHITECTURES:${CMAKE_SYSTEM_PROCESSOR}")

add_definitions(-DCONFIG_64)
add_definitions(-D_WIN64)
add_definitions(-D_M_X64)


set(baseIncludeDirs ${CMAKE_SOURCE_DIR}/Include
                    ${CMAKE_SOURCE_DIR}/Include/cpython
                    ${CMAKE_SOURCE_DIR}/Include/internal
                    ${CMAKE_SOURCE_DIR}/PC)

add_subdirectory(cmake/python3)
add_subdirectory(cmake/python3core)
add_subdirectory(cmake/_asyncio)
add_subdirectory(cmake/_bz2)
add_subdirectory(cmake/_ctypes)
add_subdirectory(cmake/_decimal)
add_subdirectory(cmake/_elementtree)
add_subdirectory(cmake/_freeze_module)
add_subdirectory(cmake/_haslib)
add_subdirectory(cmake/liblzma)
add_subdirectory(cmake/_lzma)
add_subdirectory(cmake/_msi)
add_subdirectory(cmake/_multiprocessing)
add_subdirectory(cmake/_overlapped)
add_subdirectory(cmake/_queue)
add_subdirectory(cmake/_socket)
add_subdirectory(cmake/sqlite3)
add_subdirectory(cmake/_sqlite3)
add_subdirectory(cmake/_ssl)
add_subdirectory(cmake/_testbuffer)
add_subdirectory(cmake/_testcapi)
add_subdirectory(cmake/_testconsole)
add_subdirectory(cmake/_testembed)
add_subdirectory(cmake/_testimportmultiple)
add_subdirectory(cmake/_testinternalcapi)
add_subdirectory(cmake/_testmultiphase)
add_subdirectory(cmake/_tkinter)
add_subdirectory(cmake/_uuid)
add_subdirectory(cmake/_zoneinfo)
add_subdirectory(cmake/pyexpat)
add_subdirectory(cmake/pylauncher)
add_subdirectory(cmake/pyshellext)
add_subdirectory(cmake/python)
add_subdirectory(cmake/python_uwp)
add_subdirectory(cmake/pythonw)
add_subdirectory(cmake/pythonw_uwp)
add_subdirectory(cmake/pywlauncher)
add_subdirectory(cmake/select)
add_subdirectory(cmake/unicodedata)
add_subdirectory(cmake/venvlauncher)
