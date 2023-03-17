#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char i = 'a';

        while (i <= 'z')
        {
                putchar(i);
                i++;
        }
	
	for (i = 'A';i < 'Z';i++)
	{
		putchar(i);
	}

        putchar('\n');

        return (0);
}
