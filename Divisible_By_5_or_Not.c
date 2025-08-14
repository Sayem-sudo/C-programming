#include <stdio.h>
int main()
{
    int i;
    int a;
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d Yes\n", i);
        }

        else
        {
            printf("%d No\n", i);
        }
    }
    return 0;
}
