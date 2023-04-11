#include<stdio.h>
#include"main.h"
/**
 * _isalpha - takes one int parameter
 * Description: prints alphabet in small letters
 *
 * @c : check c
 * Return: int Always
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
