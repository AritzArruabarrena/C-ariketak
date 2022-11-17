#include <stdio.h>

void bakoitiak(int z);
void biderketa(int x);
void hileak ();
void positiboa (int v);
int main(){
	int zenbakia, n, a, h, p;
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	printf("* 1)Zenbakia bakoitia da edo bikoitia jakitzeko     *\n");
	printf("* 2)Biderketa taula                                 *\n");
	printf("* 3)Hilaren zenbakiak                               *\n");
	printf("* 4)Zenbaki positiboak eta negatiboak               *\n");
	printf("* 0)MENUTIK IRTETZEKO                               *\n");
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	
	printf("Sartu ariketaren zenbakia: ");
	scanf("%d",&zenbakia);
	
	switch(zenbakia){
		case 0: printf("MENUTIK IRTETZEN.... AGUR!!!<3<3");
				break;
		case 1:	printf("Sartu zure zenbakia bikoitia edo bakoitia den jakitzeko:");
				scanf("%d",&n);
				bakoitiak(n);
				break;
		case 2: printf("Biderketa taula sortzen...\n");
				biderketa(a);
				break;
		case 3: hileak ();
				break;
		case 4: positiboa (p);
				break;
	}
}	
void bakoitiak(int z){
	if(z%2==0)//bikoitia
	{
		printf("Hau bikoitia da");
	} else {
		printf("Hau bakoitia da");
	}
}

void biderketa(int x){
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

void hileak (){
	int h;
	printf("Sartu hilearen zenbakia: ");
		scanf("%d",&h);
	switch(h){//Goian eskatutako zenbakia beko casekoa imprimatuko du.//
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
}

void positiboa (int v){
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
}
	
	


