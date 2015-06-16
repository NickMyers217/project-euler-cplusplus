#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>


void loadFile(const char * filePath, std::string * destination)
{
	std::string source, line;
	std::ifstream file(filePath);

	if (file.is_open())
	{
		while (getline(file, line))
		{
			source += line;
		}
		file.close();
	}
	else std::cout << "Unable to open file"; 	

	*destination = source;
}


int main(int argc, char ** argv)
{
	int digits = atoi(argv[argc - 1]);
	long largest = 0;
	std::string number;
	loadFile("./res/8.txt", &number);

	for(int i = 0; i < (int)number.length() - digits + 1; i++)
	{
		long product = 1;

		for(int j = 0; j < digits; j++)
		{
			char digit = number[i + j];
			int num = atoi(&digit);
			product *= (long)num;
			std::cout << j + 1 << " => " << number[i + j] << std::endl;;

			if(product == 0)
				break;
		}

		std::cout << "*** Product = " << product << std::endl;

		if(product > largest)
			largest = product;
	}

	std::cout << largest << std::endl;

	return 0;
}
