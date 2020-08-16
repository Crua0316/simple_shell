#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

void signal_handler(int num);

char *prompt(void);

void free_all(const unsigned int n, ...);

char **tokens(char *str);


#endif /* _HOLBERTON_H_ */
