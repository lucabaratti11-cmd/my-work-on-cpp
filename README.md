# My Work on C++

[![C++](https://img.shields.io/badge/Language-C%2B%2B-00599C?logo=cplusplus&logoColor=white)](https://isocpp.org/)
[![Visual Studio Code](https://img.shields.io/badge/Editor-Visual%20Studio%20Code-007ACC?logo=visualstudiocode&logoColor=white)](https://code.visualstudio.com/)
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)

This repository contains my coursework, programming exercises, and selected personal projects written in **C++**. It serves as an organized record of my progress while learning the language and as a convenient reference for friends and anyone interested in reviewing the examples.

The source files cover practical exercises and small experiments. Some are intended to be read as independent examples; others may reflect the requirements of a particular assignment. The material is educational and may evolve as I continue learning and improving the code.

## Repository contents

- **[`compiti c++/`](compiti%20c%2B%2B/)** — coursework and numbered programming exercises. Exercise files are named to make them easy to locate and follow.
- **[`altri lavori/`](altri%20lavori/)** — additional work and experiments that do not belong to the numbered coursework collection.
- **[`.vscode/`](.vscode/)** — Visual Studio Code build and debug configurations. These are currently set up for `g++` and GDB on Windows with MSYS2 UCRT64; adjust the compiler and debugger paths if your environment differs.

Most `.cpp` files are standalone programs. Unless a file or its accompanying instructions say otherwise, compile one source file at a time rather than attempting to build the entire repository as a single application.

## Requirements

To build and run the examples, install a C++ compiler and make it available from your terminal. Common options include:

- **GCC** (`g++`), available through [MSYS2](https://www.msys2.org/) on Windows or package managers on Linux and macOS.
- **Clang**, available from the [LLVM project](https://clang.llvm.org/).
- **Microsoft Visual C++ (MSVC)**, available with [Visual Studio](https://visualstudio.microsoft.com/) or the Build Tools for Visual Studio.

The repository's VS Code configuration uses a Windows-specific MSYS2 compiler path. It is an optional convenience rather than a requirement; you can compile the examples using any compatible compiler installed on your system.

## Using Visual Studio Code

[Visual Studio Code](https://code.visualstudio.com/) is a lightweight source-code editor. To work with C++ in VS Code, install the editor and the [Microsoft C/C++ extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools), then configure a compatible compiler and debugger for your operating system.

1. Clone or download this repository to your computer.
2. Open the repository folder in VS Code using **File → Open Folder**.
3. Open the `.cpp` file you want to inspect or run.
4. Use the available C/C++ build or debug command. The checked-in `.vscode` task and launch configurations are tailored to the MSYS2 UCRT64 toolchain on Windows and may need path changes on other systems.

For installation and platform-specific setup instructions, see the [official VS Code website](https://code.visualstudio.com/) and the [C++ extension documentation](https://code.visualstudio.com/docs/languages/cpp).

## Build and run from a terminal

The following example compiles the first numbered exercise using GCC. Run the commands from the repository root:

```bash
g++ -std=c++17 -Wall -Wextra "compiti c++/esercizio1.cpp" -o esercizio1
./esercizio1
```

On Windows Command Prompt or PowerShell, run the generated program with:

```powershell
.\esercizio1.exe
```

To compile a different exercise, replace `esercizio1.cpp` with the desired source filename and choose a suitable output name. For instance, to build `main.cpp` in the coursework folder:

```bash
g++ -std=c++17 -Wall -Wextra "compiti c++/main.cpp" -o coursework
```

The `-std=c++17` option selects the C++17 language standard, while `-Wall -Wextra` enable commonly useful compiler warnings. If an example requires another standard or additional files, follow the instructions provided with that example.

## Contributing and feedback

This repository is primarily a personal learning archive, and external contributions are not currently expected. If you notice an issue or have a suggestion, you are welcome to get in touch with me. Please check the source and assignment context before reusing an example, as some solutions may be specific to their original exercises.

## License

The contents of this repository are made available under the **MIT License**. You may use, copy, modify, distribute, sublicense, and sell copies of the software in accordance with the terms in [`LICENSE`](LICENSE). The license is provided without warranty; please read the license file for the complete terms.

## Disclaimer

These programs are provided for educational purposes. They may be incomplete, contain errors, or require adaptation for a particular compiler or environment. Review and test code before relying on it in another project.
