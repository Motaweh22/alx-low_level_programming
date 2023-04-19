#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the suuums.
 * @a: The firstttt
 * @b: The seconddd
 *
 * Return: The summm
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the differenceeee
 * @a: The firsttt
 * @b: The seconddd
 *
 * Return: The diffenceee
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the productttt
 * @a: The firsttttt
 * @b: The seconddd
 *
 * Return: The producttttt
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the divisionnnnn
 * @a: The firsttt
 * @b: The secondddd
 *
 * Return: The quotienttt
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder
 * @a: The firsttt
 * @b: The secondddd
 *
 * Return: The remainderrr
 */
int op_mod(int a, int b)
{
	return (a % b);
}
