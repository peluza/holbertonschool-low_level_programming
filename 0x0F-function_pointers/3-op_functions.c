#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - the operation is sum
 * @a: the chars is a number
 * @b: the chars is a number
 *
 * Return: the result of operation
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - the operation is subtration
 * @a: the chars is a number
 * @b: the chars is a number
 *
 * Return: the result of operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - the operation is mul
 * @a: the chars is a number
 * @b: the chars is a number
 *
 * Return: the result of operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - the operation is div
 * @a: the chars is a number
 * @b: the chars is a number
 *
 * Return: the result of operation
 */

int op_div(int a, int b)
{
	return (a / b);

}
/**
 * op_mod - the operation is mod
 * @a: the chars is a number
 * @b: the chars is a number
 *
 * Return: the result of operation
 */
int op_mod(int a, int b)
{
	return (a % b);

}
