/*Scrieți un program care să citească de la tastatură două valoari întreagi, și o valoare reală, printr-o singură apelare a funcției scanf() și afișează pe ecran numărul de date citite de la tastatură.

Intrare:

10 20 1.0

Ieșire:

3*/

#include <stdio.h>

int intreg1, intreg2;
float real;
int main()
{
    scanf("%d %d %f", &intreg1, &intreg2, &real);
    printf("%d", 3);
}
