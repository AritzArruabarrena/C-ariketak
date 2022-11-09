#include <stdio.h>

int main(){
	 int n, p;
    printf("\nSartu zenbakia: ");
    scanf("%d", &n);
    printf("\nZenbagarren potentziara kalkulatu nahi duzu?: ");
    scanf("%d", &p);
	int i = 0;
    for (i; i < p; i++)
    {
        n *= n;
    }
    printf("\nGuztira: %d", n);
}

