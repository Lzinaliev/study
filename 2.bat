@echo off
setlocal enabledelayedexpansion



:loop
set /p v=: 

if "%v%"=="" (
    echo error
    goto loop
)

if "%v%"=="exit" goto end
echo Hello, !v!
goto loop
:end
