#include "polynom.h"
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    Polynom poly1, poly2;
    size_t coeff, xdeg, ydeg, zdeg;

    std::cout << "Enter a coefficient of the first polynom: ";
    std::cin >> coeff;
    std::cout << "Enter an x degree (you can also enter 0): ";
    std::cin >> xdeg;
    std::cout << "Enter an y degree (you can also enter 0): ";
    std::cin >> ydeg;
    std::cout << "Enter an z degree (you can also enter 0): ";
    std::cin >> zdeg;
    poly1.addTerm(coeff, { xdeg, ydeg, zdeg });
    poly1.print();
    std::cout << std::endl;

    std::cout << "Enter a coefficient of the second polynom: ";
    std::cin >> coeff;
    std::cout << "Enter an x degree (you can also enter 0): ";
    std::cin >> xdeg;
    std::cout << "Enter an y degree (you can also enter 0): ";
    std::cin >> ydeg;
    std::cout << "Enter an z degree (you can also enter 0): ";
    std::cin >> zdeg;

    poly2.addTerm(coeff, { xdeg, ydeg, zdeg });
    poly2.print();
    std::cout << std::endl;

    Polynom sumResult = poly1 + poly2;
    Polynom subResult = poly1 - poly2;
    Polynom multResult = poly1 * poly2;

    std::cout << "Sum result: ";
    sumResult.print();
    std::cout << std::endl;
    std::cout << "Subtraction result: ";
    subResult.print();
    std::cout << std::endl;
    std::cout << "Multiplication result: ";
    multResult.print();
    std::cout << std::endl;
}
