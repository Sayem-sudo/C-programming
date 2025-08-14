// This code about how to continue in Loop.
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue; /* only 5 print hobe na.When we want
                      to skip  somthing then we can use*/
        }
        printf("%d\n", i);
        //    Or here .But there is no profit
        if (i == 5)
        {
            continue; // There is no work.
        }
    }

    return 0;
}