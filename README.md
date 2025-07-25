# Simple Shell

This is a simple UNIX command line interpreter written in C.

## Description

The simple shell is a project that aims to replicate some of the basic functionalities of the UNIX shell. It can interpret and execute simple commands, handle command line arguments, and includes some built-in commands.

## Features

*   **Command Execution:** Executes commands with their arguments.
*   **Built-in Commands:** Supports `exit`, `cd`, `env`, and `help`.
*   **PATH Handling:** Searches for commands in the `PATH` environment variable.
*   **Error Handling:** Provides basic error handling for invalid commands and arguments.
*   **Memory Management:** Properly frees allocated memory to prevent leaks.
*   **Interactive and Non-Interactive Modes:** Works in both interactive (shell) and non-interactive (piped) modes.

## Getting Started

### Prerequisites

*   GCC compiler
*   Git

### Installation

1.  Clone the repository:
    ```sh
    git clone https://github.com/your_username/simple_shell.git
    ```
2.  Navigate to the project directory:
    ```sh
    cd simple_shell
    ```
3.  Compile the source code:
    ```sh
    gcc -o hsh *.c
    ```

## Usage

### Interactive Mode

To start the shell in interactive mode, run the compiled executable:

```sh
./hsh
```

You can then type commands at the prompt:

```sh
($) ls -l
($) /bin/ls
($) echo "Hello, World!"
```

### Non-Interactive Mode

The shell can also handle commands piped from another process:

```sh
echo "ls -l" | ./hsh
```

## Built-in Commands

*   **`exit [status]`**: Exits the shell.
    *   `status` is an optional integer exit status.
*   **`cd [directory]`**: Changes the current working directory.
    *   If no `directory` is provided, it will change to the `HOME` directory.
*   **`env`**: Prints the environment variables.
*   **`help`**: Displays a help message.

## Authors

*   **Delight Sheriff** - [delightsheriff](https://github.com/Delightsheriff)
*   **Marvelous Bolaji** - [marvelbolaji](https://github.com/marvelbolaji)

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.
