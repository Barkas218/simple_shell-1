#include "shell.h"

/**
 * hsh_splitpath2 - Split the line wrote in the console.
 * @line: Line wrote in console.
 * Return: An array with all words splited.
 */
char **hsh_splitpath(char *value)
{
	char **tokens;
	char *delim = ":\r\n\a";

	tokens= hsh_strtok(value, delim);
	if (tokens == NULL)
        {   
                perror("Error allocating the buffer\n");
                return (NULL);
        } 

	return (tokens);
}
