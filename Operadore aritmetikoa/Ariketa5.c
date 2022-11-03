#include <stdio.h>
int main(){
	float cel , fa;
		printf ("Programa honek \"Celsius\"-graduatik \n Farenheit-era pasatzen du");
		printf ("\n Sartu Celsius: ");
		scanf("%f", &cel);
		fa=(cel*9/5)+32 ;
		printf("%f C %f F dira", cel ,fa);
	return 0;
}

