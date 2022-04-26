#include <stdio.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
	int x;
	int b[3][3] = {
	{2,1,3}, 
	{2,1,3}, 
	{2,1,3}
	};
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("%d", b[i][j]);
		}
	}
	
	return 0;
}
