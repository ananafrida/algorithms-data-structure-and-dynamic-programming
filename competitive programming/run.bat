@echo off
set GREEN=[0;32m
set WHITE=[1;37m
set RED=[0;31m

set filename=%1

echo.


g++ -std=c++17 -O2 -Wall -lm "%filename%.cpp" -o "%filename%.exe"

if "%errorlevel%"=="0" (
  echo.
  echo %GREEN%
  echo -------------------------------
  echo Compilation done              =
  echo Output will be below          =
  echo -------------------------------
  echo %WHITE%
  echo.
  %filename%.exe < input.txt
  echo.
  echo -------------------------------
  %filename%.exe < input.txt > output.txt
) else (
  echo.
  echo %RED%
  echo -------------------------------
  echo Compilation failed            =
  echo -------------------------------
  echo %WHITE%
)

echo.