# My Work on C++

[![Language: C++](https://img.shields.io/badge/Language-C%2B%2B-00599C?logo=cplusplus&logoColor=white)](https://isocpp.org/)
[![Editor: Visual Studio Code](https://img.shields.io/badge/Editor-Visual%20Studio%20Code-007ACC?logo=visualstudiocode&logoColor=white)](https://code.visualstudio.com/)
[![License: All Rights Reserved](https://img.shields.io/badge/License-All%20Rights%20Reserved-red.svg)](LICENSE)

A collection of C++ coursework, programming exercises, and personal learning projects. This repository documents my progress with the language and keeps examples available for viewing and study.

## Repository structure

- `exercises/` — coursework and numbered programming exercises.
- `.vscode/` — optional Visual Studio Code build and debug configuration. The current configuration is tailored to Windows with MSYS2 UCRT64 and may need adjustment on other systems.
- `LICENSE` — usage terms for original material in this repository.

Compile standalone `.cpp` files individually unless an exercise says otherwise.

## Requirements

Install a C++ compiler and make it available from your terminal. Common choices include GCC (`g++`), Clang, and Microsoft Visual C++ (MSVC). The checked-in VS Code configuration is optional and uses Windows-specific MSYS2 paths.

## Build and run

From the repository root, for example:

```bash
g++ -std=c++17 -Wall -Wextra "exercises/exercise-01.cpp" -o exercise-01
./exercise-01
```

On Windows PowerShell, run the resulting executable with:

```powershell
.\exercise-01.exe
```

Replace the source filename with the exercise you want to compile. If the files in your local checkout have different names or paths, use those actual paths.

## Copyright and permissions

This repository is public so its contents can be viewed. **It is not open-source software, and public access does not grant permission to copy, modify, redistribute, publish, or use the code in another project.** All rights to my original work are reserved unless I give prior written permission.

If you want to use or obtain permission to use my original code, contact me first. A paid license may be available; the fee and terms must be agreed in writing before use. Payment alone does not grant rights unless the license terms are agreed. Material created by other people or supplied for coursework may be subject to separate rights and terms.

## Disclaimer

The examples are provided for educational purposes and may be incomplete, contain errors, or require adaptation for a particular compiler or environment.
