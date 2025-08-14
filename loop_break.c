// This code about how to break in Loop.
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", i);

        if (i == 5) /*This condition pore because
                c line by line instruction pore*/
        {
            break;
        }
    }

    return 0;
}