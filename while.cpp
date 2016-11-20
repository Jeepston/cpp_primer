#include <iostream>

int main() 
{
    int v1 = 0, v2 = 0;
    std::cout << "Enter two integers: " << std::endl;
    std::cin >> v1 >> v2;
    std::cout << "All numbers in the range: " << std::endl;
    while (v1 <= v2) {
        std::cout << v1++ << std::endl;
    }

    return 0;
}
