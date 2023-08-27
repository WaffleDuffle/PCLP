/*Suma pătratelor primelor zece numere naturale este, 1^2+2^2+...+10^2=385
.

Pătratul sumei primelor zece numere naturale este, (1+2+...+10)^2=55^2=3025
.

Prin urmare, diferența dintre pătratul sumei și suma pătratelor primelor zece numere naturale este 3025−385=2640
.

Realizați un program care să determine diferența dintre pătratul sumei și suma pătratelor primelor o sută de numere naturale. Afișați în consolă rezultatul obținut.*/

#include <stdio.h>

int main()
{
    int a = (100*(100 + 1)*(2*100 + 1))/6;
    int b = ((100*(100 + 1))*(100*(100 + 1)))/4;
    printf("%d", b - a);
    return 0;
}
