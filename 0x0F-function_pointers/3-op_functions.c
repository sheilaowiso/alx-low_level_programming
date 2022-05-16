#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: 0
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: Always 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: Always 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: Always 0
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns modulus of two numbers
 * @a: first number
 * @b: second number
 * Return: Always 0
 */
int op_mod(int a, int b)
{
	return (a % b);
}
