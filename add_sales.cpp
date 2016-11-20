#include <iostream>
#include "Sales_item.h"

int main() {
    
    Sales_item item1, item2;
    Sales_item sum;
    while (std::cin >> item1)
        sum += item1;

    std::cout << std::endl << sum << std::endl;
    return 0;
}
