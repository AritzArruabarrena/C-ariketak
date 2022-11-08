#include <stdio.h>

int main(){
	    int max, n1 = 0, n2 = 1, n3;
    printf("Zenbat zenbaki nahi dituzu bistaratu?: ");
    scanf("%d", &max);

    if (max > 45)
    {
        printf("Ezin dira 45 zenbaki baino gehiago bistaratu limitazio teknikoengatik.");
        return;
    }

    // 0 eta 1 bistaratu
    printf("%d %d", n1, n2);
    int i = 2;
    for (i ; i < max; i++)
    {
        n3 = n1 + n2;
        printf(" %d", n3);
        n1 = n2;
        n2 = n3;
    }
}

