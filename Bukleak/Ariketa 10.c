#include <stdio.h>

int main(){
	   int znbk;
    printf("Sartu zure zenbakia: ");
    scanf("%d", &znbk);

    if (znbk == alderantziz(znbk))
    {
        printf("Zenbakia kapikua da!");
        return;
    }

    printf("Zenbakia ez da kapikua :(");
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
