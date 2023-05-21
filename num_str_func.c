#include "shell.h"

/**
 * abs_ - returns absolute value of a number
 * @n: integer number
 *
 * Return: Value of i, on error-1 is returned
 */
int abs_(int n)
{
	int i;

	if (n < 0)
	{
		i = n * -1;
	}
	else
	{
		i = n;
	}
	return (i);
}

/**
 * atoi_ - Iterative function to convert strings to integers
 * @s: string to be converted
 *
 * Return: long value result of casting
 */
long atoi_(const char *s)
{
	long num = 0;
	int i = 0;

	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}

	return (num);
}

/**
 * swap - function to swap two numbers
 * @x: first number to be swap
 * @y: second number to be swap
 *
 * Return: Integer to string converted
 */
void swap(char *x, char *y)
{
	char t = *x;

	*x = *y;
	*y = t;
}

/**
 * reverse_buffer - function to reverse buffer
 * @buffer: string of number converted
 * @i: number to be swap
 * @j: number to be swap
 *
 * Return: Integer to string converted
 */
char *reverse_buffer(char *buffer, int i, int j)
{
	while (i < j)
	{
		swap(&buffer[i++], &buffer[j--]);
	}

	return (buffer);
}

/**
 * itoa_ - Iterative function to convert integer to string
 * @value: integer value to be converted
 * @buffer: string of number converted
 * @base: base number to be converted
 *
 * Return: Integer to string converted
 */
char *itoa_(int value, char *buffer, int base)
{
	int i = 0, n = 0, r = 0;

	if (base < 2 || base > 32)
	{
		return (buffer);
	}
	n = abs_(value);
	i = 0;
	while (n)
	{
		r = n % base;
		if (r >= 10)
		{
			buffer[i++] = 65 + (r - 10);
		}
		else
		{
			buffer[i++] = 48 + r;
		}
		n = n / base;
	}
	if (i == 0)
	{
		buffer[i++] = '0';
	}
	if (value < 0 && base == 10)
	{
		buffer[i++] = '-';
	}
	buffer[i] = '\0';

	return (reverse_buffer(buffer, 0, i - 1));
}
