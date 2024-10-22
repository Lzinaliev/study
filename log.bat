@echo off
setlocal EnableDelayedExpansion

if "%~1"=="" (
    echo You need to enter the file name.
    exit /b 1
)

set "file=%~1"
set /a counter=0

for /r "%file%" %%a in (*.log) do (
    for /f %%b in ('find /c /v "" ^< "%%a"') do (
        set /a counter+=%%b
    )
)

echo Total number of lines in .log files: !counter!
endlocal
я