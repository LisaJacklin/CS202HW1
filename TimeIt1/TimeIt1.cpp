// TimeIt1.cpp 
// Lisa Jacklin
// CS 202
// 1/21/2022
//

#include <iostream>
#include <random>  // STL for random generator
#include <chrono> // this STL allows for timing 
using std::cout;
using std::cin;
using std::endl;

/*
Requirements:

use this to test search, binary_search, 
and two othe ralgorithms in STLa
measure time for each algorithm at least 5 times in ranges:
10,100,1K,10K, 100K, 1M, 10M, 100M, 1B

*/


int main()
{
    //include a constructor to start the clock
    //include start and stop method

    //note sure where this belongs...
    //generates a random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0);



}

//What can you say about the comparative asymptotic performance for those algorithms?
