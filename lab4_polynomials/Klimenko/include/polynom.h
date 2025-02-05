#pragma once
#include "list.h"
#include <iostream>

class Polynom {
private:
    List<double> coefficients; 

public:
    Polynom() {}

    void addTerm(double coeff, size_t degree) {
        while (degree >= coefficients.getSize()) {
            coefficients.insert(0.0, coefficients.getSize()); 
        }
        coefficients[degree] += coeff;
    }

    Polynom operator+(const Polynom& other) const {
        Polynom result;
        size_t maxSize = std::max(coefficients.getSize(), other.coefficients.getSize());

        for (size_t i = 0; i < maxSize; ++i) {
            double coeff1 = (i < coefficients.getSize()) ? coefficients.valueSearch(i) : 0;
            double coeff2 = (i < other.coefficients.getSize()) ? other.coefficients.valueSearch(i) : 0;
            result.addTerm(coeff1 + coeff2, i);
        }
        return result;
    }

    Polynom operator-(const Polynom& other) const {
        Polynom result;
        size_t maxSize = std::max(coefficients.getSize(), other.coefficients.getSize());

        for (size_t i = 0; i < maxSize; ++i) {
            double coeff1 = (i < coefficients.getSize()) ? coefficients.valueSearch(i) : 0;
            double coeff2 = (i < other.coefficients.getSize()) ? other.coefficients.valueSearch(i) : 0;
            result.addTerm(coeff1 - coeff2, i);
        }
        return result;
    }

    Polynom operator*(const Polynom& other) const {
        Polynom result;
        for (size_t i = 0; i < coefficients.getSize(); ++i) {
            for (size_t j = 0; j < other.coefficients.getSize(); ++j) {
                result.addTerm(coefficients.valueSearch(i) * other.coefficients.valueSearch(j), i + j);
            }
        }
        return result;
    }

    void print() const {
        bool f = true;
        for (size_t i = coefficients.getSize(); i > 0; --i) {
            size_t degree = i - 1;
            double coeff = coefficients.valueSearch(degree);
        
            if (coeff != 0) {
                if (!f) {
                    std::cout << (coeff > 0 ? " + " : " - ");
                } else {
                    if (coeff < 0) {
                        std::cout << "-";
                    }
                }
                std::cout << std::abs(coeff);
                if (degree > 0) {
                    std::cout << "x^" << degree;
                }
                f = false;
            }
        }
        if (f) std::cout << "0"; // Если полином равен нулю
    }

};
