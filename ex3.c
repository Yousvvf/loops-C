#include <stdio.h>

int main() {
    int n, somme = 0;

    printf("entrez le nombre : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        somme += i;
    }

    printf("la somme est : %d\n", somme);

    return 0;
}
