#include <stdio.h>

int main() 
{
    int n, i;
    int resultat = 1;

    printf("entrez un entier positif : ");
    scanf("%d", &n);

    if (n < 0) 
    {
        printf("la factorielle n'est pas definie pour les nombres negatifs.\n");
    }
    else 
    {
        for (i = 1; i <= n; i++) {
            resultat = resultat * i;
        }
        printf("la factorielle de %d est : %d \n", n, resultat);
    }

    return 0;
}