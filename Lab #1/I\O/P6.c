/*Scrieți un program care să citească de la tastatură o valoare întreagă, și o afișează în consolă formatând ieșirea cu specificatorul pentru mărimea minimă a câmpului de valoare 10, împreună cu o aliniere la stâng.*/

#include <stdio.h>

int intreg;
int main()
{
    scanf("%d",&intreg);
    printf("%-.10d", intreg);
}
