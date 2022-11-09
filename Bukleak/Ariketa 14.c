#include <stdio.h>

int main(){
	
    int min, max;
    printf("Sartu zenbaki tarte bat koma batekin separatuta [min,max]: ");
    scanf("%d,%d", &min, &max);
    printf("\nTarte honetan armstrong zenbakiak:\n");
    int i = min;
    for (i; i < max; i++)
    {
        if (armstrongDa(i))
        {
            printf("%d,", i);
        }
    }
}

	int armstrongDa(int znbk){
	
	  int znbkTemp, hondarra, zifrak = 0;
      float result = 0.0;

      znbkTemp = znbk;


    while (znbkTemp != 0)
    {
        znbkTemp /= 10;
        zifrak++;
    }

    for (znbkTemp = znbk; znbkTemp != 0; znbkTemp /= 10)
    {
        hondarra = znbkTemp % 10;
    
        result += pow(hondarra, zifrak);
    }

    
    if ((int)result == znbk)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
