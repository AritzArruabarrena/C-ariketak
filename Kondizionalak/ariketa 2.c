#include <stdio.h>
int main(){
	 char c;
    printf("Sartu karaktere bat (maiuskulaz): ");
    scanf("\n%c", &c);
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        printf("Bokala da.");
        return 1;
    }
    else
    {
        printf("Kontsonantea edo beste karaktere bat da.");
        return 0;
    }
}

