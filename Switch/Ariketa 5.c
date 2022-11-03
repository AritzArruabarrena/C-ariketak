#include <stdio.h>

int main(){
	int zenbakia;
	
	printf("Sartu zure zenbakia bikoitia edo bakoitia den jakitzeko:");
	scanf("%d",&zenbakia);
	
	switch(zenbakia % 2){
		
		case 0:
			printf("Hau bikoitia da");
			break;
			
		case 1:
			printf("Hau bakoitia da");
			break;
	}
	return 0;
}
