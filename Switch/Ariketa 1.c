#include <stdio.h>

int main(){
	{
    printf("Tekleatu letra bat: ");
    char letra;
    scanf("\n%c", &letra);

    switch (letra)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':

        printf("Karaktere hori bokal bat da.");
        return;
    default:
        printf("Karaktere hori ez da bokal bat.");
        return;
    }
}
}
