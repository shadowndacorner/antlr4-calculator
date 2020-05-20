@echo off

WHERE cl.exe
IF %ERRORLEVEL% NEQ 0 (
	ECHO cl.exe wasn't found.  Ensure that you've properly initialized the environment to include the MSVC compiler.
	exit
)

if NOT EXIST bin (
    mkdir bin
)

if NOT EXIST build (
    mkdir build
    pushd build
    cmake -GNinja ..\
    popd
)

cmake --build build/

IF %ERRORLEVEL% NEQ 0 (
    echo Build failed
    exit
)

call run_sample.bat