#include <stdio.h>
#include <stdlib.h>
#include "sfrac.h"
#define FindMax 1000
void findingPrimes(char Doldurlacaklar[][FindMax])
{
	int i, j, kalinanYer=0;
	char recurses[FindMax];
	for (i = 2; kalinanYer < FindMax; ++i)
	{
		for (j = 2; j < i && (i % j) != 0; ++j)
			;
		if (i - j == 1 || i == j)
		{
			strcpy(Doldurlacaklar[kalinanYer++],vritingInsideSTR(recurses, i));
		}
	}
	return;
}

void main()
{
	int i, j, kalinanYer = 0;;
	char Primes[FindMax][FindMax];
	findingPrimes(Primes);
}