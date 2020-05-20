file(GLOB libantlrcpp_SRC
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/atn/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/dfa/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/misc/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/support/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/tree/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/tree/pattern/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/tree/xpath/*.cpp"
)

add_library(antlr4_static STATIC ${libantlrcpp_SRC})

target_include_directories(
    antlr4_static PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/src/atn
    ${CMAKE_CURRENT_SOURCE_DIR}/src/dfa
    ${CMAKE_CURRENT_SOURCE_DIR}/src/misc
    ${CMAKE_CURRENT_SOURCE_DIR}/src/support
    ${CMAKE_CURRENT_SOURCE_DIR}/src/tree
    ${CMAKE_CURRENT_SOURCE_DIR}/src/tree/pattern
    ${CMAKE_CURRENT_SOURCE_DIR}/src/tree/xpath
)

if(CMAKE_SYSTEM_NAME MATCHES "Linux")
    target_link_libraries(antlr4_static ${UUID_LIBRARIES})
elseif(APPLE)
    target_link_libraries(antlr4_static ${COREFOUNDATION_LIBRARY})
endif()

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
	set(disabled_compile_warnings "/wd4251")
else()
	set(disabled_compile_warnings "-Wno-overloaded-virtual")
endif()

if("${CMAKE_CXX_COMPILER_ID}" MATCHES "Clang")
	set(disabled_compile_warnings "${disabled_compile_warnings} -Wno-dollar-in-identifier-extension -Wno-four-char-constants")
elseif("${CMAKE_CXX_COMPILER_ID}" MATCHES "GNU" OR "${CMAKE_CXX_COMPILER_ID}" MATCHES "Intel")
	set(disabled_compile_warnings "${disabled_compile_warnings} -Wno-multichar")
endif()


set(extra_static_compile_flags "")
if(WIN32)
	set(extra_static_compile_flags "-DANTLR4CPP_STATIC")
endif()

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
	if(WITH_STATIC_CRT)
		target_compile_options(antlr4_static PRIVATE "/MT$<$<CONFIG:Debug>:d>")
	else()
		target_compile_options(antlr4_static PRIVATE "/MD$<$<CONFIG:Debug>:d>")
	endif()
endif()

set(static_lib_suffix "")

target_compile_definitions(antlr4_static PUBLIC ${extra_static_compile_flags})

set_target_properties(antlr4_static PROPERTIES
    COMPILE_FLAGS "${disabled_compile_warnings}"
)