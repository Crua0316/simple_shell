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

void signal_handler(int num);

char *prompt(void);

void free_all(const unsigned int n, ...);

char **tokens(char *str);

void _execute(char **command);

char *new_line_check(char *command);

#endif /* _HOLBERTON_H_ */
