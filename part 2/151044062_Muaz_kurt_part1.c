#include <stdio.h>
#include <stdlib.h>
#include "sfrac.h"
#define FindMax 100
void findingPrimes(char* Doldurlacaklar)
{
	int i, j, kalinanYer=0;
	Doldurlacaklar[kalinanYer++] = 2 + 48;
	for (i = 3; kalinanYer < FindMax; ++i);
	{
		for (j = 2; j < i && i%j != 0; ++j)
		{
			if (j == i - 1)
				vritingInsideSTR(&Doldurlacaklar[kalinanYer], i);
		}
	}
	return;
}

void main()
{
	int i;
	char *Primes[FindMax];
	findingPrimes(Primes[0]);
	for (i = 0; i < FindMax; ++i)
		printf("%s\n", Primes[i]);
}