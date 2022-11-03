#include <stdio.h>
int main(){
	int zenb1;
	printf("Sartu zure zenbakia: ");
	scanf("%d",&zenb1);
	if(zenb1 > 0){
		printf("Zenbaki hau positiboa da");
	} else if(zenb1 < 0 ){
		printf("Zenbaki hau negatiboa da");
	} else {
		printf("Zenbaki hau 0 da");
	}
	return 0;		
}
