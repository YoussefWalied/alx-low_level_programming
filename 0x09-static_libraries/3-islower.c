#include<stdio.h>
#include"main.h"
/**
 * _islower - takes one int parameter
 * Description: prints alphabet in small letters
 *
 * @c : check c
 * Return: int Always
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
