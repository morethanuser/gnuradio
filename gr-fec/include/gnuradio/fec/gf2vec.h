/* -*- c++ -*- */
/*
 * Copyright 2015 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#ifndef GF2VEC_H
#define GF2VEC_H

#include <vector>

class GF2Vec
{
private:
    //! The vector vec
    std::vector<char> vec;

    //! Resize the vector
    void resize(int size);

public:
    //! Default constructor
    GF2Vec() {}

    //! Constructs a vector of length "size" with all 0 entries
    GF2Vec(int size);

    //! Returns the vector
    std::vector<char> get_vec();

    //! Returns the size of the vector
    int size();

    //! Resets the vector with the given input
    void set_vec(const std::vector<char>);

    //! Access the ith element
    char& operator[](int i);

    //! Overloading the operator '='
    void operator=(GF2Vec x);

    //! Obtain a subvector between the indices i to j
    GF2Vec sub_vector(int i, int j);

    //! Overloading the operator '+'
    friend GF2Vec operator+(GF2Vec a, GF2Vec b);

    //! Overloading the operator '*'
    friend char operator*(GF2Vec a, GF2Vec b);

    //! Prints the vector
    void print_vec();
};

#endif // #ifndef GF2VEC_H
