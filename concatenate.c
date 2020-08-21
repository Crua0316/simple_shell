#include "holberton.h"
/**
 * concat - concatenates arguments
 * @dir: direction from PATH
 * @sep: separator
 * @name: name of the commnand passed
 * Return: pointer to composed string
*/
char *concat(char *dir, char *sep, char *name)
{
	char *result;
	int l1, l2, l3, i, k;

	l1 = _strlen(dir);
	l2 = _strlen(sep);
	l3 = _strlen(name);
	result = malloc(l1 + l2 + l3 + 1);
	if (!result)
	{
		return (NULL);
	}
	for (i = 0; dir[i]; i++)
	{
		result[i] = dir[i];
	}
	k = i;
	for (i = 0; sep[i]; i++)
	{
		result[k + i] = sep[i];
	}
	k = k + i;
	for (i = 0; name[i]; i++)
	{
		result[k + i] = name[i];
	}
	k = k + i;
	result[k] = '\0';
	return (result);
}

/**
 * _which - verifies whether the name is actually a command
 * @name: name of the command with path
 * @head: pointer to the structure
 * Return: pointer to the valid path
*/
char *_which(char *name, link_t *head)
{
	struct stat st;
	char *string;
	link_t *tmp;

	tmp = head;

	while (tmp)
	{
		string = concat(tmp->dir, "/", name);
		if (stat(string, &st) == 0)
		{
			/*
			* tmp = head;
			* while (head)
			* {
			*	free(head->dir);
			*	tmp = tmp->next;
			*	free(head);
			*	head = tmp;
			* }
			*/
			return (string);
		}
		else
			free(string);
		tmp = tmp->next;
	}
	_puts(name);
	_puts(": command not found\n");
	return (NULL);
}

/**
 * _add_node_end - adds a node at the and of the list
 * @head: pointer to the list
 * @str: string add to the list
 * Return: pointer to the head of the list
*/
link_t *_add_node_end(link_t **head, char *str)
{
	link_t *tmp;
	link_t *new;

	new = malloc(sizeof(link_t));
	if (!new || !str)
	{
		return (NULL);
	}
	new->dir = str;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	return (*head);
}

/**
 * linker - links absolute paths to linked list
 * @paths: Value of PATH variable
 * Return: pointer to the head of the list
*/
link_t *linker(char *paths)
{
	link_t *head = NULL;
	char *token;
	char *copy_path = _strdup(paths);

	token = strtok(copy_path, ":");
	while (token)
	{
		head = _add_node_end(&head, token);
		token = strtok(NULL, ":");
	}
	return (head);
}

/**
 * get_env - gets value of PATH variable
 * @name: name of the variable
 * Return: value of the variable
*/
char *get_env(const char *name)
{
	char *value;
	int i, j;

	if (!name)
	{
		return (NULL);
	}

	for (i = 0; environ[i]; i++)
	{
		j = 0;
		if (name[j] == environ[i][j])
		{
			while (name[j])
			{
				if (name[j] != environ[i][j])
					break;
				j++;
			}
			if (name[j] == '\0' && environ[i][j] == '=')
			{
				value = (environ[i] + j + 1);
				return (value);
			}
		}
	}
	return (NULL);
}
