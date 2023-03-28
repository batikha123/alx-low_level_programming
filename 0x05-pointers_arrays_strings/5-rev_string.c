#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string
 * @str: the string
 */
void rev_string(char *str)
{
	char tmp;
	int i, len, l;

	len = strlen(str);

	for (i = 0; i < len / 2 ; i++)
	{
		l = len - 1;

		tmp = str[i];
		str[i] = str[l - i];
		str[l - i] = tmp;
	}
}
