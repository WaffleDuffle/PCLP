/*Următoarea secvență iterativă este definită pentru mulțimea de numere întregi pozitive:

n → n/2 (n este par)
n → 3n + 1 (n este impar)

Folosind regula de mai sus și începând cu 13, generăm următoarea secvență:

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
Se poate observa că această secvență (începând cu 13 și terminând cu 1) conține 10 termeni. Deși nu a fost încă dovedit (Problema Collatz), se crede că toate numerele care respectă regula de mai sus se termină la 1.

Care număr de pornire, sub un milion, produce cel mai lung lanț? 

Realizați un program care să determine numărul de pornire sub un milion care produce cel mai lung lanț. Afișați în consolă numărul precum și lungimea lanțului, fiecare separat printr-un spațiu de tabulare.

NOTĂ: Odată ce lanțul începe, termenii pot depăși un milion.*/

#include <stdio.h>
unsigned collatz(unsigned x)
{
    unsigned l = 0;
    while(x > 1)
    {

        if(x%2)
            x = x*3 + 1;
        else
            x /= 2;
        l++;
    }

    return l + 1;
}
int main()
{
    long int maxi = -1 , lmax = -1;
    for(unsigned i = 1000000 ; i >= 1 ; i--)
    {
        int x = collatz(i);
        if(lmax < x)
        {
            maxi = i;
            lmax = x;
        }
    }
    printf("%ld\t%ld\n",maxi,lmax);
    return 0;
}
