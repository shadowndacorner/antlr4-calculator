@echo off

if EXIST bin/eval.exe (
    pushd bin
        .\eval.exe "10 + 10" %* > ..\test.out 2>&1
    popd
) else (
    echo Please build the sample
)