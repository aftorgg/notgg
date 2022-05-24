#include <stdio.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
	int a;
	printf("Flexagon(1,2,3,4 - slides)\n");
        while(1) {
          scanf("%d", &a);
    switch(a) {
    case 1:
        printf("In geometry, flexagons are flat models, usually constructed by folding strips of paper, that can be flexed or folded in certain ways to reveal faces besides the two that were originally on the back and front.\n");
        break;
    case 2:
        printf("Flexagons are usually square or rectangular (tetraflexagons) or hexagonal (hexaflexagons). A prefix can be added to the name to indicate the number of faces that the model can display, including the two faces (back and front) that are visible before flexing. For example, a hexaflexagon with a total of six faces is called a hexahexaflexagon.\n"); 
        break;
    case 3:
        printf("In hexaflexagon theory (that is, concerning flexagons with six sides), flexagons are usually defined in terms of pats.\n"); 
        break;
    case 4:
        printf("Two flexagons are equivalent if one can be transformed to the other by a series of pinches and rotations. Flexagon equivalence is an equivalence relation.\n"); 
        printf("Press any button...\n");
        break;
    default:
        printf("thanks for listen\n");
        break;
    }   
    }
	

    return 0;
 
}
 
