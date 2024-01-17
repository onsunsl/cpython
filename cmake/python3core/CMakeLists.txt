cmake_minimum_required(VERSION 3.20)

project(${pythonCoreName} )

set(zlibSource      ${CMAKE_SOURCE_DIR}/externals/zlib-1.2.12/adler32.c
                    ${CMAKE_SOURCE_DIR}/externals/zlib-1.2.12/compress.c
                    ${CMAKE_SOURCE_DIR}/externals/zlib-1.2.12/crc32.c
                    ${CMAKE_SOURCE_DIR}/externals/zlib-1.2.12/deflate.c
                    ${CMAKE_SOURCE_DIR}/externals/zlib-1.2.12/infback.c
                    ${CMAKE_SOURCE_DIR}/externals/zlib-1.2.12/inffast.c
                    ${CMAKE_SOURCE_DIR}/externals/zlib-1.2.12/inflate.c
                    ${CMAKE_SOURCE_DIR}/externals/zlib-1.2.12/inftrees.c
                    ${CMAKE_SOURCE_DIR}/externals/zlib-1.2.12/trees.c
                    ${CMAKE_SOURCE_DIR}/externals/zlib-1.2.12/uncompr.c
                    ${CMAKE_SOURCE_DIR}/externals/zlib-1.2.12/zutil.c
)

set(moduleSource    ${CMAKE_SOURCE_DIR}/Modules/_abc.c
                    ${CMAKE_SOURCE_DIR}/Modules/_bisectmodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/_blake2/blake2module.c
                    ${CMAKE_SOURCE_DIR}/Modules/_blake2/blake2b_impl.c
                    ${CMAKE_SOURCE_DIR}/Modules/_blake2/blake2s_impl.c
                    ${CMAKE_SOURCE_DIR}/Modules/_codecsmodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/_collectionsmodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/_csv.c
                    ${CMAKE_SOURCE_DIR}/Modules/_functoolsmodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/_heapqmodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/_json.c
                    ${CMAKE_SOURCE_DIR}/Modules/_localemodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/_lsprof.c
                    ${CMAKE_SOURCE_DIR}/Modules/_pickle.c
                    ${CMAKE_SOURCE_DIR}/Modules/_randommodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/_sha3/sha3module.c
                    ${CMAKE_SOURCE_DIR}/Modules/_sre/sre.c
                    ${CMAKE_SOURCE_DIR}/Modules/_sre/sre.h
                    ${CMAKE_SOURCE_DIR}/Modules/_sre/sre_constants.h
                    ${CMAKE_SOURCE_DIR}/Modules/_sre/sre_lib.h
                    ${CMAKE_SOURCE_DIR}/Modules/_statisticsmodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/_typingmodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/_struct.c
                    ${CMAKE_SOURCE_DIR}/Modules/_weakref.c
                    ${CMAKE_SOURCE_DIR}/Modules/arraymodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/atexitmodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/audioop.c
                    ${CMAKE_SOURCE_DIR}/Modules/binascii.c
                    ${CMAKE_SOURCE_DIR}/Modules/cmathmodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/_datetimemodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/errnomodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/faulthandler.c
                    ${CMAKE_SOURCE_DIR}/Modules/gcmodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/itertoolsmodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/main.c
                    ${CMAKE_SOURCE_DIR}/Modules/mathmodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/md5module.c
                    ${CMAKE_SOURCE_DIR}/Modules/mmapmodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/_operator.c
                    ${CMAKE_SOURCE_DIR}/Modules/posixmodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/rotatingtree.c
                    ${CMAKE_SOURCE_DIR}/Modules/sha1module.c
                    ${CMAKE_SOURCE_DIR}/Modules/sha256module.c
                    ${CMAKE_SOURCE_DIR}/Modules/sha512module.c
                    ${CMAKE_SOURCE_DIR}/Modules/signalmodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/symtablemodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/_threadmodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/timemodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/xxsubtype.c
                    ${CMAKE_SOURCE_DIR}/Modules/zlibmodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/_io/fileio.c
                    ${CMAKE_SOURCE_DIR}/Modules/_io/bytesio.c
                    ${CMAKE_SOURCE_DIR}/Modules/_io/stringio.c
                    ${CMAKE_SOURCE_DIR}/Modules/_io/bufferedio.c
                    ${CMAKE_SOURCE_DIR}/Modules/_io/iobase.c
                    ${CMAKE_SOURCE_DIR}/Modules/_io/textio.c
                    ${CMAKE_SOURCE_DIR}/Modules/_io/winconsoleio.c
                    ${CMAKE_SOURCE_DIR}/Modules/_io/_iomodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/cjkcodecs/_codecs_cn.c
                    ${CMAKE_SOURCE_DIR}/Modules/cjkcodecs/_codecs_hk.c
                    ${CMAKE_SOURCE_DIR}/Modules/cjkcodecs/_codecs_iso2022.c
                    ${CMAKE_SOURCE_DIR}/Modules/cjkcodecs/_codecs_jp.c
                    ${CMAKE_SOURCE_DIR}/Modules/cjkcodecs/_codecs_kr.c
                    ${CMAKE_SOURCE_DIR}/Modules/cjkcodecs/_codecs_tw.c
                    ${CMAKE_SOURCE_DIR}/Modules/cjkcodecs/multibytecodec.c
                    ${CMAKE_SOURCE_DIR}/Modules/_winapi.c
                    ${CMAKE_SOURCE_DIR}/Modules/_stat.c
                    ${CMAKE_SOURCE_DIR}/Modules/_opcode.c
                    ${CMAKE_SOURCE_DIR}/Modules/_tracemalloc.c
                    ${CMAKE_SOURCE_DIR}/Modules/_contextvarsmodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/_xxsubinterpretersmodule.c
                    ${CMAKE_SOURCE_DIR}/Modules/getpath.c
                    ${CMAKE_SOURCE_DIR}/Modules/getbuildinfo.c
                    ${CMAKE_SOURCE_DIR}/Modules/getbuildinfo.c
)

