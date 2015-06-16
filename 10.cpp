#include <iostream>
#include <stdlib.h>
#include <vector>


int main(int argc, char ** argv)
{
	const long CAP = (long)atoi(argv[argc - 1]);
	bool * sieve = new bool[CAP];
	std::vector<long> primes;
	std::vector<long>::iterator it;

	for(long i = 0; i < CAP; i++)
	{
		switch(i)
		{
			case 0: sieve[i] = false; break;
			case 1: sieve[i] = false; break;
			default: sieve[i] = true; break;
		}
	}


	for(long i = 0; i < CAP; i++)
	{
		if(sieve[i])
		{
			primes.push_back(i);

			for(long j = 2; i * j < CAP; j++)
			{
				sieve[i * j] = false;
			}
		}
	}

	long sum = 0;
	for(it = primes.begin(); it < primes.end(); it++)
		sum += *it;

	std::cout << sum << std::endl;

	delete sieve;

	return 0;
}
