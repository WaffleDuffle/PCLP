/*Scrieţi un program care citește de la tastatură doi întregi, și afișează restul împărțirii primului la al doilea.*/

#include <stdio.h>
using namespace std;
int a, b;
int main()
{
    scanf("%d %d", &a, &b);
    printf("%d", a % b);
}
