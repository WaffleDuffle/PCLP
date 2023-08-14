/*Scrieți un program care să citească de la tastatură un șir de caractere de dimensiune maximă 255 caractere folosind funcția fgets() și apoi să îl afișeze în consolă folosind funcția puts().*/

#include <stdio.h>

char s[255];
int main()
{
    fgets(s, 255, stdin);
    puts(s);
}
