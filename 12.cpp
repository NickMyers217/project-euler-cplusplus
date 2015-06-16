#include <iostream>
#include <stdlib.h>
#include <math.h>


long getTriangleNum(int n)
{
	long res = 0;
	for(int i = 1; i <= n; i++)
		res += i;
	return res;
}


int getDivisorCount(long n)
{
	int res = 0;
	for(int i = 1; i < sqrt(n); i++)
		if(n % i == 0)
			res += 2;
	return res;
}


int main(int argc, char ** argv)
{
	int divisorTarget = atoi(argv[argc - 1]);
	int i = 1;
	
	while(getDivisorCount(getTriangleNum(i)) <= divisorTarget)
	{
		i++;
	}

	std::cout << getTriangleNum(i) << std::endl;

	return 0;
}
