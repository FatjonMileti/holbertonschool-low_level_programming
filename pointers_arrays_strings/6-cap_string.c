#include "main.h"
/**
 * cap_string - concatenate two strings
 * @st: string
 * Return: st
 */
char *cap_string(char *st)
{
	int i;

	for (i = 0; st[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (st[i] >= 'a' && st[i] <= 'z')
				st[i] = st[i] - 32;
		}
		if (st[i] == ' ' ||
				st[i] == ',' ||
				st[i] == ';' ||
				st[i] == '.' ||
				st[i] == '!' ||
				st[i] == '?' ||
				st[i] == '"' ||
				st[i] == ')' ||
				st[i] == '(' ||
				st[i] == '{' ||
				st[i] == '}' ||
				st[i] == '\n' ||
				st[i] == '\t')
		{
			if (st[i + 1] >= 'a' && st[i + 1] <= 'z')
				st[i + 1] = st[i + 1] - 32;
		}
	}
	return (st);
}
