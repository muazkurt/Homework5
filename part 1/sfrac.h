#pragma once
#include <string.h>
#define MaxPowerer 8
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
	x = sfrac_todouble(strtok(n, "/"));
	y = sfrac_todouble(strtok(NULL, "/"));
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
	
	
	return n;//strcat(strcat(strcpy(n, x), '/'), "%d", y);
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

#define MaxPowerer 8

char *sfrac_fromdouble(double x)
{
	char *n;
	int i = 0, pre, a, j, fortop, q;
	n[i++] = "_";


	a = x - (int)x;
	a *= pow(10, MaxPowerer);
	if (a == 0)
	{
		strcat(n, "/1");
		for (pre = (int)x; pre > 9; pre /= 10)
		{
			printf("%d", pre);
			n[i++] = pre % 10;
		}

		for (j = 0; j < i; ++j)
		{
			pre = n[i];
			n[i] = n[j];
			n[j] = pre;
			--i;
		}
		sfrac_simplify(x);
	}
	else
	{
		for (i = 0; a % 10 == 0; i++)
			a /= 10;
		i = MaxPowerer - i;
		q = pow(10, MaxPowerer);
		for (j = 0; a % 5 == 0 && (int)x % 5 == 2 && j < i; j++)
		{
			a /= 5;
			x /= 5;
			q /= 5;
		}
		for (fortop = 0; a % 2 == 0 && (int)x % 2 == 0 && fortop < i; ++fortop)
		{
			a /= 2;
			x /= 2;
			q /= 2;
		}
		for (pre = (int)x; pre > 9; pre /= 10)
		{
			printf("%d", pre);
			n[i++] = pre % 10;
		}

		for (j = 0; j < i; ++j)
		{
			pre = n[i];
			n[i] = n[j];
			n[j] = pre;
			--i;
		}
		//	strcat(strcat(n, n/*("%d", a)*/), ("/10^%d", (MaxPowerer - i)));

	}
	strtok(n, "_");

	return strtok(NULL, "_");
}

double sfrac_todouble(char *x)
{
	double upper = 0, downer = 0, i;

	if (strlen(x) == strlen(strtok(x, "/")))
	{
		sscanf(x, "%lf", &upper);
		return upper;
	}

	sscanf(x, "%lf", &upper);

	sscanf(strtok(NULL, "/"), "%lf", &downer);

	if (downer != 0)
		return upper / downer;



	return -1;
}

void sfrac_print(
	char *a1, char *n1,
	char *a2, char *n2,
	char *a3, char *n3,
	char *a4)
{


	return;
}