#include <stdio.h>

int main(){
	int zenbakia;
	printf("Sartu egunaren zenbakia: ");
	scanf("%d",&zenbakia);
	
	switch(zenbakia){
		case 1:
			printf("Astelehena");
			break;
		case 2:
			printf("Asteartea");
			break;
		case 3:
			printf("Asteazkena");
			break;
		case 4:
			printf("Osteguna");
			break;
		case 5:
			printf("Ostirala");
			break;
		case 6:
			printf("Zapatua");
			break;
		case 7:
			printf("Domeka");
			break;
			
	}
	return 0;
}
