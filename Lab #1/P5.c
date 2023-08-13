/*Scrieți un program care declară și inițializează cu valori arbitrare o variabilă de tip double, int și char. Apoi declarați și inițializați un pointer către fiecare dintre cele trei variabile. Programul dvs. va afișa adresa și valoarea stocată pentru fiecare dintre cele șase variabile. Utilizați specificatorul de formatare specific pentru a afișa adresele în hexazecimal. Ar trebui să vedeți adrese care arată în felul următor: „0xbfe55918”. Caracterele inițiale „0x” vă spun că se utilizează notația hexazecimală; restul cifrelor dau adresa în sine. Utilizați „%f” pentru a afișa o valoare reală.

Exemplu ieșire:

Adresa var char ___ este 0x_______ 

Adresa var int ___ este 0x_______ 

Adresa  var double ___ este 0x_______

Adresa  var char* ___ este 0x_______ 

Adresa var int* ___ este 0x_______ 

Adresa var double* ___ este 0x_______

Valoarea var char ___ este _______ 

Valoarea var int ___ este _______ 

Valoarea var double ___ este _______ 

Valoarea var char* ___ este 0x_______ 

Valoarea var int* ___ este 0x_______ 

Valoarea var double* ___ este 0x_______*/

#include <stdio.h>

char x1 = 'z', *x2;
int intreg1 = 29, *intreg2;
double real1 = 31.23, *real2;

int main()
{
    x2 = &x1;
    intreg2 = &intreg1;
    real2 = &real1;
    printf("Adresa var char x1 este 0x%x\n", &x1);
    printf("Adresa var int intreg1 este 0x%x\n", &intreg1);
    printf("Adresa var double real1 este 0x%x\n", &real1);
    printf("Adresa var char* x2 este 0x%x\n", &x2);
    printf("Adresa var int* intreg2 este 0x%x\n", &intreg2);
    printf("Adresa var double* real2 este 0x%x\n", &real2);
    printf("Valoarea var char x1 este %d\n", x1);
    printf("Valoarea var int intreg1 este %d\n", intreg1);
    printf("Valoarea var double real1 este %.2f\n", real1);
    printf("Valoarea var char* x2 este 0x%x\n", x2);
    printf("Valorarea var int* intreg2 este 0x%x\n", intreg2);
    printf("Valoarea var double* real2 este 0x%x\n", real2);
    
}
