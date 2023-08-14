/*Scrieți un program care să citească de la tastatură o valoare întreagă, și o afișează în consolă formatând ieșirea cu specificatorul de precizie de valoare 10.*/

#include <stdio.h>

int intreg;
int main()
{
    scanf("%d", &intreg);
    printf("%.10d", intreg);
}
