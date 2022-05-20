#include <iostream>
#include <cmath>

class complexNumber {
    double firstImageNumber;
    double firstRealNumber;
public:
    complexNumber() {
        firstRealNumber = 1;
        firstImageNumber = 1;
    }
    complexNumber(double _firstRealNumber, double _firstImageNumber) {
        firstRealNumber = _firstRealNumber;
        firstImageNumber = _firstImageNumber;
    }
    void setValues(double image, double real) {
        firstImageNumber = image;
        firstRealNumber = real;
    }

    [[nodiscard]] double abs() const {
        return sqrt(firstRealNumber * firstRealNumber + firstImageNumber * firstImageNumber);
    }

    complexNumber operator+(const complexNumber &c) const
    {
        complexNumber temp{};

        temp.firstRealNumber = firstRealNumber + c.firstRealNumber;
        temp.firstImageNumber = firstImageNumber + c.firstImageNumber;

        return temp;
    }
    complexNumber operator - (complexNumber &c) const
    {
        complexNumber temp{};

        temp.firstRealNumber = firstRealNumber - c.firstRealNumber;
        temp.firstImageNumber = firstImageNumber - c.firstImageNumber;

        return temp;
    }
    complexNumber operator *(const complexNumber &c) const {
        complexNumber temp{};
        temp.firstRealNumber = firstRealNumber * c.firstRealNumber;
        temp.firstImageNumber = firstRealNumber * c.firstImageNumber;

        return temp;
    }
    complexNumber operator /(const complexNumber &c) const {
        complexNumber temp{};
        double r = c.firstRealNumber * c.firstRealNumber + c.firstImageNumber * c.firstImageNumber;
        temp.firstRealNumber = (firstRealNumber * c.firstRealNumber + firstImageNumber * c.firstImageNumber) / r;
        temp.firstRealNumber = (firstImageNumber * c.firstRealNumber - firstRealNumber * c.firstImageNumber) / r;
        return temp;
    }
    ~complexNumber() = default;

};

class [[maybe_unused]] Vector {
    double a1, a2, a3;

public:
    Vector() {
        a1 = 0;
        a2 = 0;
        a3 = 0;
    }
    Vector(double _a1, double _a2, double _a3, double _b1, double _b2, double _b3) {
        a1 = _a1;
        a2 = _a2;
        a3 = _a3;

    }
    ~Vector() = default;

};
class [[maybe_unused]] aCircle {
    float p = 3.14;
    double r{};
public:
    aCircle() {
        r = 0;
    }
     explicit aCircle(double _r):
        r(_r) {
         r = _r;
     }
     ~aCircle() = default;
    [[nodiscard]] double square() const {
        return p*pow(r, 2);
    }

    [[maybe_unused]] [[nodiscard]] double distance() const {
        return 2 * p * r;
    }


};



int main() {
    return 0;
};