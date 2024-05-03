# C - Simple Shell

Welcome to Unified Shell, a versatile command-line interpreter designed to streamline your interaction with the operating system. Below, you'll find detailed information about the shell's functionalities, usage instructions, contributors, and more.

## General

Unified Shell merges the essential features from various shell implementations to provide a robust an user-friendly command-line interface.

![Shell GIF](https://miro.medium.com/v2/resize:fit:940/0*RA38PzdJipiQExCP.gif)

## Core Features

- **User-Friendly Prompt:** Offers a clear and welcoming prompt for user interaction.
- **Command Execution:** Executes commands with graceful error handling.
- **File Navigation:** Allows easy navigation through directories and file management.
- **Process Management:** Manages processes efficiently, including script execution.
- **Custom Commands:** Supports built-in commands like `exit` and `env` for enhanced functionality.

## Getting HSH

In order to install the shell and get benefits of it's features you need to clone the current project, and compile it.
You need to make sure that this shell tested and garantees work based on `gcc-4.8` and the `C90` standard.

## Installation

To install Unified Shell, follow below steps

### Clone

Clone the repository:

```bash

git clone <repository_url>

```

### Compilation

Your code will be compiled this way:

```

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

```

### Run

Run the compiled shell:

```bash

./MyShell

```

## Custom Commands
Unified Shell supports the following custom commands:
- `exit`: Terminates the shell or program.
- `env`: Displays the current environment or runs a specified command in a modified environment.

## Contributing
Contributions from developers like you make Unified Shell better. Here's how you can contribute:
1. Fork the repository.
2. Create a new branch (`git checkout -b feature/YourFeature`).
3. Commit your changes (`git commit -m 'Add YourFeature'`).
4. Push to the branch (`git push origin feature/YourFeature`).
5. Open a pull request.

## Content of Files

| File                | Description                                  |
| ------------------- | -------------------------------------------- |
| [AUTHORS](https://github.com/aysucuk/holbertonschool-simple_shell/blob/main/AUTHORS)     | List of contributors to the repository       |
| [man_1_simple_shell](https://github.com/aysucuk/holbertonschool-simple_shell/blob/main/man_1_simple_shell)  | Information about the repository             |
| [main.h](https://github.com/aysucuk/holbertonschool-simple_shell/blob/main/main.h)      | Prototypes, functions, and headers           |


## Authors

- Aysu Sadikhova (https://github.com/aysucuk)
- Aytaj Allahverdiyeva (https://github.com/Atya22)

