@echo off

if EXIST bin/eval.exe (
    pushd bin
        .\eval.exe "10 + 10 + 0.2e-1" %* > ..\test.out 2>&1
    popd
) else (
    echo Please build the sample
)