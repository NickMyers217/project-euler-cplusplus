#include <iostream>
#include <stdlib.h>


bool divByAll(int n, int divisorCap)
{
	bool result = true;
	for(int i = 1; i <= divisorCap; i++)
	{
		if(n % i != 0)
			result = false;
	}
	return result;
}


int main(int argc, char ** argv)
{
	int numDivisors = atoi(argv[argc - 1]);
	int n = numDivisors + 1;

	while(!divByAll(n, numDivisors))
	{
		n++;
	}

	std::cout << n << std::endl;

	return 0;
}
