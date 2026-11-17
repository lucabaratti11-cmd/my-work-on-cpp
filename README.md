# My Work on C++

[![C++](https://img.shields.io/badge/Language-C%2B%2B-00599C?logo=cplusplus&logoColor=white)](https://isocpp.org/)
[![Visual Studio Code](https://img.shields.io/badge/Editor-Visual%20Studio%20Code-007ACC?logo=visualstudiocode&logoColor=white)](https://code.visualstudio.com/)
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)

This repository contains my coursework, programming exercises, and selected personal projects written in C++. It is organized as a learning archive to track my progress as I improve my C++ skills and keep practical examples easy to review.

The material includes standalone exercises, small experiments, and personal implementations. The repository is primarily educational and intended for study, reference, and code review.

## Repository structure

- `exercises/` — numbered coursework and practice exercises.
- `projects/` — personal experiments and small standalone projects.
- `.vscode/` — Visual Studio Code configuration for build and debug tasks.
- `CONTRIBUTING.md` — contribution and feedback guidance.
- `LICENSE` — MIT license terms.

Legacy folders are still kept for compatibility:

- `compiti c++/` — previous coursework naming.
- `altri lavori/` — earlier personal work folder.

## Requirements

To build and run the examples, install a C++ compiler and make it available from your terminal. Common options include:

- GCC (`g++`), available through MSYS2 on Windows or package managers on Linux/macOS.
- Clang, available from the LLVM project.
- Microsoft Visual C++ (MSVC), available with Visual Studio or the Build Tools for Visual Studio.

The VS Code configuration in this repository is optional and tailored to a Windows MSYS2 toolchain. It may need path adjustments depending on the machine.

## Using Visual Studio Code

1. Clone or download this repository.
2. Open the repository folder in VS Code.
3. Open the `.cpp` file you want to inspect or run.
4. Use the built-in C/C++ build or debug command, or compile from the terminal.

For installation instructions, see the official VS Code website and the C/C++ extension documentation.

## Build and run from a terminal

From the repository root, compile a sample exercise with GCC:

```bash
g++ -std=c++17 -Wall -Wextra "exercises/exercise-01.cpp" -o exercise-01
./exercise-01
```

On Windows PowerShell or Command Prompt, run the compiled binary with:

```powershell
.\exercise-01.exe
```

To compile a different file, replace `exercise-01.cpp` with the file you want to build and choose a suitable output name.

## Contributing and feedback

This repository is primarily a personal learning archive, so external contributions are not normally expected. If you notice an issue or have a suggestion, please read the contribution guidelines first.

## License

This repository is distributed under the MIT License. See `LICENSE` for full terms.

## Disclaimer

The programs in this repository are provided for educational purposes. They may be incomplete, contain errors, or require adaptation for a specific compiler or environment.
