/*Scrieţi un program care calculează şi afişează pe ecran media aritmetică a două numere întregi citite de la tastatură.*/

#include <stdio.h>

int a, b;
float ma;
int main()
{
    scanf("%d %d", &a, &b);
    ma = (a+b)/2.0;
    printf("%.2f", ma);
}
