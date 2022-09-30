#include <stdio.h>

int main()
{
    int number_8;
    printf("Number_8:");
    scanf("%o", &number_8);

    printf("Number_16 === %X\n", number_8);

    printf("Number << 2: %o\n", number_8 << 2);

    printf("%o\n", ~number_8);

    int num;
    scanf("%o", &num);
    printf("%o", num & number_8);
    printf("Hello");
    return 0;
}
