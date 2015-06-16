#include <iostream>


int main()
{
	for(int a = 2; a < 1000; a++)
	{
		for(int b = 2; b < 1000; b++)
		{
			for(int c = 2; c < 1000; c++)
			{
				if(a + b + c != 1000)
					continue;

				if(a * a + b * b == c * c)
					std::cout << a * b * c << std::endl;
			}
		}
	}
}
