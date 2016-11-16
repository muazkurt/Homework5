#pragma once
#include <string.h>
int power(int i, int y)
{
	int x, total = 1;
	for (x = 0; x < y; ++x)
		total *= i;
	return total;
}


char *sfrac_simplify(char *n)
{
	int x, y, i;
	x = sfrac_todouble(strtok(n, "/");
	y = sfrac_todouble(strtok(NULL, "/");
	for (i = 1; i < x && i < y; ++i)
	{
		if (x % i == 0 && y % i == 0)
		{
			x /= i;
			y /= i;
		}
	}
	/*
	
	strcat(strcat(strcpy(n,sfrac_fromdouble(x)),'/'),sfrac_fromdouble(y))
	*/
	
	
	return strcat(strcat(strcpy(n, x), '/'), y);
}

char *sfrac_add(char *n1, char *n2)
{
	double x, y;
	x = sfrac_todouble(n1);
	y = sfrac_todouble(n2);
	x += y;
	/*
	char çevirip return etme kýsmý
	
	*/
	
	return n1;
}

char *sfrac_sub(char *n1, char *n2)
{
	double x, y;
	x = sfrac_todouble(n1);
	y = sfrac_todouble(n2);
	x -= y;
	/*
	char çevirip return etme kýsmý

	*/
	return n1;
}

char *sfrac_negate(char *n)
{
	char *m;
	m[0] = '-';
	if (n[0] == '-')
		return strcpy(n, strcpy(&m[1], n));
	m[0] = '+';
	else
		return strcpy(n, strcpy(&m[1], n));
	return n;
}

char *sfrac_mult(char *n1, char *n2)
{
	double x, y;
	x = sfrac_todouble(n1);
	y = sfrac_todouble(n2);
	x *= y;
	/*
	char çevirip return etme kýsmý

	*/

	return n1;
}

char *sfrac_div(char *n1, char *n2)
{
	double x, y;
	x = sfrac_todouble(n1);
	y = sfrac_todouble(n2);
	x /= y;
	/*
	char çevirip return etme kýsmý

	*/

	return n1;
}

char *sfrac_fromdouble(double x)
{
	char *n;
	char *changer;
	int i = 0, a, j;
	for (a = (int)x; a > 9; a / 10)
	{
		n[i++] = a % 10;
	}
	for (j = 0; j < i; ++j)
	{
		a = n[i];
		n[i] = n[j];
		n[j] = a;
		--i;
	}
	a = x - (int)x;
	a *= power(10, 8);
	if (a == 0)
		strcat(n, "1");
	
	else
	{
		for(i=0;a % 10 == 0;i++)
			a /= 10;

		
	}
	return n;
}

double sfrac_todouble(char *x)
{
	double upper = 0, downer = 0, i;

	char* changes;
	changes = strtok(x, "/");
	for (i = 0; i < strlen(changes); ++i)
		value = (value * 10) + (int)(x[i] - '0');
	changes = strtok(NULL, "/");

	if (strlen(changes) == 0)
		return value;


	else
	{
		for (i = 0; i < strlen(changes); ++i)
			downer = (downer * 10) + (int)(x[i] - '0');
		if (downer > 0)
			return value / downer;
	}

	return NaN;
}

void sfrac_print(
	char *a1, char *n1,
	char *a2, char *n2,
	char *a3, char *n3,
	char *a4)
{


	return;
}