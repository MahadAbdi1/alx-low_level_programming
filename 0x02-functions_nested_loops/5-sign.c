#include "main.h"
/**
* print_sign – function to check for a sign of a number

* @n: is the int that will use for the argument of the function
* Return: 0
*/
int print_sign(int n)
{

If (n > 0)
{
_putchar(‘+’);
Return (1);
}
Else if (n < 0)
{
_putchar(‘-‘);
Return (-1);
}
Else
{
_putchar(‘0’);
Return (0);
}
