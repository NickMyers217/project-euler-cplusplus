#include <iostream>
#include <fstream>
#include <string>
#include "res/infint.h"


void loadFileAndTotal(const char * filePath, InfInt * destination)
{
	InfInt sum("0");
	std::string line;
	std::ifstream file(filePath);

	if (file.is_open())
	{
		while (getline(file, line))
		{
			InfInt lineNum(line);
			sum += lineNum;
		}
		file.close();
	}
	else std::cout << "Unable to open file"; 	

	*destination = sum;
}


int main()
{
	InfInt sum;
	loadFileAndTotal("./res/13.txt", &sum);

	std::cout << sum << std::endl;
}
