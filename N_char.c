// this code about uppercase letter to lowercase letter
#include <stdio.h>
int main()
{
    char n;
    scanf("%c", &n);
    if (n >= 'a' && n <= 'z')
    {
        int ans = n - 32;
        printf("%c\n", ans);
    }
    else
    {
        int ans = n + 32;
        printf("%c\n", ans);
    }
    return 0;
}