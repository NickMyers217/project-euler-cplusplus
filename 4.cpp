#include <iostream>
#include <string>


bool isPalindrome(int n)
{
	std::string nstr = std::to_string(n);
	bool pali = true;

	for(unsigned int i = 0; i < nstr.length(); i++)
	{
		if(nstr[i] != nstr[nstr.length() - (i + 1)])
			pali = false;
	}

	return pali;
}


int main()
{
	int res = 0;

	for(int i = 100; i < 1000; i++)
	{
		for(int j = 100; j < 1000; j++)
		{
			int num = i * j;
			if(isPalindrome(num) && num > res)
				res = num;
		}
	}

	std::cout << res << std::endl;

	return 0;
}
