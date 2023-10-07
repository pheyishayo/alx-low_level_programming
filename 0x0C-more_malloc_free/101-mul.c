#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Check if a strin contains only digits
 * @str: string to check
 * Return: 1 if all characters are digits, 0 otherwise
*/

int is_digit(char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}
return (1);
}

/**
 * multiply - program that multiplies two positive numbers
 * @num1: first positive number
 * @num2: second positive number
 * Return: Print result of multiplication
*/

int multiply(int num1, int num2)
{
return (num1 * num2);
}

/**
 * main - start of the program
 * @argc: Argument count
 * @argv: Arguement vector
 * Return: 0 for success 98 for error
*/

int main(int argc, char *argv[])
{
int num1, num2;
if (argc != 3)
{
printf("Error\n");
return (98);
}

if (!is_digit(argv[1]) || !is_digit(argv[2]))
{
printf("Error\n");
return (98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

printf("%d\n", multiply(num1, num2));
return (0);
}
