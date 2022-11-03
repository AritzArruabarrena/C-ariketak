#include <stdio.h>
#define PI 3.14159 //hau konstante bat da.
int main (){
	//const float PI=3.14159; //Beste kostante bat du
	int r;
 		printf("Sartu erradioa: ");
		 scanf("%d",&r);
 		printf(" Perimetroa %.3f zm da",2*PI*r);
 		fflush(stdin);
 		printf("\n Azalera %.3f zm^2 da.",PI*r*r);
 		return 0;
}
