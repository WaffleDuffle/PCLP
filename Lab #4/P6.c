/*Scrieți un program care să permită citirea de la tastatură a două numere naturale a și n, și să afișeze în consolă rezultatul an
.*/

#include <stdio.h>

int main()
{
    int a, n, b;
    scanf("%d%d",&a,&n);
    b = a;
    for(int i = 2 ; i <= n ; i++)
        a = a * b;
    printf("%d", a);
}
