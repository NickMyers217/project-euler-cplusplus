#include <iostream>
#include <math.h>


int main()
{
	long num = 600851475143;

	for(long n = 2; n <= num; n++)
	{
		if(num % n == 0)
		{
			std::cout << n << std::endl;
			num /= n;
			n = 2;
		}
	}

	return 0;
}
