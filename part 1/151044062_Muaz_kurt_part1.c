#include <stdio.h>
#include <string.h>	
#include <math.h>

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

void main()
{
	double c;
	c = 1/3;
	printf("%s", sfrac_fromdouble(c));
	return;
}