//
// Created by Matra on 14.02.2022.
//

#ifndef UNTITLED4_COMPLEX_H
#define UNTITLED4_COMPLEX_H
#include "complex"
#include "iostream"
#include "vector"
class Complex {
    double image;
    double real;
    double image_2;
    double real_2;
public:
    void setValues(double a, double b, double c, double d) {
        image = a;
        real = b;
        image_2 = c;
        real_2 = d;
    }
    const std::vector<std::complex<double>> plus () const {
        std::complex< double > one (real, image);
        std::complex< double > two (real_2, image_2);
        std::complex< double > answer = (one + two);
        std::vector<std::complex<double>> arr;
        arr.push_back(one);
        arr.push_back(two);
        return arr;
    }

};
#endif //UNTITLED4_COMPLEX_H