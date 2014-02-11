/* Sieve Of Eratosthenes: Computes 1st hundred primes */
#include <stdio.h>
#include <stdlib.h>

const int nprimes = 100;
// int prime[nprimes];	//	sieve_eratosthenes.c:6:5: error: variably modified ‘prime’ at file scope WHY??
int prime[100];

int main()
{
	int i;
	int current = 2;
	prime[0] = current;

	for (i=0; i<nprimes; i++)
	{
		int j;
	NewCandidate:
		current++;
		for (j=0; prime[j]*prime[j] <= current; j++)
		{
			if (current % prime[j] == 0)
				goto NewCandidate;
		}
		prime[i] = current;
	}
	return (0);
}
