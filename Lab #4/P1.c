/*Factorii primi ai lui 13195 sunt 5, 7, 13 și 29.

Realizați un program care să determine și să afișeze în consolă, cel mai mare factor prim al numărului 600851475143? Numărul va fi citit de la tastatură.*/

#include <stdio.h>
int main()
{
    long int a, max;
    scanf("%lld", &a);
    long int f = 2;
    while(a != 1)
    {
        if(a % f == 0)
        {
            while(a % f == 0)
                a = a / f;
            max = f;
        }
        f++;
    }
    printf("%lld", max);
    return 0;
}
