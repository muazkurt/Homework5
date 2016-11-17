#include <stdio.h>
#include <string.h>	


double sfrac_todouble(char *x)
{
	double upper = 0, downer = 0, i;
	
	if (strlen(x) == strlen(strtok(x,"/")))
	{ 
		sscanf(x, "%lf", &upper);
		return upper;
	}

	sscanf(x, "%lf", &upper);
	
	sscanf(strtok(NULL, "/"), "%lf", &downer);

	if (downer!=0)
		return upper / downer;
	


	return -1;
}
void main()
{
	double c;
	c = sfrac_todouble("123456789/1234567890");
	printf("%3.5f", c);
	return;
}