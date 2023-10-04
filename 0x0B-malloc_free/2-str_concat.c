#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char* str;
    int s1_len = 0;
    int s2_len = 0;
    int i;

    if(s1 == NULL && s2 != NULL)
        return s2;
    else if(s2 == NULL && s1 != NULL)
		return s1;
	else if(s1 == NULL && s2 == NULL)
		return NULL;
    
	while(s1[s1_len])
	s1_len ++;
    
	while(s2[s2_len])
	s2_len ++;

	str = malloc(sizeof(char) * (s2_len + s1_len));

	for(i = 0; s1[i]; i++)
		str[i] = s1[i];

	for(; s2[i]; i++)
		str[i] = s2[i];

	return str;
}
