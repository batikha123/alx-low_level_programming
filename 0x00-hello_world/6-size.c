#include <stdio.h>

int main(void)
{
	int i,c,li,lli,f; 
	
	c = sizeof(char);
	i = sizeof(int);
	li = sizeof(long);
	lli = sizeof(long long);
	f = sizeof(float);

	printf("Size of a char: %d byte(s)\n",c);
	printf("Size of an int: %d byte(s)\n",i);
	printf("Size of a long int: %d byte(s)\n",li);
	printf("Size of a long long int: %d byte(s)\n",lli);
	printf("Size of a float: %d byte(s)\n",f);

	return (0);
}
