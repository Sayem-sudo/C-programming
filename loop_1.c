// This code about For Loop type-1.
#include <stdio.h>
int main()
{
    int i;                           // i=this only for initialization.
    for (i = 10; i <= 14; i = i + 1) // or i=i++ you can use
    /*This is for loop syntex.Here ,I have done
       actually 3 work.No-1 is initialization.
           No-2 is condition apply
           No-3 is increment/decrement*/
    {
        printf("Hello\n");
    }
    return 0;
}