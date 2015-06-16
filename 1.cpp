#include <iostream>

bool isDivisible(unsigned int num, unsigned int div)
{
	return num % div == 0;
}

unsigned int p1(unsigned int cap)
{
	unsigned int sum = 0;

	for(unsigned int i = 3; i < cap; i++)
	{
		if(isDivisible(i, 3) || isDivisible(i, 5))
			sum += i;
	}

	return sum;
}

int main()
{
	std::cout << p1(1000) << std::endl;
	return 0;
}
