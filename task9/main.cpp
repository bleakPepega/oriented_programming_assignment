// option 2
#include <iostream>
class Property {
public:
    double worth;
    explicit Property(double _worth): worth(_worth) {
    }

};


class Apartment: public Property {
public:
    explicit Apartment(double worth);
};

Apartment::Apartment(double worth) : Property(worth) {
    std::cout << worth / 1000 << std::endl;

}



class Car: public Property {
public:
    explicit Car(double worth);
};

Car::Car(double worth) : Property(worth) {
    std::cout << worth / 1200 << std::endl;
}
class CountryHouse: public Property{
public:
    explicit CountryHouse(double worth);
};

CountryHouse::CountryHouse(double worth) : Property(worth) {
    std::cout << worth / 1500  << std::endl;
}

int main() {
    Property* objects[7]; //массив указателей на объекты
    for (int i = 1 ; i < 8; i += 1)
    {
        if (i < 3) objects[i]=new Apartment(i * 10000);   //создаем динамически объекты и присваиваем значения
        if (i < 5) objects[i]=new Car(i * 10000);
        if (i < 7) objects[i]=new CountryHouse(i * 10000);
    }    return 0;
}
