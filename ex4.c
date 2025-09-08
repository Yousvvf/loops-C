#include <stdio.h>

int main() 
{
    int n;

    printf("entrez le nombre qui afficher : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        int impair = 2 * i - 1;
        printf("%d ", impair);
    }

    return 0;
}