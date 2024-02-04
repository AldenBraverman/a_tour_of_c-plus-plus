//
//  main.cpp
//  a_tour_of_c-plus-plus
//
//  Created by Alden Braverman on 2/4/24.
//
/*
 #include <iostream>
 
 int main(int argc, const char * argv[]) {
 // insert code here...
 std::cout << "Hello, World!\n";
 return 0;
 }
 */

#include <iostream>

double square(double x)
{
    return x*x;
}

void print_square(double x)
{
    std::cout << "the square of " << x << " is " << square(x) << "\n";
}

int main()
{
    // std::cout << "Hello, World!\n";
    /*
     << operator writes its second argument onto its first
     string literal "Hello World!\n" is written onto the standard output stream std::cout
     */
    print_square(1.234);
}
