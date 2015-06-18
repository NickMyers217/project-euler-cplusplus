#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>


std::string numberToLetter(int n)
{
	std::string nStr = std::to_string(n);
	std::string result;

	std::string uniques[] = {
		"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
		"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
		"eighteen", "nineteen"
	};
	std::string tens[] = {
		"zero", "ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"
	};

	if(n > 0 && n < 20)
	{
		result = uniques[n];
	}
	else if(n >= 20 && n < 100)
	{
		result = tens[n / 10];
		if(nStr[1] != '0')
			result += "-" + uniques[n % 10];
	}
	else if(n >= 100 && n < 1000)
	{
		result = uniques[n / 100] + " hundred";

		if(nStr[1] != '0' || nStr[2] != '0')
			result += " and " + numberToLetter(n % 100);
	}
	else if(n == 1000)
	{
		result = "one thousand";
	}
	else
	{
		result = "Error";
	}

	return result;
}


int length(std::string & word)
{
	int result = 0;
	for(unsigned long i = 0; i < word.length(); i++)
		if(word[i] != ' ' && word[i] != '-')
			result++;
	return result;
}


int main(int argc, char ** argv)
{
	int n = atoi(argv[argc - 1]);
	std::vector<std::string> words;
	words.reserve(1000);
	int answer = 0;

	for(int i = 1; i <= n; i++)
		words.push_back(numberToLetter(i));

	for(int i = 0; i < (int)words.size(); i++)
		answer += length(words[i]);

	std::cout << answer << std::endl;

	return 0;
}
