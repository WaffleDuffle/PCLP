/*Scrieți un program care să exploareze fisierele antent limits.h și float.h, și să afișeze* domeniul de cuprindere pentru tipurile fundamentale de bază, precum și variațiile date de modificatorii de tip (Expresii-> Modificatori de tip; I/O formatate -> Funcția printf()). 

*studiați funcția de I/O printf().

Exemplu ieșire:

char ->  val_minima : val_maxima

int -> val_minima : val_maxima

etc.*/

#include <limits.h>
#include <float.h>
#include <stdio.h>


int main()
{
    printf("valoare char minima = %d\nvaloare char maxima = %d\n", CHAR_MIN, CHAR_MAX);
    printf("valoare unsigned minima = %d\nvaloare unsigned maxima = %d\n", 0, UINT_MAX);
    printf("valoarea int minima = %d\nvaloare int maxima = %d\n", INT_MIN, INT_MAX);
    printf("valoarea long minima = %d\nvaloarea long maxima = %d\n", LONG_MIN, LONG_MAX);
    printf("valoarea float minima = %d\nvaloarea float maxima = %d\n", FLT_MIN, FLT_MAX);
    printf("valoarea double minima = %d\nvaloarea double minima = %d\n", DBL_MIN, DBL_MAX);
    
}
