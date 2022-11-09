#include <stdio.h>

int main(){
	   int znbk;
    printf("Sartu zenbakia: ");
    scanf("%d", &znbk);

    if (armstrongDa(znbk))
    {
        printf("\nArmstrong-en zenbakia da");
        return;
    }
    printf("\nEz da Armstrong-en zenbakia");
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
