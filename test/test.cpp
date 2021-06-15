#include <iostream>
int reused = 42;
int main() {
    int ival = 1024;
    int &refVal = ival;
    ival += 1;
    std::cout << ival << std::endl;
    std::cout << refVal << std::endl;
}