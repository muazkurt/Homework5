#include <stdio.h>
#include <string.h>	
#include <math.h>
#define MaxPowerer 8

char *sfrac_fromdouble(double x)
{
	char *n;
	int i = 0, a, j, fortop, q;
	n[i++] = "_";
	
	for (a = (int)x; a > 9; a /= 10)
	{	
		printf("%d", a);
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
	a *= pow(10, MaxPowerer);
	if (a == 0)
		strcat(n, "1");

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
		//	strcat(strcat(n, n/*("%d", a)*/), ("/10^%d", (MaxPowerer - i)));

	}
	strtok(n, "_");

	return strtok(NULL, "_");
}
void main()
{
	double c;
	c = 1/3;
	printf("%s", sfrac_fromdouble(c));
	return;
}