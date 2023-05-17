Simple Shell
Simple Shell is a basic UNIX command line interpreter implemented in C. It provides a minimalistic shell environment where users can execute commands.

Features
Accepts command line input and tokenizes it.
Executes commands by creating child processes using fork and execvp.
Displays a prompt and waits for the user to enter a command.
Handles the end-of-file condition (Ctrl+D) to exit gracefully.
Provides basic error handling for command execution.
Getting Started
To get started with the Simple Shell, follow these steps:

Clone the repository: git clone <https://github.com/Delightsheriff/simple_shell.git>
Compile the source code: gcc -o simple_shell simple_shell.c
Run the shell: ./simple_shell
Enter commands at the prompt and press Enter to execute them.
Usage
The Simple Shell supports simple, single-word commands. It does not handle advanced features, built-ins, or arguments. Some examples of valid commands are:

shell
Copy code
$ ls
$ pwd
$ date
$ whoami
Contributions
Contributions to the Simple Shell project are welcome! If you have any ideas, improvements, or bug fixes, feel free to open an issue or submit a pull request. Please make sure to follow the project's code of conduct.

License
This project is licensed under the Marvel & Delight License. Feel free to use, modify, and distribute the code as permitted by the license.

Acknowledgments
This Simple Shell project was inspired by the concepts taught in ALX SE program and the desire to learn more about systems programming.

Contact
For any questions or inquiries, please contact Delight at delightsheriff@gmail.com or Marvel at marvel.bolaji@gmail.com.
