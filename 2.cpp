#include <iostream>

unsigned int p2(unsigned int cap)
{
	unsigned int sum = 2;
	unsigned int a = 1, b = 2, c = 0;

	while(c < cap)
	{
		c = a + b;

		if(c % 2 == 0)
			sum += c;

		a = b;
		b = c;
	}

	return sum;
}

int main()
{
	std::cout << p2(4000000) << std::endl;
	return 0;
}
