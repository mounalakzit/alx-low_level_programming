#include "main.h"
/**
* _strlen - function thet returns the length of a string.
* @s: character of string.
* Return: (0).
*/
int _strlen(char *s)
{
int longi = 0;
while (s[longi] != '\0')
{
longi++;
}
return (longi);
}
