#include <stdio.h>

void add()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("Function Called\n");

    int sum = a + b;

    printf("%d\n", sum);
}

void greeting()
{
    printf("Good Morning\n");
}
//
int main()
{
    greeting();

    add();

    return 0;
}