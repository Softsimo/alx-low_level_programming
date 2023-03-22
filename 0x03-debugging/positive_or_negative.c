#include "main.h"
/**
* positive_or_negative - checks if given number i s +, - or 0
*
*@i: number to be cheked
*Return: nothing on success
*/
void positive_or_negative(int i)
{
if (i > 0)
printf("int is positive\n");
else if (i < 0)
printf("int is negative\n");
else
printf("int is zero\n");
}
