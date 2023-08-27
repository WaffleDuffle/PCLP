/*2520 este cel mai mic număr care poate fi împărțit la fiecare dintre numerele de la 1 la 10, fără rest.

Scrieți un program care să determine cel mai mic număr pozitiv care are ca divizori toate numerele de la 1 la 20. Intervalul va fi citit de la tastatură.*/

#include <stdio.h>

int main()
{
    int a, b;
    long int x = 21;
    scanf("%d%d",&a,&b);
    while(true)
    {
        int ok = 1;
        for(int i = a ; i <= b ; i++)
            if(x%i)
            {
                ok = 0;
                goto label;
            }
        label:
        if(ok == 1)
        {
            printf("%lld", x);
            return 0;
        }
        x++;
    }
    return 0;
}
