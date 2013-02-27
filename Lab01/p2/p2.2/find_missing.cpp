#include <iostream>
#include <vector>
#include <fstream>
#include "find_missing.h"
#include "vector_io.h"

#define BIT_LENGTH 32

uint32_t find_missing(const std::vector<uint32_t>& v)
{
    std::vector<uint32_t> bit_set_0;
    std::vector<uint32_t> bit_set_1;

    uint32_t res = 0;
    //TODO Gasiti valoarea lipsa din v.
    //v contine |v| elemente distincte intre de la 0 la |v| inclusiv
    //e.g.
    //v = 0 1 3
    //|v| = 3
    //v contine elemente in intervalul [0. 3]
    //
    //Valoarea lipsa este 2
    //
    //Hints!
    //
    //Presupunem ca bitii unui numar sunt numerotati de la 0 la n.
    //n = 3
    //x = 8
    //    3 2 1 0
    //x = 1 0 0 0
    //
    //In setul 0 1 2 3 5 6 7 trebuie cautat un numar de la 0 la 7
    //
    //Daca sunt 4 numere care au bitul 2 egal cu 0, putem spune cu certitudine ca avem toate numerele de la 0 la 3.
    //De ce?
    //
    //Ce valoare are bitul 2 in numarul lipsa din set?
    //
    //Ce se intapla cand vom numara cate numere au bitul 1 egal cu 0 in 5 6 7?
    short current_bit = BIT_LENGTH - 1;

    
    return res;
}

int main(void) {
    std::ifstream f("date.in");
    std::vector<uint32_t> v1, v2;
    f >> v1;
    f >> v2;
    std::cout << find_missing(v1) << std::endl;
    std::cout << find_missing(v2) << std::endl;
    f.close();
    return 0;
}
