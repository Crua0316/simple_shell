#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;

/**
 * struct functions - keeps the name of the function and a function pointer
 * @function_name: string to be compared with input
 * @function: function pointer.
*/
typedef struct functions
{
	char *function_name;
	void (*function)(char **);
} build_t;

/**
 * struct linker - keeps direction from the PATH variable
 * @dir: direction
 * @next: pointer to next node
*/
typedef struct linker
{
	char *dir;
	struct linker *next;
} link_t;

char *_which(char *name, link_t *head);

link_t *_add_node_end(link_t **head, char *str);

link_t *linker(char *paths);

char *get_env(const char *name);

char *concat(char *dir, char *sep, char *name);

/*void signal_handler(int num)*/

char *prompt(void);

void free_all(const unsigned int n, ...);

char **tokens(char *str);

void _execute(char **command);

char *new_line_check(char *command);

char *_inicio(char *name);

int check_input(char **argv);

void(*check_build(char **argv))(char **argv);

void myexit(char **argv);

int _strlen(char *str);

char *_strcpy(char *dest, char *src);

void _puts(char *str);

int _putchar(char c);

void _env(char **argv);

/*void signal_handler(int num);*/

#endif /* _HOLBERTON_H_ */
