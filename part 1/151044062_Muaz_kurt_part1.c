#include <stdio.h>
#include <string.h>	
#include <math.h>
#include "sfrac.h"


void main()
{
	char *c = "8/4";
	printf("%s", sfrac_negate(c));
	sfrac_simplify(c);
	return;
}