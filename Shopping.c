#include <stdio.h>
int main()
{
    // int i=1000;
    int tk;
    scanf("%d", &tk);
    if (1000 < tk)
    {
        printf("I will buy Punjabi\n");

        if (1500 <= tk)
        {
            printf("I will buy new shoes\nAlisa will buy new shoes\n");
        }
    }
    else
    {
        printf("Bad luck!");
    }

    return 0;
}