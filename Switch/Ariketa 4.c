#include <stdio.h>

int main(){
	int a,b;
	
	printf("Sartu lehen zenbakia: ");
	scanf("%d",&a);
	printf("Sartu bigarren zenbakia: ");
	scanf("%d",&b);
	
	switch (a > b){//kondizioa gezurra baldin bada(a txikiagoa) 0 izango da beraz case 0 imprimatuko du//
		case 0:
		printf("Hau da maximoa %d", b);
		break;
		
		case 1:
		printf("Hau da maximoa %d", a);
		break;
	}
	return 0;
}
