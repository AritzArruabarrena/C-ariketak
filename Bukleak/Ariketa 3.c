#include <stdio.h>

int main(){
	 printf("Biderketa taula sortzen...\n");
    
    int lehena = 1;
	for (lehena ; lehena <= 10; lehena++)
    {
        printf("%d-en taula:\n", lehena);
        int bigarrena = 1;
        for (bigarrena ; bigarrena <= 10; bigarrena++)
        {
            printf("%dx%d = %d\n", lehena, bigarrena, lehena * bigarrena);
        }
    }
}

