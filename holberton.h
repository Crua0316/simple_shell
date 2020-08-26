#ifndef _SHELL_H_
#define _SHELL_H_
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
extern char **environ;

void _puts(char *str);

char *_which(char **args);

char **separator(char *line);

char *readinput(void);

int builtins(char **args);

void _exec(char *command, char **args);

int _strlen(char *str);

char *str_concat(char *s1, char *s2);

char *_getenv(char *path);

int _strcmp(char *s1, char *s2);

char *_strdup(char *str);

char **pathslicer(char *fullpath);

int _putchar(char c);

#endif
