#pragma once
#include <iostream>
#include <map>
#include <vector>

class Polynom {
private:
    std::map<std::vector<size_t>, double> terms;

public:
    Polynom() {}

    void addTerm(double coeff, const std::vector<size_t>& degrees) {
        if (terms.find(degrees) != terms.end()) {
            terms[degrees] += coeff;
            if (std::abs(terms[degrees]) < 1e-9) {
                terms.erase(degrees);
            }
        }
        else {
            if (std::abs(coeff) > 1e-9) {
                terms[degrees] = coeff;
            }
        }
    }

    Polynom operator+(const Polynom& other) const {
        Polynom result = *this;
        for (const auto& term : other.terms) {
            result.addTerm(term.second, term.first);
        }
        return result;
    }

    Polynom operator+(double constant) const {
        Polynom result = *this;
        result.addTerm(constant, {});
        return result;
    }

    Polynom operator-(const Polynom& other) const {
        Polynom result = *this;
        for (const auto& term : other.terms) {
            result.addTerm(-term.second, term.first);
        }
        return result;
    }

    Polynom operator-(double constant) const {
        Polynom result = *this;
        result.addTerm(-constant, {});
        return result;
    }

    Polynom operator*(const Polynom& other) const {
        Polynom result;

        size_t maxVars = 0;
        if (!terms.empty()) {
            maxVars = std::max(maxVars, terms.begin()->first.size());
        }
        if (!other.terms.empty()) {
            maxVars = std::max(maxVars, other.terms.begin()->first.size());
        }

        for (const auto& term1 : terms) {
            for (const auto& term2 : other.terms) {
                std::vector<size_t> newDegrees(maxVars, 0);
                for (size_t i = 0; i < term1.first.size(); ++i) {
                    newDegrees[i] = term1.first[i];
                }
                for (size_t i = 0; i < term2.first.size(); ++i) {
                    newDegrees[i] += term2.first[i];
                }

                result.addTerm(term1.second * term2.second, newDegrees);
            }
        }
        return result;
    }

    Polynom operator*(double constant) const {
        Polynom result;
        for (const auto& term : terms) {
            result.addTerm(term.second * constant, term.first);
        }
        return result;
    }

    Polynom& operator+=(double constant) {
        this->addTerm(constant, {});
        return *this;
    }

    Polynom& operator-=(double constant) {
        this->addTerm(-constant, {});
        return *this;
    }

    Polynom& operator*=(double constant) {
        if (std::abs(constant) < 1e-9) {
            terms.clear();
        }
        else {
            for (auto& term : terms) {
                term.second *= constant;
            }
        }
        return *this;
    }

    Polynom& operator+=(const Polynom& other) {
        for (const auto& term : other.terms) {
            addTerm(term.second, term.first);
        }
        return *this;
    }

    Polynom& operator-=(const Polynom& other) {
        for (const auto& term : other.terms) {
            addTerm(-term.second, term.first);
        }
        return *this;
    }

    Polynom& operator*=(const Polynom& other) {
        Polynom result;

        size_t maxVars = 0;
        if (!terms.empty()) {
            maxVars = std::max(maxVars, terms.begin()->first.size());
        }
        if (!other.terms.empty()) {
            maxVars = std::max(maxVars, other.terms.begin()->first.size());
        }

        for (const auto& term1 : terms) {
            for (const auto& term2 : other.terms) {
                std::vector<size_t> newDegrees(maxVars, 0);
                for (size_t i = 0; i < term1.first.size(); ++i) {
                    newDegrees[i] = term1.first[i];
                }
                for (size_t i = 0; i < term2.first.size(); ++i) {
                    newDegrees[i] += term2.first[i];
                }
                result.addTerm(term1.second * term2.second, newDegrees);
            }
        }

        *this = std::move(result);
        return *this;
    }

    void print() const {
        bool first = true;
        for (const auto& term : terms) {
            if (!first) {
                std::cout << (term.second > 0 ? " + " : " - ");
            }
            else {
                if (term.second < 0) std::cout << "-";
            }
            std::cout << std::abs(term.second);

            char vars[] = { 'x', 'y', 'z' };
            for (size_t i = 0; i < term.first.size(); ++i) {
                if (term.first[i] > 0) {
                    std::cout << vars[i] << "^" << term.first[i];
                }
            }
            first = false;
        }
        if (terms.empty()) std::cout << "0";
        std::cout << std::endl;
    }

    int calculate(int x, int y, int z) const {
        int result = 0;

        for (const auto& term : terms) {
            int termValue = term.second;
            const std::vector<size_t>& degrees = term.first;

            if (degrees.size() > 0) termValue *= std::pow(x, degrees[0]);
            if (degrees.size() > 1) termValue *= std::pow(y, degrees[1]);
            if (degrees.size() > 2) termValue *= std::pow(z, degrees[2]);

            result += termValue;
        }
        return result;
    }
};
