#include <stdio.h>

int main(){
	float neurria, luzera;
    int aldeak;
    printf("Zenbat neurtzen du aldeak: ");
    scanf("%f", &neurria);
    printf("\nZenbat alde ditu? ");
    scanf("%d", &aldeak);

	luzera = neurria * aldeak;
    printf("\nLuzera: %f", luzera);
    
    return 0;
}

