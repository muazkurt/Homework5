#pragma once
#include <string.h>
#define MaxPowerer 8
//my own functions
int power(int i, int y)
{
	int x, total = 1;
	for (x = 0; x < y; ++x)
		total *= i;
	return total;
}

void simplifier(int *first, int *sec)
{
	int i, lessone = *first;
	if (*first > *sec)
		lessone = *sec;
	for (i = 2; i < lessone; ++i)
	{
		if (*first%i == 0 && *sec %i == 0)
		{
			*first /= i;
			*sec /= i;
			i -= 1;
		}
	}
	return;
}

char *vritingInsideSTR(char* str, int x)
{
	int i = 0, j = 0;
	char *tutucu = "\0";
	for (x; x > 9; x /= 10)
		str[i++] = x % 10;
	str[i] = 0;
	for (i -= 1; i > 0; --i)
		tutucu[j++] = str[i];
	tutucu[j] = 0;
	return strcpy(str,tutucu);
}

int shotZeroes(int *x)
{
	int i;
	if (*x == 0)
		return 8;
	for (i = 0; *x % 10 == 0; ++i)
		*x /= 10;
	return 8 - i;
}
//my own functions end


double sfrac_todouble(char *x)
{
	int upper = 0, downer = 0, i;

	if (strlen(x) == strlen(strtok(x, "/")))
	{
		sscanf(x, "%d", &upper);
		return upper;
	}

	sscanf(x, "%d", &upper);

	sscanf(strtok(NULL, "/"), "%d", &downer);

	if (downer != 0)
		return (upper / downer);


	return -1;
}

char *sfrac_fromdouble(double x, char* firstInside)
{
	int firstTim = (int)x,
		i,
		sectim = (x - (int)x)*power(10, MaxPowerer);
	vritingInsideSTR(firstInside, firstTim);
	i=shotZeroes(&sectim);
	vritingInsideSTR(&firstInside[strlen(firstInside)], sectim);
	strcat(firstInside, "/1");
	for (i; i > 0; --i)
		strcat(firstInside, "0");

	return firstInside;
}

char *sfrac_simplify(char *n)
{
	int x, y;
	sscanf(n, "%d/%d", &x, &y);
	simplifier(&x, &y);

	strcat(sfrac_fromdouble(x, n), "/");
	sfrac_fromdouble(y, &n[strlen(n + 1)]);
	return n;
}


char *sfrac_negate(char *n)
{
	char *m = "-";
	return strcat(m, n);
}



//dört iþlem
char *sfrac_add(char *n1, char *n2)
{
	double x, y;
	x = sfrac_todouble(sfrac_simplify(n1));
	y = sfrac_todouble(sfrac_simplify(n2));
	x += y;
	sfrac_fromdouble(x,n1);
	sfrac_simplify(n1);
	return n1;
}

char *sfrac_sub(char *n1, char *n2)
{
	double x, y;
	x = sfrac_todouble(sfrac_simplify(n1));
	y = sfrac_todouble(sfrac_simplify(n2));
	if (x > y)
	{
		x -= y;
		sfrac_fromdouble(x, n1);
		sfrac_simplify(n1);
	}
	else
	{
		x -= y;
		sfrac_fromdouble(x, n1);
		sfrac_negate(sfrac_simplify(n1));
	}


	return n1;
}

char *sfrac_mult(char *n1, char *n2)
{
	double x, y;
	x = sfrac_todouble(sfrac_simplify(n1));
	y = sfrac_todouble(sfrac_simplify(n2));
	x *= y;
	sfrac_fromdouble(x, n1);
	sfrac_simplify(n1);
	return n1;
}

char *sfrac_div(char *n1, char *n2)
{
	double x, y;
	x = sfrac_todouble(sfrac_simplify(n1));
	y = sfrac_todouble(sfrac_simplify(n2));
	x /= y;
	sfrac_fromdouble(x, n1);
	sfrac_simplify(n1);
	return n1;
}
//dört iþlem sonu


//
//
//
//void sfrac_print(
//	char *a1, char *n1,
//	char *a2, char *n2,
//	char *a3, char *n3,
//	char *a4)
//{
//
//
//	return;
//}