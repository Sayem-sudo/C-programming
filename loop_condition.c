// This code about how to I use condition in Loop.

/*#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i += 1)
    {

        if (i % 2 == 1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}*/

#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i += 1)
    {

        if (i % 2 == 1)
        {
            printf("%d-odd\n", i);
        }
        else
        {
            printf("%d-Even\n", i);
        }
    }

    return 0;
}