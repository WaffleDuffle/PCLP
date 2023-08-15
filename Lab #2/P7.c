/*Realizați un program care să citească de la tastatură o valoare întreagă și să afișeze dacă valoarea introdusă este pozitivă sau negativă, afișând mesajul "Numar pozitiv" în consolă dacă valoarea este pozitivă, sau "Numar negativ", altfel. Nu se testează valoarea 0.

Intrare:

5

Ieșire:

Numar pozitiv*/

#include <stdio.h>

int a;
int main()
{
    scanf("%d", &a);
    a > 0?printf("Numar pozitiv"):printf("Numar nrgativ");
}
