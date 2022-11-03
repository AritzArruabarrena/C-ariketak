#include <stdio.h>
int main(){
	int zenbaki1,zenbaki2;
	printf("Sartu zenbaki bat: ");
	scanf("%d",&zenbaki1);
	printf("Zenbakia = %d",zenbaki1);
	fflush(stdin);
	printf("\n Sartu beste zenbaki bat: ");
	scanf("%d",&zenbaki2);
	printf("Zure bi zenbakiak= %d %d",zenbaki1,zenbaki2);
	printf("\n Batuketa = %d",zenbaki1+zenbaki2);
	
	return 0;
}
