#include <stdio.h>
int main(){
	int a,b,c,max;
	 printf("Sartu lehenengo zenbakia: ");
	 scanf("%d",&a);
	 printf("Sartu bigarren zenbakia: ");
	 scanf("%d",&b);
	 printf("Sartu hirugarren zenbakia: ");
	 scanf("%d",&c);
	 
	 if(a>=b && a>=c){
	 	max = a;
	 } else if (b>= a && b>=c) {
	 	max = b;
	 } else {
	 	max = c;
	 }
	printf("Numero maximoa hau da:%d",max);
	
	return 0;
}
