#include <stdio.h>

int main(){
	  int znbk;
    printf("Sartu zenbaki bat: ");
    scanf("%d", &znbk);
    printf("%d-en faktoreak hauek dira: ", znbk);
    int i = 1;
    for (i; i <= znbk; ++i)
    {
        if (znbk % i == 0)
        {
            printf("%d ", i);
        }
    }
}

