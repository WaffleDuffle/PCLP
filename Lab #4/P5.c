/*Christian Goldbach a propus că fiecare număr compus impar poate fi scris ca suma dintre un prim și de două ori un pătrat.

Notă. Numerele compuse impare sunt toate numerele întregi impare care nu sunt prime: 9, 15, 21, 25, 27, etc.

9 = 7 + 2×12
15 = 7 + 2×22
21 = 3 + 2×32
25 = 7 + 2×32
27 = 19 + 2×22
33 = 31 + 2×12

Se pare că presupunerea era falsă.

Realizați un program care să determine cel mai mic compus impar care nu poate fi scris ca suma unui prim și de două ori un pătrat. Afișați valoarea determinată în consolă.*/

#include <stdio.h>
bool prim(long int x)
{
    for(long int i = 2 ; i <= x/2 + x%2 ; i++)
        if(x%i == 0)
            return 0;
        return 1;
}
bool Goldbach(long int x)
{
    long int a = 2;
    while(a <= x-2)
    {
        bool ok1 = 1, ok2 = 1;
        if(prim(a) == 1)
        {
            ok1 = 0;
            long int i = 1;
            while(a + 2 * (i*i) <= x)
            {
                if(a + 2 * (i*i) == x)
                {
                    ok2 = 0;
                    break;
                }
                i++;
            }
        }
        if(ok1 == 0 && ok2 == 0)
            return 0;
        a++;
    }
    return 1;
}
int main()
{
    long int x = 1;
    while(true)
    {
        if(prim(x) == 0)
            if(Goldbach(x) == 1)
            {
                printf("%ld",x);
                return 0;
            }
        x += 2;
    }
    return 0;
}
