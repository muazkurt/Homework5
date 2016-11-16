#pragma once
#include <string.h>
int power(int i, int y)
{
	int x, total = 1;
	for (x = 0; x < y; ++x)
		total *= i;
	return total;
}


void sfrac_simplify(char *n)
{

	return;
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
	return strcpy(n, strcpy(&m[1], n));
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
	

	return n1;
}

double sfrac_todouble(char *x)
{
	double upper = 0, downer = 0, i;
	for (i = 0; x[i] != 0 && x[i] != '/'; ++i)
		value = (value * 10) + (int)(x[i] - '0');
	for (i; x[i] != 0; ++i)
		downer = (downer * 10) + (int)(x[i] - '0');
	if (downer > 0)
		return value / downer;
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