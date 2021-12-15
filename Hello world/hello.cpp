#include <iostream>
#include "time.h"
using namespace std;

// The basic of c++.
// how to compile to .exe file:
// g++ -o hello <= fileTocompileto> hello.cpp <= the input file>



void SayHello(string name) {
    // string name;
    // std::cout << "Insert your name : ";
    // std::cin >> name;
    for (int j = 0; j < 100000; j++){
        std::cout << "Hello " << name << std::endl;
        std::cout << j;
    }

}

string FullName(string first, string last) {
    return first + " " + last;
}

int main () {
    string fs;
    string las;
    std::cout << "Insert your first Name : ";
    std::cin >> fs;
    
    std::cout << "Insert your last Name : ";
    std::cin >> las;
    
    string full = FullName(fs, las);
    SayHello(full);
    return 0;
}