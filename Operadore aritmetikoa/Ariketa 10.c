#include <stdio.h>

int main(){
	float programNota;
	float analisiNota;
	float sareakNota;
	float batazBestekoa;
	
	printf("Programazioa: ");
	scanf("%f", &programNota);
	
	printf("\nAnalisia: ");
	scanf("%f", &analisiNota);
	
	printf("\nSareak: ");
	scanf("%f", &sareakNota);
	
	batazBestekoa = (programNota + analisiNota + sareakNota) / 3;
	printf("\nBatazBestekoa: %f", batazBestekoa);
	return 0;
}
