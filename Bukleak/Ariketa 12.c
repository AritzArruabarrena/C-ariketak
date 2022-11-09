#include <stdio.h>

int main(){
	
	    int min, max;
    printf("Sartu zenbaki tarte bat koma batekin separatuta [min,max]: ");
    scanf("%d,%d", &min, &max);
    printf("\nTarte honetan aurkitutako zenbaki lehenak:\n");
    int i = min;
	for (i; i < max; i++)
    {
        if (lehenaDa(i))
        {
            printf("%d,", i);
        }
    }
}

int lehenaDa(int znbk)
{
  
    int i = 2;
    for (i; i < znbk; i++)
    {
  
        if (znbk % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
