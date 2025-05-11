#include <iostream>
#include <fstream>
#include <sstream>
#include "antlr4-runtime.h"
#include "calcParser.h"
#include "calcLexer.h"
#include <string>
#include "CalculatorInterpeter.h"
#include "tree/IterativeParseTreeWalker.h"

using namespace antlr4;

void calculateExpression(const std::string& expr) {
    antlr4::ANTLRInputStream input(expr);
    calcLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    calcParser parser(&tokens);
    antlr4::tree::ParseTree* tree = nullptr;

    try {
        tree = parser.input();
    }
    catch (antlr4::ParseCancellationException& e) {
        std::cerr << e.what() << std::endl;
        exit(EXIT_FAILURE);
    }

    CalculatorInterpreter interpreter;
    antlr4::tree::IterativeParseTreeWalker walker;
    walker.walk(&interpreter, tree);
}

int main(int argc, char* argv[]) {
    std::ifstream stream;
    if (argc == 1) {
        std::cout << "input_file.txt" << std::endl << std::endl;
        stream.open("../../../input_file.txt");
    }
    else if (argc == 2) {
        std::cout << argv[1] << std::endl;
        stream.open(argv[1]);
    }
    else {
        throw std::invalid_argument("Invalid number of arguments");
    }

    if (!stream.is_open()) {
        std::cerr << "Failed to open the file." << std::endl;
        return EXIT_FAILURE;
    }

    std::string str((std::istreambuf_iterator<char>(stream)), std::istreambuf_iterator<char>());
    std::cout << str << std::endl;

    calculateExpression(str);

    return 0;
}
