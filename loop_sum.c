// This code about Loop sum form 1 to N.
#include <stdio.h>
int main()
{
    int sum = 0;
    int i;
    for (i = 1; i <= 5; i = i + 1)
    {
        sum = sum += i;
    }
    printf("%d", sum);
    return 0;
}

// This code adout any kind of number
#include <stdio.h>
int main()
{
    long long int sum = 0; /*Only int max 9 digit count korte pare tai long sum.
    here (ll sum=0) because initial value 1 jake 0 ar shthe plus  korte hobe .
    real formula under the code*/

    int i;
    int n; // for any digit.
    scanf("%d", &n);
    for (i = 1; i <= n; i = i + 1)
    {
        sum += i; /*Actual farmula is
        sum=0
        sum=sum+1
        sum=sum+2
        sum=sum+3 similarly we can write
        sum+=4*/
    }
    printf("%lld", sum); // loop ar vhetore dile every sum show korbe.bahire dile total sum.
    return 0;
}