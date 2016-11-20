#include <stdio.h>
#include <string.h>	
#include "sfrac.h"


void main()
{
	char firstOP[100] = "\0";
	char secOP[100] = "\0";
	char firstTT, operation, secTT;
	printf("First number please: ");
	scanf("%s", firstOP);
	if (firstOP[0] == '-' || firstOP[0] == '+')
		firstTT = firstOP[0];
	scanf("%c", &operation);
	printf("What is the operation you want:");
	scanf("%c", &operation);
	switch (operation)
	{
	case '+':
		scanf("%c", &operation);
		printf("Secound number please: ");
		scanf("%s", secOP);
		if (secOP[0] == '+' || secOP[0] == '-')
			secTT == secOP[0];
		sfrac_add(firstOP, secOP);
		break;
	case '-':
		scanf("%c", &operation);
		printf("Secound number please: ");
		scanf("%s", secOP);
		if (secOP[0] == '+' || secOP[0] == '-')
			secTT == secOP[0];
		sfrac_div(firstOP, secOP);
		break;
	case '*':
		scanf("%c", &operation);
		printf("Secound number please: ");
		scanf("%s", secOP);
		if (secOP[0] == '+' || secOP[0] == '-')
			secTT == secOP[0];
		sfrac_mult(firstOP, secOP);
		break;
	case '/':
		scanf("%c", &operation);
		printf("Secound number please: ");
		scanf("%s", secOP);
		if (secOP[0] == '+' || secOP[0] == '-')
			secTT == secOP[0];
		sfrac_sub(firstOP, secOP);
		break;
	case ':':
		scanf("%c", &operation);
		printf("Secound number please: ");
		scanf("%s", secOP);
		if (secOP[0] == '+' || secOP[0] == '-')
			secTT == secOP[0];
		sfrac_sub(firstOP, secOP);
		break;
	default:
		break;
	}
	return;
}