#include "main.h"
/**
 * print_sign - prints sign of a number
 * @n: number to be checked
 * Return: 1 if n is greater than 0,-1 ifnn is less than 0, else 0
 */
int print_sign(int n)
{
        if (n > 0)
        {
                _putchar('+');
                return (1);
        }
        if (n == 0)
        {
                _putchar('0');
                return (0);
        }
        _putchar('-');
        return (-1);
}
