#pragma once
#include <iostream>
#include "calcBaseListener.h"
#include "calcParser.h"
#include "calcLexer.h"
#include "polynom.h"
#include <stack>
#include <map>

using namespace std;

class CalculatorInterpreter : public calcBaseListener {
    map<string, Polynom> parameters;
    stack<int> integerStack;
    stack<Polynom> polynomialStack;
    stack<string> varStack;
    stack<string> monomVariables;

    int xDegree;
    int yDegree;
    int zDegree;
public:
    CalculatorInterpreter() {
        xDegree = 0;
        yDegree = 0;
        zDegree = 0;
    }

    void exitPlusOp(calcParser::PlusOpContext* ctx) override {
        if (polynomialStack.size() < 2) return;
        Polynom r = move(polynomialStack.top()); polynomialStack.pop();
        Polynom l = move(polynomialStack.top()); polynomialStack.pop();
        polynomialStack.push(move(l + r));
    }

    void exitBinaryMinusOp(calcParser::BinaryMinusOpContext* ctx) override {
        if (polynomialStack.size() < 2) return;
        Polynom r = move(polynomialStack.top()); polynomialStack.pop();
        Polynom l = move(polynomialStack.top()); polynomialStack.pop();
        polynomialStack.push(move(l - r));
    }

    void exitUnaryMinusOp(calcParser::UnaryMinusOpContext* ctx) override {
        if (polynomialStack.empty()) return;
        polynomialStack.top() = move(polynomialStack.top() * (-1));
    }

    void exitMultOp(calcParser::MultOpContext* ctx) override {
        if (polynomialStack.size() < 2) return;
        Polynom r = move(polynomialStack.top()); polynomialStack.pop();
        Polynom l = move(polynomialStack.top()); polynomialStack.pop();
        polynomialStack.push(move(l * r));
    }

    void exitSetValue(calcParser::SetValueContext* ctx) override {
        if (polynomialStack.empty() || varStack.empty()) return;
        Polynom cur = move(polynomialStack.top());
        string varName = move(varStack.top());
        parameters[varName] = move(cur);
        polynomialStack.pop();
        varStack.pop();
    }

    void exitGetValue(calcParser::GetValueContext* ctx) override {
        if (varStack.empty()) return;
        string varName = move(varStack.top());
        varStack.pop();
        try {
            Polynom cur = parameters.at(varName);
            polynomialStack.push(move(cur));
        }
        catch (const out_of_range&) {
            string message = varName + " not found";
            throw out_of_range(message);
        }
    }

    void exitConvertToInt(calcParser::ConvertToIntContext* ctx) override {
        integerStack.push(stoi(ctx->getText()));
    }

    void exitReadUserVar(calcParser::ReadUserVarContext* ctx) override {
        varStack.push(ctx->getText());
    }

    void exitPrint(calcParser::PrintContext* ctx) override {
        if (polynomialStack.empty()) return;
        polynomialStack.top().print();
        cout << endl;
        polynomialStack.pop();
    }

    void exitReadVar(calcParser::ReadVarContext* ctx) override {
        monomVariables.push(ctx->getText());
    }

    void exitPow(calcParser::PowContext* ctx) override {
        if (integerStack.empty() || monomVariables.empty()) return;
        int pow = integerStack.top();
        string var = monomVariables.top();

        if (pow < 0) {
            throw runtime_error("Negative exponents are not supported");
        }

        size_t degree = static_cast<size_t>(pow);

        if (var == "x") {
            xDegree += degree;
        }
        else if (var == "y") {
            yDegree += degree;
        }
        else if (var == "z") {
            zDegree += degree;
        }

        integerStack.pop();
        monomVariables.pop();
    }

    void enterMonom(calcParser::MonomContext* ctx) override {
        xDegree = yDegree = zDegree = 0;
    }

    void exitFullMonom(calcParser::FullMonomContext* ctx) override {
        if (integerStack.empty()) return;
        double coeff = static_cast<double>(integerStack.top());
        integerStack.pop();

        // Create degrees vector for x, y, z
        vector<size_t> degrees;
        degrees.push_back(xDegree);
        degrees.push_back(yDegree);
        degrees.push_back(zDegree);

        Polynom polynom;
        polynom.addTerm(coeff, degrees);
        polynomialStack.push(move(polynom));
    }

    void exitMonomZeroPower(calcParser::MonomZeroPowerContext* ctx) override {
        if (integerStack.empty()) return;
        double coeff = static_cast<double>(integerStack.top());
        integerStack.pop();
        Polynom polynom;
        polynom.addTerm(coeff, { 0, 0, 0 });
        polynomialStack.push(move(polynom));
    }

    void exitMonomWithoutCoefficient(calcParser::MonomWithoutCoefficientContext* ctx) override {
        vector<size_t> degrees;
        degrees.push_back(xDegree);
        degrees.push_back(yDegree);
        degrees.push_back(zDegree);

        Polynom polynom;
        polynom.addTerm(1.0, degrees);
        polynomialStack.push(move(polynom));
    }

    void exitCalculate(calcParser::CalculateContext* ctx) override {
        if (integerStack.size() < 3 || polynomialStack.empty()) return;
        int zPoint = integerStack.top(); integerStack.pop();
        int yPoint = integerStack.top(); integerStack.pop();
        int xPoint = integerStack.top(); integerStack.pop();
        Polynom cur = move(polynomialStack.top()); polynomialStack.pop();
        int result = cur.calculate(xPoint, yPoint, zPoint);
        cout << "Value in (" << xPoint << ", " << yPoint << ", " << zPoint << "): " << result << endl;
    }
};