set(objectSouce     ${CMAKE_SOURCE_DIR}/Objects/abstract.c
                    ${CMAKE_SOURCE_DIR}/Objects/accu.c
                    ${CMAKE_SOURCE_DIR}/Objects/boolobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/bytes_methods.c
                    ${CMAKE_SOURCE_DIR}/Objects/bytearrayobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/bytesobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/call.c
                    ${CMAKE_SOURCE_DIR}/Objects/capsule.c
                    ${CMAKE_SOURCE_DIR}/Objects/cellobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/classobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/codeobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/complexobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/descrobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/dictobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/enumobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/exceptions.c
                    ${CMAKE_SOURCE_DIR}/Objects/fileobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/floatobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/frameobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/funcobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/genobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/iterobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/listobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/longobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/memoryobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/methodobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/moduleobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/object.c
                    ${CMAKE_SOURCE_DIR}/Objects/obmalloc.c
                    ${CMAKE_SOURCE_DIR}/Objects/picklebufobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/rangeobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/setobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/sliceobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/structseq.c
                    ${CMAKE_SOURCE_DIR}/Objects/tupleobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/typeobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/unicodectype.c
                    ${CMAKE_SOURCE_DIR}/Objects/unicodeobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/weakrefobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/namespaceobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/interpreteridobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/genericaliasobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/unionobject.c
                    ${CMAKE_SOURCE_DIR}/Objects/odictobject.c
)

set(pythonSource    ${CMAKE_SOURCE_DIR}/Python/_warnings.c
                    ${CMAKE_SOURCE_DIR}/Python/asdl.c
                    ${CMAKE_SOURCE_DIR}/Python/ast.c
                    ${CMAKE_SOURCE_DIR}/Python/ast_opt.c
                    ${CMAKE_SOURCE_DIR}/Python/ast_unparse.c
                    ${CMAKE_SOURCE_DIR}/Python/bltinmodule.c
                    ${CMAKE_SOURCE_DIR}/Python/ceval.c
                    ${CMAKE_SOURCE_DIR}/Python/codecs.c
                    ${CMAKE_SOURCE_DIR}/Python/compile.c
                    ${CMAKE_SOURCE_DIR}/Python/dynamic_annotations.c
                    ${CMAKE_SOURCE_DIR}/Python/dynload_win.c
                    ${CMAKE_SOURCE_DIR}/Python/errors.c
                    ${CMAKE_SOURCE_DIR}/Python/fileutils.c
                    ${CMAKE_SOURCE_DIR}/Python/formatter_unicode.c
                    ${CMAKE_SOURCE_DIR}/Python/frozen.c
                    ${CMAKE_SOURCE_DIR}/Python/future.c
                    ${CMAKE_SOURCE_DIR}/Python/getargs.c
                    ${CMAKE_SOURCE_DIR}/Python/getcompiler.c
                    ${CMAKE_SOURCE_DIR}/Python/getcopyright.c
                    ${CMAKE_SOURCE_DIR}/Python/getopt.c
                    ${CMAKE_SOURCE_DIR}/Python/getplatform.c
                    ${CMAKE_SOURCE_DIR}/Python/getversion.c
                    ${CMAKE_SOURCE_DIR}/Python/hashtable.c
                    ${CMAKE_SOURCE_DIR}/Python/import.c
                    ${CMAKE_SOURCE_DIR}/Python/importdl.c
                    ${CMAKE_SOURCE_DIR}/Python/initconfig.c
                    ${CMAKE_SOURCE_DIR}/Python/marshal.c
                    ${CMAKE_SOURCE_DIR}/Python/modsupport.c
                    ${CMAKE_SOURCE_DIR}/Python/mysnprintf.c
                    ${CMAKE_SOURCE_DIR}/Python/mystrtoul.c
                    ${CMAKE_SOURCE_DIR}/Python/pathconfig.c
                    ${CMAKE_SOURCE_DIR}/Python/preconfig.c
                    ${CMAKE_SOURCE_DIR}/Python/pyarena.c
                    ${CMAKE_SOURCE_DIR}/Python/pyctype.c
                    ${CMAKE_SOURCE_DIR}/Python/pyfpe.c
                    ${CMAKE_SOURCE_DIR}/Python/pylifecycle.c
                    ${CMAKE_SOURCE_DIR}/Python/pymath.c
                    ${CMAKE_SOURCE_DIR}/Python/pytime.c
                    ${CMAKE_SOURCE_DIR}/Python/pystate.c
                    ${CMAKE_SOURCE_DIR}/Python/pystrcmp.c
                    ${CMAKE_SOURCE_DIR}/Python/pystrhex.c
                    ${CMAKE_SOURCE_DIR}/Python/pystrtod.c
                    ${CMAKE_SOURCE_DIR}/Python/dtoa.c
                    ${CMAKE_SOURCE_DIR}/Python/Python-ast.c
                    ${CMAKE_SOURCE_DIR}/Python/pythonrun.c
                    ${CMAKE_SOURCE_DIR}/Python/specialize.c
                    ${CMAKE_SOURCE_DIR}/Python/structmember.c
                    ${CMAKE_SOURCE_DIR}/Python/symtable.c
                    ${CMAKE_SOURCE_DIR}/Python/sysmodule.c
                    ${CMAKE_SOURCE_DIR}/Python/thread.c
                    ${CMAKE_SOURCE_DIR}/Python/traceback.c
                    ${CMAKE_SOURCE_DIR}/Python/bootstrap_hash.c
                    ${CMAKE_SOURCE_DIR}/Python/pyhash.c
                    ${CMAKE_SOURCE_DIR}/Python/hamt.c
                    ${CMAKE_SOURCE_DIR}/Python/context.c
                    ${CMAKE_SOURCE_DIR}/Python/frame.c
                    ${CMAKE_SOURCE_DIR}/Python/suggestions.c
                    ${CMAKE_SOURCE_DIR}/Python/Python-tokenize.c
                    ${CMAKE_SOURCE_DIR}/Python/deepfreeze/deepfreeze.c
        )

