/*Scrieți un program care să citească de la tastatură trei valoari întreagi arbitrare și găsește și afișează pe ecran valoarea maximă.*/

#include <stdio.h>

int a, b, c;
int main()
{
    scanf("%d %d %d", &a, &b, &c);
    int maxi;
    maxi = a < b? b : a;
    maxi < c? printf("%d", c):printf("%d", maxi);
}
