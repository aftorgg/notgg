#include <stdio.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
	int x;
	int b[3] ;
	for (int i = 0; i < 3; ++i)
	{
		
		scanf("%d", &x);
		b[i]=x;

	}

	for (int i = 0; i < 3; ++i)
	{
		printf("%d", b[i]);
	}
	
	return 0;
}