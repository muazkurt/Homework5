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


char *sfrac_simplify(char *n)
{
	int x, y, i, lessone;
	sscanf(n, "%d/%d", &x, &y);
	simplifier(&x, &y);

	//update n with sfrac_fromdouble(x,y) vsvs

	return n;
}

char *sfrac_add(char *n1, char *n2)
{
	double x, y;
	x = sfrac_todouble(sfrac_simplify(n1));
	y = sfrac_todouble(sfrac_simplify(n2));
	x += y;
	/*
	n1=sfrac_fromdouble(x);
	
	*/
	sfrac_simplify(n1);
	return n1;
}

char *sfrac_sub(char *n1, char *n2)
{
	double x, y;
	x = sfrac_todouble(sfrac_simplify(n1));
	y = sfrac_todouble(sfrac_simplify(n2));
	x -= y;
	/*
	n1=sfrac_fromdouble(x);
	*/
	sfrac_simplify(n1);
	return n1;
}

char *sfrac_negate(char *n)
{
	char *m = "-";
	if (n[0] == '-')
		m = "+";
	return strcat(m, n);
}

char *sfrac_mult(char *n1, char *n2)
{
	double x, y;
	x = sfrac_todouble(sfrac_simplify(n1));
	y = sfrac_todouble(sfrac_simplify(n2));
	x *= y;
	/*
	n1=sfrac_fromdouble(x);
	*/
	sfrac_simplify(n1);
	return n1;
}

char *sfrac_div(char *n1, char *n2)
{
	double x, y;
	x = sfrac_todouble(sfrac_simplify(n1));
	y = sfrac_todouble(sfrac_simplify(n2));
	x /= y;
	/*
	n1=sfrac_fromdouble(x);
	*/
	sfrac_simplify(n1);
	return n1;
}

//
//char *sfrac_fromdouble(double x)
//{
//	char *n;
//	int i = 0, pre, a, j, fortop, q;
//	n[i++] = "_";
//
//
//	a = x - (int)x;
//	a *= pow(10, MaxPowerer);
//	if (a == 0)
//	{
//		strcat(n, "/1");
//		for (pre = (int)x; pre > 9; pre /= 10)
//		{
//			printf("%d", pre);
//			n[i++] = pre % 10;
//		}
//
//		for (j = 0; j < i; ++j)
//		{
//			pre = n[i];
//			n[i] = n[j];
//			n[j] = pre;
//			--i;
//		}
//		sfrac_simplify(x);
//	}
//	else
//	{
//		for (i = 0; a % 10 == 0; i++)
//			a /= 10;
//		i = MaxPowerer - i;
//		q = pow(10, MaxPowerer);
//		for (j = 0; a % 5 == 0 && (int)x % 5 == 2 && j < i; j++)
//		{
//			a /= 5;
//			x /= 5;
//			q /= 5;
//		}
//		for (fortop = 0; a % 2 == 0 && (int)x % 2 == 0 && fortop < i; ++fortop)
//		{
//			a /= 2;
//			x /= 2;
//			q /= 2;
//		}
//		for (pre = (int)x; pre > 9; pre /= 10)
//		{
//			printf("%d", pre);
//			n[i++] = pre % 10;
//		}
//
//		for (j = 0; j < i; ++j)
//		{
//			pre = n[i];
//			n[i] = n[j];
//			n[j] = pre;
//			--i;
//		}
//		//	strcat(strcat(n, n/*("%d", a)*/), ("/10^%d", (MaxPowerer - i)));
//
//	}
//	strtok(n, "_");
//
//	return strtok(NULL, "_");
//}
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