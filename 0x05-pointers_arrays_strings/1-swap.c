#include "main.h"

/**
*swap_int - Swaps the values of the two params
*
*@a: type a int
*@b: type a int
*
*Return: void
*/
void swap_int(int *a, int *b)
{
       	int c = *a;
*a = *b;
*b = c;
}
