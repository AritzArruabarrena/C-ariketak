#include <stdio.h>

int main(){
	int zenbakia;
	printf("Sartu hilearen zenbakia: ");
	scanf("%d",&zenbakia);
		
	switch(zenbakia){//Goian eskatutako zenbakia beko casekoa imprimatuko du.//
		case 1:
			printf("Urtarrilak:31 egun ditu");
			break;
		case 2:
			printf("Otsailak:28 egun ditu");
			break;
		case 3:
			printf("Martxoak:31 egun ditu");
			break;
		case 4:
			printf("Apirilak:30 egun ditu");
			break;
		case 5:
			printf("Maiatzak:31 egun ditu");
			break;
		case 6:
			printf("Ekainak:30 egun ditu");
			break;
		case 7:
			printf("Uztailak:31 egun ditu");
			break;
		case 8:
			printf("Abuztuak:31 egun ditu");
			break;
		case 9:
			printf("Irailak:30 egun ditu");
			break;
		case 10:
			printf("Urriak:31 egun ditu");
			break;
		case 11:
			printf("Azaroak:30 egun ditu");
			break;
		case 12:
			printf("Abenduak:31 egun ditu");
			break;
			
	}
	return 0;
}
