#include "main.h"



/**
* _strlen_recursion - returns the length of a string
* @s: string
*
* Return: length of string
*/
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
