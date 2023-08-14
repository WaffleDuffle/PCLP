/*Scrieți un program care să citească de la tastatură o valoare reală, și o afișează în consolă cu doar 4 zecimale.*/

#include <stdio.h>

float real;
int main()
{
    scanf("%f", &real);
    printf("%.4f", real);
}
