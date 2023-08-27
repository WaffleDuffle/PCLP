/*Realizați un program care să determine rădăcina pătrată a unui număr natural arbitrar introdus de la tastatură. Afișați în consolă rezultatul.

Notă:  Rădăcina pătrată a unui număr a este numărul y cu proprietatea că y2 = a. Cu alte cuvinte, un număr y al cărui pătrat (rezultatul înmulțirii numărului cu el însuși, sau y × y) este a.*/

#include <stdio.h>
double absolut(double x)
{
    if(x < 0)
        return x * -1;
    else
        return x;
}
double patrat(double n, double u, double p)
{
    double m = (u + p)/2;
    double mu = m*m;
    if((mu == n) || (absolut(mu-n) < 0.0000001))
        return m;
    else if(mu < n)
        return patrat(n, m, p);
    else
        return patrat(n, u, m);
}
int main()
{
    double n;
    scanf("%lf", &n);
    double i = 1;
    while(true)
    {
        if(i*i == n)
        {
            printf("%lf", i);
            return 0;
        }
        else if(i*i > n)
        {
            double rez = patrat(n,i-1,i);
            printf("%lf", rez);
            return 0;
        }
        i++;
    }
    
}
