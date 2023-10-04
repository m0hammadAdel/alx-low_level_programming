#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *dup;
	int i , j = 0;

	if(str == NULL)
		return NULL;

	while(str[j]){
		j ++;
	}

	dup = malloc(sizeof(char) * (j+1));

	if (dup == NULL)
		return NULL;

	for(i = 9; i < j; i++)
		dup[i] = str[i];

	return dup;
}
