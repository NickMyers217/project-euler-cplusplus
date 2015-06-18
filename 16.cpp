#include <iostream>
#include <string>
#include <stdlib.h>
#include "res/infint.h"


namespace nick
{
	template <class T>
	T pow(T base, int exponent)
	{
		T result = base;
		switch(exponent)
		{
			case 0:
				result = 1;
				break;
			case 1:
				result = base;
				break;
			default:
				for(int i = 1; i < exponent; i++)
					result *= base;
		}	
		return result;
	}
}


int main(int argc, char ** argv)
{
	int exponent = atoi(argv[argc - 1]);
	InfInt base = 2;
	InfInt bigNum = nick::pow(base, exponent);
	long sum = 0;

	for(int i = 0; i < (int)bigNum.numberOfDigits(); i++)
		sum += bigNum.digitAt(i);

	std::cout << sum << std::endl;

	return 0;
}
