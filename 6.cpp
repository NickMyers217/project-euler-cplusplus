#include <iostream>
#include <stdlib.h>


int main(int argc, char ** argv)
{
	int cap = atoi(argv[argc - 1]);
	int sumSquares = 0;
	int squareSum = 0;

	for(int i = 0; i <= cap; i++)
	{
		sumSquares += i * i;
		squareSum += i;
	}

	squareSum *= squareSum;

	std::cout << squareSum << " - " << sumSquares << " = ";
	std::cout << squareSum - sumSquares << std::endl;

	return 0;
}
