#include <string.h>
#include <math.h>
#define MaxPowerer 8
//my own functions

/*
just a power function. takes 2 int value
and return first^sec
*/
int power(int i, int y)
{
	int x, total = 1;
	for (x = 0; x < y; ++x)
		total *= i;
	return total;
}

void simplifier(int *first, int *sec)
{
	int i;
	for (i = 2; i < *first && i < *sec; ++i)
	{
		if(*first%i == 0.0 && *sec%i == 0.0)
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
	for (x; x > 0; x /= 10)
		str[i++] = (x % 10) + 48;
	str[i] = 0;
	for (i -= 1; i >= 0; --i)
		tutucu[j++] = str[i];
	tutucu[j] = 0;
	return strcpy(str,tutucu);
}

int shotZeroes(int *x)
{
	int i;
	if (*x == 0)
		return 0;
	for (i = 0; *x % 10 == 0; ++i)
		*x /= 10;
	return 8 - i;
}
//my own functions end





//Sorunsuz Çalýþýyor gibi
double sfrac_todouble(char *x)
{
	double upper = 0, downer = 0, i;
	sscanf(x, "%lf", &upper);
	if (strlen(x) == strlen(strtok(x, "/")))
		return upper;
	sscanf(strtok(NULL, "/"), "%lf", &downer);
	if (downer != 0)
		return (upper / downer);
	return -1;
}

//Sorunsuz çalýþýyor gibi
char *sfrac_fromdouble(double x, char* firstInside)
{
	int firstTim = (int)x,
		i,
		sectim = (x - (int)x)*pow(10, MaxPowerer);
	i = shotZeroes(&sectim);
	firstTim *= pow(10, i);
	firstTim += sectim;
	vritingInsideSTR(firstInside, firstTim);
	strcat(firstInside, "/1");
	for (i; i > 0; --i)
		strcat(firstInside, "0");
	return firstInside;
}

//sorunsuz çalýþýyor gibi
char *sfrac_simplify(char *n)
{
	int x, y;
	char *simplify = "\0";
	sscanf(n, "%d/%d", &x, &y);
	simplifier(&x, &y);
	strcat(strcat(vritingInsideSTR(n, x), "/"), vritingInsideSTR(simplify, y));
	return n;
}

//sorun olacak bir durum yok ki
char *sfrac_negate(char *n)
{
	char *m = "-";
	return strcpy(n, strcat(m, n));
}



//dört iþlem
char *sfrac_add(char *n1, char *n2)
{
	int upstairs1, upstairs2,
		downstairs1, downstairs2;
	double x;
	sscanf(n1, "%d/%d", &upstairs1, &downstairs1);
	sscanf(n1, "%d/%d", &upstairs2, &downstairs2);
	x = (((upstairs1*downstairs2) + (upstairs2*downstairs1)) / (downstairs1*downstairs2));
	sfrac_fromdouble(x, n1);
	return sfrac_simplify(n1);
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





void sfrac_print(
	char *a1, char *n1,
	char *a2, char *n2,
	char *a3, char *n3,
	char *a4)
{
	char *totalString;
	printf("%s %s %s %s %s %s %s\n", a1, n1, a2, n2, a3, n3, a4);
	return;
}