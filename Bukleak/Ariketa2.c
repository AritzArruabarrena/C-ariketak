#include <stdio.h>

int main(){
	 int c, zenbakia, fakt = 1;
    printf("Sartu bere faktoriala kalkulatzeko numeroa: \n");
    scanf("%d", &zenbakia);

    for (c = 1; c <= zenbakia; c++)
    {
        fakt = fakt * c;
    }

    printf("%d! = %d\n", zenbakia, fakt);
    return fakt;
}

