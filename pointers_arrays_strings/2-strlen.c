#include "main.h"
/**
 *int _strlen - updates to 98
 *@s:takes an integer
 */
int _strlen(char *s)
{
	int len = 0;
	
	while (s[len] != '\0')
	{
	len ++;
	}
	return (len);
}
