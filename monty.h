#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>
#include <string.h>

/*
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct fd - Hold files variables
 * @stream: Pointer to the file stream
 * @line: Pointer to the line data
 */
typedef struct global_s
{
	FILE *stream;
	char *line;
	char **tokens;
	int num_tokens;
	unsigned int i;
	unsigned int line_number;
	instruction_t *instruction;
	stack_t *head;
	stack_t *tail;
	unsigned int stack_length;

} Global_d;

extern Global_d *globals;

void free_globals(void);
void malloc_failed(void);
void initialize_globals(void);
void get_failed_stream(char *fileName);
void get_stream(char *fileName);
void validate_globals(int argc);
void close_stream(void);
void free_tokens(void);
void tokenize_line(void);
void get_failed_stream(char *fileName);
void get_stream(char *fileName);
void invalid_instruction(void);
void fetch_instruction(void);
void run_instruction(void);
int is_number(char  *str);
void free_head(void);
void free_all_args(void);
void free_stack(stack_t *head);
void delete_stack_node(void);

void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);



 /* called functions */
int dprintf(int fd, const char *format, ...);
ssize_t getline(char **lineptr, size_t  *, FILE *stream);
FILE *fdopen(int fd, const char *mode);

 /* main */
int main(int argc, char **arg);

#endif /* MONTY_H */
