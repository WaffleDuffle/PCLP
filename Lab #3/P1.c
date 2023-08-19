/*Realizați un program care să citească două valori întregi de la tastatură și să afișeze toate valorile cuprinse între cele 2, exclusiv.

Date intrare:

5 10

Date ieșire:

6 7 8 9*/

#include <stdio.h>
int a, b;
int main()
{
    scanf("%d", &a);
    scanf("%d", &b);
    for(int i = a+1 ; i < b ; i++)
        printf("%d ", i);
}
