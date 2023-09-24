C- team project - Stacks and Queues

This project focuses on implementing stacks and queues in C programming language. It provides various opcodes for manipulating the stack and performing operations on its elements.

Opcodes
push
The push opcode adds an element to the stack.

Usage: push <int>

<int>: An integer value to be pushed onto the stack.
If <int> is not an integer or if no argument is given, the program will print the following error message: "L<line_number>: usage: push integer", followed by a new line. The program will then exit with the status EXIT_FAILURE, where <line_number> indicates the line number in the file.

pall
The pall opcode prints all the values on the stack, starting from the top.

Usage: pall

pop
The pop opcode removes the top element from the stack.

Usage: pop

If the stack is empty, the program will print the following error message: "L<line_number>: can't pop an empty stack", followed by a new line. The program will then exit with the status EXIT_FAILURE, where <line_number> indicates the line number in the file.

swap
The swap opcode swaps the top two elements of the stack.

Usage: swap

If the stack contains less than two elements, the program will print the following error message: "L<line_number>: can't swap, stack too short", followed by a new line. The program will then exit with the status EXIT_FAILURE, where <line_number> indicates the line number in the file.

add
The add opcode adds the top two elements of the stack.

Usage: add

If the stack contains less than two elements, the program will print the following error message: "L<line_number>: can't add, stack too short", followed by a new line. The program will then exit with the status EXIT_FAILURE, where <line_number> indicates the line number in the file. The result is stored in the second top element of the stack, and the top element is removed.

nop
The nop opcode does not perform any action.

Usage: nop

Additional Notes
The program does not handle stack overflows.
The atoi function is used for converting strings to integers.
Feel free to explore and implement these opcodes in your C project. Happy coding!
