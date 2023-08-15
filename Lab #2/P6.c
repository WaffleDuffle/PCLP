/*Criptarea este un proces de mascare a unei informații pentru a o face ilizibilă pentru utilizatorii neautorizați. În astfel de rutine, operatorii pentru biți sunt deseori utilizați. Realizați un program care să permită criptarea a 4 întregi reprezentând coordonate spațiale de interes ce vor fi transmise mai departe unei terțe parte. Pentru criptare se va folosi o cheie secretă citită ultima de la tastatură reprezentată printr-un întreg iar operația de criptare se realizează prin operatorul XOR. Să se afișeze în consolă cele 4 coordonate criptate.

Intrare:

65 90 44 51 128

Ieșire:

193 218 172 179*/

#include <stdio.h>

int a, b, c, d, v;
int main()
{
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &v);
    a = a ^ v;
    b = b ^ v;
    c = c ^ v;
    d = d ^ v;
    printf("%d %d %d %d", a, b, c, d);
}
