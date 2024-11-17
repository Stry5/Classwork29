// Classwork29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Movie.h"

int main()
{
    std::string input = "24 s2,2014";

    movies::Movie Movie(input);

    std::cout << Movie << std::endl;

    return 0;
}