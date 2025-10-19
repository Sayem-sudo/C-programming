#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int Ans = n / 1000;
    if (Ans % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}