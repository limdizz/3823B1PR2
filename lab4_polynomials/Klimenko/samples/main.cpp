#include "node.h"
#include "list.h"
#include "polynom.h"
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    Polynom poly1, poly2;

    std::cout << "Введите количество членов первого полинома: ";
    size_t n1;
    std::cin >> n1;
    for (size_t i = n1; i > 0; --i) { 
        double coeff;
        std::cout << "Введите коэффициент для x^" << (i - 1) << ": ";
        std::cin >> coeff;
        poly1.addTerm(coeff, i - 1);
    }
    poly1.print();
    std::cout << std::endl;

  
    std::cout << "Введите количество членов второго полинома: ";
    size_t n2;
    std::cin >> n2;
    for (size_t i = n2; i > 0; --i) { 
        double coeff;
        std::cout << "Введите коэффициент для x^" << (i - 1) << ": ";
        std::cin >> coeff;
        poly2.addTerm(coeff, i - 1);
    }
    poly2.print();
    std::cout << std::endl;

    Polynom sumResult = poly1 + poly2;
    Polynom subResult = poly1 - poly2;
    Polynom multResult = poly1 * poly2;

    std::cout << "Результат сложения полиномов: ";
    sumResult.print();
    std::cout << std::endl;
    std::cout << "Результат вычитания полиномов: ";
    subResult.print();
    std::cout << std::endl;
    std::cout << "Результат умножения полиномов: ";
    multResult.print();
    std::cout << std::endl;

}