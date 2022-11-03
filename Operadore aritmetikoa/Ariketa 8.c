#include <stdio.h>

int main(){
	  int x, y, tmp = 0;
    printf("Sartu \"x\"-en balioa: ");
    scanf("%d", &x);
    printf("Sartu \"y\"-ren balioa: ");
    scanf("%d", &y);

    tmp = x;
    x = y;
    y = tmp;
    
    printf("Aldatutako balioak: x = %d y = %d", x, y);
}

