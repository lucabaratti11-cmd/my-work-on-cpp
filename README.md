# My Work on C++

[![Language: C++](https://img.shields.io/badge/Language-C%2B%2B-00599C?logo=cplusplus&logoColor=white)](https://isocpp.org/)
[![Editor: Visual Studio Code](https://img.shields.io/badge/Editor-Visual%20Studio%20Code-007ACC?logo=visualstudiocode&logoColor=white)](https://code.visualstudio.com/)
[![License: All Rights Reserved](https://img.shields.io/badge/License-All%20Rights%20Reserved-red.svg)](LICENSE)

A collection of C++ coursework, programming exercises, and personal learning projects. This repository documents my progress with the language and keeps examples available for study, reference, and review.

## Repository structure

- `exercises/` — coursework and numbered programming exercises.
- `.vscode/` — optional Visual Studio Code build and debug configuration. The current setup is tailored to Windows with MSYS2 UCRT64 and may need adjustments for other systems.
- `LICENSE` — copyright and usage terms for the original material in this repository.

Compile standalone `.cpp` files individually unless an exercise specifically requires otherwise.

## Requirements

Install a C++ compiler and make it available from your terminal. Common choices include GCC (`g++`), Clang, and Microsoft Visual C++ (MSVC). The included VS Code configuration is optional and uses Windows-specific MSYS2 paths.

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

Replace the filename with the exercise you want to compile. If the files in your local checkout have different names or paths, use those actual paths.

## Copyright and usage

This repository is public for viewing and educational purposes only. All original content remains the intellectual property of Luca Baratti.

Reuse, redistribution, modification, or commercial use of the code requires prior written authorization. In some cases, a separate agreement and fee may apply.

Third-party material and coursework examples may be subject to different rights and terms.

## Disclaimer

The examples are provided for educational purposes and may be incomplete, contain errors, or require adaptation for a particular compiler or environment.
