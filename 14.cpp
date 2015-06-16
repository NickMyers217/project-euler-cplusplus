#include <iostream>
#include <stdlib.h>


int getCollatzLength(int i)
{
	int count = 1;	
	long n = i;

	while(n > 1)
	{
		if(n % 2 == 0)
			n /= 2;
		else
			n = 3 * n + 1;

		count++;
	}

	return count;
}


int main(int argc, char ** argv)
{
	int cap = atoi(argv[argc - 1]);
	int largestCollatz = 0;
	int answer = 0;

	for(int i = cap - 1; i > 1; i--)
	{
		int collatzLength = getCollatzLength(i);

		if(collatzLength > largestCollatz)
		{
			largestCollatz = collatzLength;
			answer = i;
		}
	}

	std::cout << answer << " " << largestCollatz << std::endl;

	return 0;
}
