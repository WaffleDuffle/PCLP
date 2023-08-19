/*Realizați un program care să citească o valoare întreagă de la tastatură și să determine dacă este un număr prim prin afișarea în consolă a valorii 1 pentru număr prim, sau 0 altfel. 

Date intrare:

7

Date ieșire:

1*/

#include <stdio.h>
int x;
bool ok = 1;
int main()
{
    printf("introduceti valoarea = ");
    scanf("%d", &x);
    for(int i = 2 ; i < x/2 + x%2 && ok == 1 ; i++)
        if(!(x%i))
            ok = 0;
    ok == 1 ? printf("1") : printf("0");
}
