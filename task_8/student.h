//
// Created by sad on 20.04.22.
//
#include <utility>

#include "iostream"
#ifndef NUMBER8_STUDENT_H
#define NUMBER8_STUDENT_H
class student {
    int age{};
    std::string fio;
    std::string code;
public:
    student();

    student(int _age, std::string _fio, std::string _code);



};

student::student(int _age, std::string _fio, std::string _code) {
    age = _age;
    fio = std::move(_fio);
    code = std::move(_code);
}

student::student() = default;

std::ostream& operator<<(std::ostream& stream, const student& obj) {
    return stream << "age: "<< obj.age << " .fio: " << obj.fio  << "" << " .code: " << obj.code;
}
std::istream& operator>> (std::istream &in, student &point)
{
    std::cout << "enter age, fio and code" << std::endl;
    in >> point.age;
    in >> point.fio;
    in >> point.code;

    return in;
}

#endif //NUMBER8_STUDENT_H
