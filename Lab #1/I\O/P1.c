/*Scrieți un program care să citească de la tastatură un caracter folosind funcția getchar() și apoi să îl afișeze în consolă folosind funcția putchar().*/

#include <stdio.h>

char c;
int main()
{
    c = getchar();
    putchar(c);
}
