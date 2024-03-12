project(python)


include_directories(${baseIncludeDirs})

add_executable( ${PROJECT_NAME}
                ${CMAKE_SOURCE_DIR}/Programs/python.c
)


target_link_directories(${PROJECT_NAME} PUBLIC ${OUT_DIR})
target_link_libraries(${PROJECT_NAME} ${PYTHONLIBS})


add_dependencies(${PROJECT_NAME} python3
                ${pythonCoreName}
                _asyncio
                _bz2
                _ctypes
                _decimal
                _elementtree
                _freeze_module
                _haslib
                liblzma
                _lzma
                _msi
                _multiprocessing
                _overlapped
                _queue
                _socket
                sqlite3
                _sqlite3
                _ssl
                _testbuffer
                _testcapi
                _testconsole
                _testembed
                _testimportmultiple
                _testinternalcapi
                _testmultiphase
                _tkinter
                _uuid
                _zoneinfo
                pyexpat
                pylauncher
                pyshellext
                python
                python_uwp
                pythonw
                pythonw_uwp
                pywlauncher
                select
                unicodedata
                venvlauncher)