set(parserSource    ${CMAKE_SOURCE_DIR}/Parser/myreadline.c
                    ${CMAKE_SOURCE_DIR}/Parser/tokenizer.c
                    ${CMAKE_SOURCE_DIR}/Parser/token.c
                    ${CMAKE_SOURCE_DIR}/Parser/parser.c
                    ${CMAKE_SOURCE_DIR}/Parser/pegen.c
                    ${CMAKE_SOURCE_DIR}/Parser/pegen_errors.c
                    ${CMAKE_SOURCE_DIR}/Parser/action_helpers.c
                    ${CMAKE_SOURCE_DIR}/Parser/peg_api.c
                    ${CMAKE_SOURCE_DIR}/Parser/string_parser.c
)

set(pcSource        ${CMAKE_SOURCE_DIR}/PC/winreg.c
                    ${CMAKE_SOURCE_DIR}/PC/config.c
                    ${CMAKE_SOURCE_DIR}/PC/dl_nt.c
                    ${CMAKE_SOURCE_DIR}/PC/msvcrtmodule.c
                    ${CMAKE_SOURCE_DIR}/PC/invalid_parameter_handler.c
)

set(allSource ${zlibSource} ${moduleSource} ${objectSouce} ${pythonSource} ${parserSource} ${pcSource})

add_definitions(-DPy_BUILD_CORE)
add_definitions(-D_USRDLL)
add_definitions(-D_Py_HAVE_ZLIB)
add_definitions(-DPy_BUILD_CORE_BUILTIN)
add_definitions(-DPy_ENABLE_SHARED)
# add_definitions(-DWIN32)
# add_definitions(-D_WIN32)
# add_definitions(-D_DEBUG)
# add_definitions(-D_WINDLL)
add_compile_definitions(MS_DLL_ID=\"3.11-32\")
add_compile_definitions(PY3_DLLNAME=L\"python3\")
add_compile_definitions(VPATH=\"..\\..\")
add_compile_definitions(PREFIX=NULL)
add_compile_definitions(EXEC_PREFIX=NULL)
add_compile_definitions(VERSION=NULL)
add_compile_definitions(PLATLIBDIR=\"DLLs\")


include_directories(${CMAKE_SOURCE_DIR}/Include)
include_directories(${CMAKE_SOURCE_DIR}/Include/cpython)
include_directories(${CMAKE_SOURCE_DIR}/Include/internal)
include_directories(${CMAKE_SOURCE_DIR}/PC)
include_directories(${CMAKE_SOURCE_DIR}/externals/zlib-1.2.12)
include_directories(${CMAKE_INCLUDE_PATH})


add_library(${PROJECT_NAME} SHARED ${allSource})

target_link_libraries(${PROJECT_NAME} version ws2_32 pathcch bcrypt)
target_link_directories(${PROJECT_NAME} PRIVATE ${OUT_DIR})
