#include <iostream>
#include <cmath>
#include <stdio.h>

bool compare(double x, double y, double precision)
{
    return std::abs(x - y) < precision;
}

double my_sqrt(double x, double lower, double upper, double precision)
{
    // TODO Cautati intre lower si upper o valoare care ridicata
    // la patrat sa dea x.
    //
    // Good to know!
    // La calcularea pozitiei de mijloc folositi
    // double m = lower + (upper - lower) / 2;
    // nu
    // double m = (lower + upper) / 2;
    // Pentru a evita overflow la adunarea pe double
    //
    // Folositi functia compare pentru a verifica cu aproximare
    // egalitatea.
    double m = lower + (upper - lower ) / 2;
    double patrat = m*m;
    while (!compare(x,patrat,precision)){
        if (patrat<x)
            lower = m;
        if (patrat>x)
            upper = m;
        m = lower + (upper - lower ) / 2;
        patrat = m*m;
    }
    return m;
}

int main(void) {
    //TODO Testati codul cu 3 valori alese de voi.
    // Cel putin o valoare sa fie subunitara.
    //Precizia va fi 0.001.
    //Decideti care va fi valoarea upper folosita.
    //
    //Hint ce se intampla cand x < 1?
    //
    //Afisati numarul si patratul rezultatului.
    double x,lower,upper,precision;
    float y;
    y = my_sqrt(0.9,0,10,0.001);
    //x = my_sqrt (0.2, 0.1, 1, 0.001);
    printf ("%.3f", y);
}
