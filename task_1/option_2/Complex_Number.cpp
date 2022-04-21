
#include <string>
#include <iostream>
#include "complex"
#include "Complex.h"
void base () {
    double real;
    std::string image;
    std::string first;
    std::string operation;
    double real_2;
    std::string image_2;
    std::string second;
    double number_image, number_image_2;
        std::cin >> real >> first >> image >> operation >> real_2 >> second >> image_2 ;
        image.erase(image.find('i'), 1);
        number_image = atoi(image.c_str());
        number_image_2 = atoi(image_2.c_str());
        Complex sign{};
        sign.setValues(real, number_image, real_2, number_image_2);
        if (operation == "+") {
            std::cout << sign.plus()[1];
    } }
