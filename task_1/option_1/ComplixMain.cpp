#include "Complex.h"
#include "iostream"
int algoritm() {
    int one, two, three, four;
    std::cin >> one, two, three, four;
    complexNumber value1 {};
    complexNumber value2 {};
    complexNumber abs {};
    value2.setValues(one, two);
    value1.setValues(three , four);
    std::cout << abs.abs() << std::endl;
    std::cout << value1 + value2 << std::endl;
    std::cout << value1 - value2 << std::endl;
    std::cout << value1 * value2 <<std::endl;
    std::cout << value1 / value2 << std::endl;
    return 0;
}