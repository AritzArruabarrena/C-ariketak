#include <stdio.h>
int main(){
	int urt;
	printf("Sartu zure urtea: ");
	scanf("%d",&urt);
	if (urt%4 == 0){
		printf("Bai da bisiestoa");
	} else {
		printf("Ez da bisiestoa");
	}
	return 0;
}
