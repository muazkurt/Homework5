#include <stdio.h>
#include <string.h>	
#include <math.h>
#include "sfrac.h"


void main()
{
	char *c = "\0";
	int a = 105, b = 10;
	printf("%s\n", sfrac_fromdouble(10.5,c));
	printf("%s\n", sfrac_simplify(c));
	printf("%.2f\n", sfrac_todouble(c));
	return;
}