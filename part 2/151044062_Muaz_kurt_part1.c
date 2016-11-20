#include <stdio.h>
#include <stdlib.h>
#define FindMax 1000
void findingPrimes(int* Doldurlacaklar)
{
	int i, j, kalinanYer=0;
	for (i = 2; kalinanYer < FindMax; i++);
		for (j = 1; j < i; j++)		
			if (i%j == 0)
				Doldurlacaklar[kalinanYer++] = i;
	return;
}

void main()
{
	int i, Primes[FindMax];
	findingPrimes(Primes);
	for (i = 0; i < FindMax; ++i)
		printf("%d", Primes[i]);
}