/*Scrieţi un program care citește de la tastatură un întreg, realizează înmulțirea acestuia cu 2 folosind strict operații pe biți, și afișează rezultatul în consolă.*/

#include <stdio.h>

int a;
int main()
{
    scanf("%d", &a);
    a <<= 1;
    printf("%d", a);
}
