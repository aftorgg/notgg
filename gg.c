#include <stdio.h>
#include <stdint.h>
#include <string>
int gg(int dfgh , int erty ) {
    return dfgh + erty ;

}

int main(int argc, char const *argv[])
{
    uint8_t a = 2;
    char c = 's';
    scanf("%c", &c);
    printf("abobus %d %d\n", a, c);
    printf("%s\n", argv[argc-1]);    
    printf("%d\n", gg(2, 2));   
    if (1) {
        return 127;
    }
	return 0;
} 
 