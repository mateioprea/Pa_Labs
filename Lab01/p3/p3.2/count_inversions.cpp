#include <iostream>
#include <fstream>
#include "vector_io.h"




int count_inversions(std::vector<int> v)
{
    //TODO Intoarceti numarul de inversiuni din vectorul v
    
}

int main(void) {
    std::ifstream f("date.in");
    std::vector<int> v1, v2;
    f >> v1 >> v2;
    f.close();
    std::cout << "In " << v1 << std::endl
              << "sunt " << count_inversions(v1)
              << " inversiuni." << std::endl;

    std::cout << "In " << v2<< std::endl
              << "sunt " << count_inversions(v2)
              << " inversiuni." << std::endl;
    return 0;
}
