
// Generated from calc.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  calcLexer : public antlr4::Lexer {
public:
  enum {
    INT = 1, WS = 2, NL = 3, PLUS = 4, MINUS = 5, MULT = 6, DIV = 7, POPEN = 8, 
    PCLOSE = 9, VAR = 10, POW = 11, EQ = 12, USERVAR = 13, PRINT = 14, CALCULATE = 15
  };

  explicit calcLexer(antlr4::CharStream *input);

  ~calcLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

