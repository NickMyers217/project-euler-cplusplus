#include <iostream>
#include <stdlib.h>
#include <vector>


int main(int argc, char ** argv)
{
	int cap = atoi(argv[argc - 1]);
	int sieveSize = cap * cap + 1;
	bool * sieve = new bool[sieveSize];
	std::vector<int> primes;
	primes.reserve(cap);

	for(int i = 0; i < sieveSize; i++)
		sieve[i] = true;

	sieve[0] = false;
	sieve[1] = false;

	for(int i = 0; i < sieveSize; i++)
	{
		if((int)primes.size() == cap)
			break;

		if(sieve[i])
		{
			primes.push_back(i);

			for(int j = 2; i * j < sieveSize; j++)
			{
				sieve[i * j] = false;
			}
		}
	}

	std::cout << primes[primes.size() - 1] << std::endl;

	delete sieve;

	return 0;
}
