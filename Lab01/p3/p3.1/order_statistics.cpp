#include <iostream>
#include <fstream>
#include <vector>

#include "vector_io.h"


//lower + upper /2 is very very bad !
int partitionare (std::vector <int> &v, int lower, int upper){
		int sem = 1; //le wild semafor
		while ( lower < upper ) { // cat timp lower < upper
			if (v[ lower ] > v [ upper ] ) { //daca parte din stanga > partea din dreapta interschimbare
				int temp = v[lower]; 
				v[lower]=v[upper];
				v[upper]=temp;
				sem*=-1; 
			}
			if ( sem == 1 )
				lower++;
			else
				upper--;
		}
	return lower ;
}
void qsort(std::vector<int> &v, int lower, int upper)
{
    //TODO Completati codul pentru a realiza quicksort
	if ( lower < upper ) {
		int pivot = partitionare (v, lower, upper );
			if ( lower <= pivot -1 )
				qsort (v,lower,pivot-1);
			if (pivot +1 < upper )
				qsort (v, pivot +1 , upper );
	}
}

int find_kth_min(std::vector<int> &v, int lower, int upper, int k)
{
    // TODO Completati codul pentru a afla al k-lea minim din vectorul v
	int x;
	x = partitionare (v, lower,upper);
	while ( x != k ){
		if ( x > k ){
			if ( lower <= x -1 )
			x = partitionare (v, lower, x-1);
		}
		else 
			if ( x+1 <= upper )
				x = partitionare (v, x+1, upper);
	}
	return v[k];
}
	


int main(void)
{
    std::ifstream f("date.in");
    std::vector<int> v1, v2;
    f >> v1;
    f >> v2;
    std::cout << "v1: " << v1 << std::endl;
    for (unsigned int i = 0; i < v1.size(); i++) {
        std::cout << "Al " << i << "-lea minim din v1 este: ";
        std::cout << find_kth_min(v1, 0, v1.size() - 1, i) << std::endl;
    }
    qsort(v1, 0, v1.size() - 1);
    qsort(v2, 0, v2.size() - 1);
    std::cout << "Vectorii sortati:\n";
    std::cout << v1 << std::endl;
    std::cout << v2 << std::endl;
    f.close();
}
