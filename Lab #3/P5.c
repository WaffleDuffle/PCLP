/*Un triplet pitagoreic este reprezentat de un set the trei numere naturale, a < b < c, pentru care a2 + b2 = c2

De exemplu: 32 + 42 = 9 + 16 = 25 = 52.

Există un singur triplet pitagoreic exact pentru care a + b + c = 1000. Realizați un program care să determine produsul abc. Afișați în consolă valorile pentru care a, b, și, c satisfac condiția, fiecare pe o linie nouă, iar în continuare, pe linia următoare, afișați produsul lor.*/

#include <stdio.h>
long a, b, c;
int main()
{
    for(a = 1 ; a <= 497 ; a++)
        for(b = a + 1 ; b <= 997 - a ; b++)
            for(c = b + 1 ; c <= 997 - b ; c++)
                if(a + b + c == 1000 && a*a + (b*b) == c*c)
                    printf("%ld\n%ld\n%ld\n%ld", a, b, c, a*b*c);
}
