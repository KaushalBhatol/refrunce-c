#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, index = 0;

    printf("enter the value to print numbers : ");
    scanf("%d", &num);
    do
    {
        printf("%d\n", index);
        index = index + 1;
    } while (index <= num );

    return 0;
}
