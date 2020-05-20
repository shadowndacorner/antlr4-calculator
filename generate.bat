@echo off

if EXIST parser (
    rmdir /Q /s parser
)
antlr4 -Dlanguage=Cpp CalcLexer.g4 CalcParser.g4 -package calc -o parser %*

if EXIST build (
    pushd build
    cmake -G "Ninja" ../
    
    if EXIST vs (
        cd vs
        cmake -G "Visual Studio 16 2019" -Ax64 ../../
    )

    popd
)