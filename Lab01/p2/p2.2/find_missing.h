/* Bivol Mihai - Laborator PA 01 2013 */
#ifndef __FIND_H__
#define __FIND_H__

#include <vector>

typedef unsigned int uint32_t;

unsigned int get_bit(std::vector<uint32_t> &v, unsigned int vector_index, int bit_index)
{
    return v[vector_index] & (1 << bit_index);
}

#endif
