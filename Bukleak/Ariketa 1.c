#include <stdio.h>

int main(){
	    printf("Zein zenbaki arte nahi duzu kontatu?");
    int max;
    int i = 0;
    scanf("%d", &max);

    int batura = 0;
   
    for(i ; i < max; i++){
        batura += i;
    }

    printf("\nGuztira: %d", &batura);
}

