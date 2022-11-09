#include <stdio.h>

int main(){
	  int znbk = 0;

    printf("Sartu zenbakia: ");
    scanf("%d", &znbk);

    printf("Sartutako zenbakia alderantziz: %d", alderantziz(znbk));
}

int alderantziz(int znbk)
{
    int emaitza = 0, hondarra = 0;
    while (znbk != 0)
    {
        hondarra = znbk % 10;
        emaitza = emaitza * 10 + hondarra;
        znbk /= 10;
    }
    return emaitza;
}
