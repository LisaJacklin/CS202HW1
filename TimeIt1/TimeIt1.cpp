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
and two other algorithms in STLa
measure time for each algorithm at least 5 times in ranges:
10,100,1K,10K, 100K, 1M, 10M, 100M, 1B

*/

//note sure where this belongs...
//random number generator
//this is used to generate a certain amount of random numbers for which
//the program has to search. 
std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> dis(0);



int main()
{
  


}
