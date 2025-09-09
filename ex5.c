#include <stdio.h>

int main()
{
    int base, puis;
    int result = 1;

    printf("entrez le nombre : ");
    scanf("%d", &base);

    printf("entrez la puissance : ");
    scanf("%d", &puis);

    if (puis < 0)
    {
        printf("vous avez entre une puissance negative.\n");
        return 1;
    }

    printf("%d ^%d = ", base, puis);

    for (int i = 0; i < puis; i++)
    {
        result *= base;
        printf("%d", base);
        if (i < puis - 1)
        {
            printf(" × ");
        }
    }

    printf(" = %d \n", result);
    return 0;
}