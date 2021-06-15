#include <iostream>
#include "Sales_item.h"

void q_01() {
    Sales_item book;
    std::cin >> book;
    std::cout << book << std::endl;
}

void q_02() {
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;
}

int main() {
//    q_01();
    q_02();
    return 0;
}
