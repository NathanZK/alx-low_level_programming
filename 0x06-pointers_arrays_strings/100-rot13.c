#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int count, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (count = 0; s[count] != '\0'; count++)
	{
		for (i = 0; i < 52; i++)
		{
			if (s[count] == alphabet[i])
			{
				s[count] = rot13[i];
				break;
			}
		}
	}

	return (s);
}
