#include <stdio.h>
#include <string.h>	
#include "sfrac.h"


void main()
{
	char firstOP[100] = "\0";
	char secOP[100] = "\0";
	char operation;
	int i;
	printf("First number please: ");
	i=scanf("%s", firstOP);
	if (i != 0)
	{
		printf("What is the operation you want:");
		scanf("\n%c", &operation);
	}
	switch (operation)
	{
	case '+':
		printf("Secound number please: ");
		scanf("\n%s", secOP);
		printf("%s", sfrac_add(firstOP, secOP));
		break;
	default:
		break;
	}
	//printf("%f\n",sfrac_todouble(firstOP));
	//printf("%s", sfrac_fromdouble(0.5, secOP));
	return;
}