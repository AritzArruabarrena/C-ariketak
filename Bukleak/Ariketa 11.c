#include <stdio.h>

int main(){
	  int znbk;
    printf("Sartu zure zenbakia: ");
    scanf("%d", &znbk);

    if (lehenaDa(znbk))
    {
        printf("\nZenbakia lehena da.");
        return;
    }
    printf("\nZenbakia ez da lehena.");
}
int lehenaDa(int znbk)
{
   
    int i = 2;
    for (i; i < znbk; i++)
    {

        if (znbk % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

