/*Scrieți un program care să citească de la tastatură un caracter, un șir de caractere de dimensiune maximă 255 caractere, o valoare întreagă, și o valoare reală. Se va afișa în consolă fiecare dată, în ordinea citirii, pe cate o linie nouă.*/

#include <stdio.h>

char c, s[255];
int intreg;
float real;
int main()
{
    c = getchar();
    scanf("%s %d %f", &s, &intreg, &real);
    putchar(c);
    printf("\n%s\n%d\n%.2f", s, intreg, real);
}
