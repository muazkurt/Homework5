#include <stdio.h>
#include <string.h>	
#include <math.h>
#include "sfrac.h"


void main()
{
	char *c ="\0" ;
	printf("%s\n", sfrac_fromdouble(10.5,c));
	printf("%.2f\n", sfrac_todouble("100"));
	sfrac_simplify(c);
	return;
}