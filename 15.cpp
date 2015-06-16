#include <iostream>
#include <stdlib.h>


void pascalsTriangle(int n)
{
	for(int i = 0; i < n; i++) 
    { 
        long x = 1; 
        for(int j = 0; j <= i; j++) 
        { 
			if(i == n - 1)
				std::cout << j + 1 << " => " << x << std::endl;
            x = x * (i - j) / (j + 1); 
        } 
    } 
}

int main(int argc, char ** argv)
{
	int gridSize = atoi(argv[argc - 1]);
	pascalsTriangle(gridSize * 2 + 1);

	return 0;
}
