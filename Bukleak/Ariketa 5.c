#include <stdio.h>

int main(){
	int ZKH(int a, int b)
{
    

    while (b > 0)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
{
    int a, b;
    printf("Sartu 2 zenbaki koma batekin separatuta:");
    scanf("%d,%d", &a, &b);

    printf("ZKH: %d", ZKH(a, b));
}
}
