#include <stdio.h>

int main(){
	  long long n;
    printf("Zenbakia sartu:");
    scanf("%lld", &n);

    int kontatzeko = 0;

    do
    {
        n /= 10;
        ++kontadorea;
    } while (n != 0);

    printf("Zure zenbakiak dituen zifrak: %d", kontatzeko);
}

