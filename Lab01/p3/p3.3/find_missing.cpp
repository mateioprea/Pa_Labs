#include <iostream>
#include <fstream>
#include <vector>

#include "vector_io.h"



int find_missing(std::vector<int> v)
{
    
    return 0;
}

int main(void)
{
    std::ifstream f("date.in");
    std::vector<int> v1, v2;
    f >> v1;
    f >> v2;
    std::cout << find_missing(v1) << std::endl;
    std::cout << find_missing(v2) << std::endl;
    f.close();
}
