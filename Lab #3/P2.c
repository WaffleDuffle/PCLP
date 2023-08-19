/*Realizați un program care să citească un caracter de la tastatură și să afișeze toate celelalte caractere care îi urmează, până se ajunge la caracterul Z dacă litera introdusă de la tastatură este majusculă, sau z, dacă litera introdusă de la tastatură este minusculă.

Date intrare:

F

Date ieșire:

GHIJKLMNOPQRSTUVWXYZ*/

#include <stdio.h>
char c;
int main()
{
    scanf("%c", &c);
    if(c < 'Z')
        while(c < 'Z')
            printf("%c", ++c);
    else
        while(c < 'z')
            printf("%c", ++c);
}
