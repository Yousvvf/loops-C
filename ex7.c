#include <stdio.h>

int main()
{
    int num, inverse = 0;
    int chifr;

    printf("entrez num : ");
    scanf("%d", &num);

    while (num != 0)
    {
        chifr = num % 10;
        inverse = inverse * 10 + chifr;
        num = num / 10;
    }
    printf("le nombre est : %d\n", inverse);
    
    return 0;
}