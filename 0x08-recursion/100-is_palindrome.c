#include "main.h"

int check_palin(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function that returns 1 if a string is
 * palindrome and 0 if not
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it is not
*/

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palin(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length
 *
 * Return: length of the string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palin - check the characters recursively for [alindrome
 * @s: string to check
 * @i: inerator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
*/

int check_palin(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palin(s, i + 1, len - 1));
}
