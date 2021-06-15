//
// Created by BoWANG on 2021/6/15.
//

#include <iostream>

void q_01() {
    bool b = 42;
    std::cout << b << std::endl;
    int i = b;
    std::cout << i << std::endl;
    i = 3.14;
    std::cout << i << std::endl;
    double pi = i;
    std::cout << pi << std::endl;
    unsigned char c = -1;
    std::cout << c << std::endl;
//    signed char c2 = 256;
//    std::cout << c2 << std::endl;
}

void q_02() {
    unsigned u1 = 42;
    unsigned u2 = 10;
    std::cout << u1 - u2 << std::endl;
    std::cout << u2 - u1 << std::endl;
}

void q_03() {
    int ival = 42;
    int *p = &ival;
    std::cout << *p << std::endl;
    *p = 0;
    std::cout << ival << std::endl;
}

void q_04() {
    int ival = 42;
    int *pi = nullptr;
    pi = &ival;
    *pi = 48;
    std::cout << ival << std::endl;
    std::cout << *pi << std::endl;
}

void q_05() {
    int *p = nullptr;
    if (p)
        std::cout << "p为真" << std::endl;
}

int main() {
//    q_01();
//    q_02();
//    q_03();
//    q_04();
    q_05();
    return 0;
}
