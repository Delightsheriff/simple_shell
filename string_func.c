#include "shell.h"

/**
 * string_len - function that returns the length of a string
 * @s: integer pointer variable
 *
 * Return: lenght of string
 */
size_t string_len(const char *s)
{
	size_t len = 0;

	while (s[len])
	{
		len++;
	}
	len++;
	return (len);
}

/**
 * string_cat - function that concatenates two strings
 * @dest: first string pointer
 * @src: second string pointer
 *
 * Return: char type result
 */
char *string_cat(char *dest, char *src)
{
	int i = 0, j = 0;

	if (dest != NULL)
	{
		while (dest[i])
			i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * string_cmp - function that compares two strings
 * @s1: first string pointer
 * @s2: second string pointer
 *
 * Return: Int type result
 */
int string_cmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

/**
 * string_cpy - function that copy a string to another
 * @dest: name integer of array
 * @src: number elements of array
 *
 * Return: char pointer value
 */
char *string_cpy(char *dest, char *src)
{
	char *a = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	return (a);
}

/**
 * string_dup - function that returns a pointer to a newly allocated
 *				space in memory
 * @str: string pointer
 *
 * Return: pointer value
 */

char *string_dup(char *str)
{
	int i = 0, j = 0;
	char *temp;

	if (!str)
	{
		return ('\0');
	}
	while (str[i])
	{
		i++;
	}
	temp = malloc(sizeof(char) * (i + 1));
	if (temp == 0)
	{
		return ('\0');
	}
	while (j <= i)
	{
		temp[j] = str[j];
		j++;
	}
	return (temp);
}
