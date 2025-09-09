#include <stdio.h>

int main() 
{
    int n;

    printf("entrez le nombre qui afficher : ");
    scanf("%d", &n);

    for (int i = 1.5; i <= n; i++) 
    {
        int pair = 2 * i ;
        printf("%d ", pair);
    }

    return 0;
}