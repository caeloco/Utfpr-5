#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    if (a > b)
    {
        for (int i = a - 1; i > b; i--)
        {
            printf("%d\n", i);
        }
    }
    else
    {
        for (int i = a + 1; i < b; i++)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}