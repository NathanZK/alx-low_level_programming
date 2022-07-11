#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
/**
* main - check the code.
*
* Return: Always 0.
*/
int main(void)
{

	int i;
	char alphabet[] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
	char pass[15];

	srand(time);
	for (i = 0; i < 15; i++)
	{
		pass[i] = alphabet[rand() % strlen(alphabet)];
		printf("%c", pass[i]);
	}
return (0);
}
