/*Dacă listăm toate numerele naturale mai mici decât 10 care sunt multipli de 3 și 5 obtinem 3, 5, 6 și 9. Suma acestor multipli este 23. Scrieți un program care să determine suma tuturor multiplilor lui 3 și 5 mai mici decât 1000.*/

#include <stdio.h>
int s = 8;
int main()
{
    for(int i = 6; i < 1000 ; i++)
        if(!(i%3) || !(i%5))
            s += i;
    printf("suma divizorilor lui = %d", s);
}
