
// Generated from calc.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  calcParser : public antlr4::Parser {
public:
  enum {
    INT = 1, WS = 2, NL = 3, PLUS = 4, MINUS = 5, MULT = 6, DIV = 7, POPEN = 8, 
    PCLOSE = 9, VAR = 10, POW = 11, EQ = 12, USERVAR = 13, PRINT = 14, CALCULATE = 15
  };

  enum {
    RuleInput = 0, RuleSetValueOrPrintOrCalculate = 1, RuleReadUserVar = 2, 
    RulePlusOrMinus = 3, RuleMultOrDiv = 4, RuleAtom = 5, RuleMon = 6, RuleReadVar = 7, 
    RulePow = 8, RuleInt = 9
  };

  explicit calcParser(antlr4::TokenStream *input);

  calcParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~calcParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class InputContext;
  class SetValueOrPrintOrCalculateContext;
  class ReadUserVarContext;
  class PlusOrMinusContext;
  class MultOrDivContext;
  class AtomContext;
  class MonContext;
  class ReadVarContext;
  class PowContext;
  class IntContext; 

  class  InputContext : public antlr4::ParserRuleContext {
  public:
    InputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<SetValueOrPrintOrCalculateContext *> setValueOrPrintOrCalculate();
    SetValueOrPrintOrCalculateContext* setValueOrPrintOrCalculate(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InputContext* input();

  class  SetValueOrPrintOrCalculateContext : public antlr4::ParserRuleContext {
  public:
    SetValueOrPrintOrCalculateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SetValueOrPrintOrCalculateContext() = default;
    void copyFrom(SetValueOrPrintOrCalculateContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PrintContext : public SetValueOrPrintOrCalculateContext {
  public:
    PrintContext(SetValueOrPrintOrCalculateContext *ctx);

    antlr4::tree::TerminalNode *PRINT();
    PlusOrMinusContext *plusOrMinus();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CalculateContext : public SetValueOrPrintOrCalculateContext {
  public:
    CalculateContext(SetValueOrPrintOrCalculateContext *ctx);

    antlr4::tree::TerminalNode *CALCULATE();
    PlusOrMinusContext *plusOrMinus();
    std::vector<IntContext *> int_();
    IntContext* int_(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SetValueContext : public SetValueOrPrintOrCalculateContext {
  public:
    SetValueContext(SetValueOrPrintOrCalculateContext *ctx);

    ReadUserVarContext *readUserVar();
    antlr4::tree::TerminalNode *EQ();
    PlusOrMinusContext *plusOrMinus();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  SetValueOrPrintOrCalculateContext* setValueOrPrintOrCalculate();

  class  ReadUserVarContext : public antlr4::ParserRuleContext {
  public:
    ReadUserVarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USERVAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReadUserVarContext* readUserVar();

  class  PlusOrMinusContext : public antlr4::ParserRuleContext {
  public:
    PlusOrMinusContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PlusOrMinusContext() = default;
    void copyFrom(PlusOrMinusContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ToMultOrDivContext : public PlusOrMinusContext {
  public:
    ToMultOrDivContext(PlusOrMinusContext *ctx);

    MultOrDivContext *multOrDiv();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BinaryMinusOpContext : public PlusOrMinusContext {
  public:
    BinaryMinusOpContext(PlusOrMinusContext *ctx);

    PlusOrMinusContext *plusOrMinus();
    antlr4::tree::TerminalNode *MINUS();
    MultOrDivContext *multOrDiv();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PlusOpContext : public PlusOrMinusContext {
  public:
    PlusOpContext(PlusOrMinusContext *ctx);

    PlusOrMinusContext *plusOrMinus();
    antlr4::tree::TerminalNode *PLUS();
    MultOrDivContext *multOrDiv();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  PlusOrMinusContext* plusOrMinus();
  PlusOrMinusContext* plusOrMinus(int precedence);
  class  MultOrDivContext : public antlr4::ParserRuleContext {
  public:
    MultOrDivContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    MultOrDivContext() = default;
    void copyFrom(MultOrDivContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ToAtomContext : public MultOrDivContext {
  public:
    ToAtomContext(MultOrDivContext *ctx);

    AtomContext *atom();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MultOpContext : public MultOrDivContext {
  public:
    MultOpContext(MultOrDivContext *ctx);

    MultOrDivContext *multOrDiv();
    antlr4::tree::TerminalNode *MULT();
    AtomContext *atom();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  MultOrDivContext* multOrDiv();
  MultOrDivContext* multOrDiv(int precedence);
  class  AtomContext : public antlr4::ParserRuleContext {
  public:
    AtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AtomContext() = default;
    void copyFrom(AtomContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MonomContext : public AtomContext {
  public:
    MonomContext(AtomContext *ctx);

    MonContext *mon();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ParenthesisOpContext : public AtomContext {
  public:
    ParenthesisOpContext(AtomContext *ctx);

    antlr4::tree::TerminalNode *POPEN();
    PlusOrMinusContext *plusOrMinus();
    antlr4::tree::TerminalNode *PCLOSE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  UnaryMinusOpContext : public AtomContext {
  public:
    UnaryMinusOpContext(AtomContext *ctx);

    antlr4::tree::TerminalNode *MINUS();
    PlusOrMinusContext *plusOrMinus();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  GetValueContext : public AtomContext {
  public:
    GetValueContext(AtomContext *ctx);

    ReadUserVarContext *readUserVar();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  AtomContext* atom();

  class  MonContext : public antlr4::ParserRuleContext {
  public:
    MonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    MonContext() = default;
    void copyFrom(MonContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MonomWithoutCoefficientContext : public MonContext {
  public:
    MonomWithoutCoefficientContext(MonContext *ctx);

    std::vector<PowContext *> pow();
    PowContext* pow(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  FullMonomContext : public MonContext {
  public:
    FullMonomContext(MonContext *ctx);

    IntContext *int_();
    std::vector<PowContext *> pow();
    PowContext* pow(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MonomZeroPowerContext : public MonContext {
  public:
    MonomZeroPowerContext(MonContext *ctx);

    IntContext *int_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  MonContext* mon();

  class  ReadVarContext : public antlr4::ParserRuleContext {
  public:
    ReadVarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReadVarContext* readVar();

  class  PowContext : public antlr4::ParserRuleContext {
  public:
    PowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReadVarContext *readVar();
    antlr4::tree::TerminalNode *POW();
    IntContext *int_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PowContext* pow();

  class  IntContext : public antlr4::ParserRuleContext {
  public:
    IntContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    IntContext() = default;
    void copyFrom(IntContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ConvertToIntContext : public IntContext {
  public:
    ConvertToIntContext(IntContext *ctx);

    antlr4::tree::TerminalNode *INT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  IntContext* int_();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool plusOrMinusSempred(PlusOrMinusContext *_localctx, size_t predicateIndex);
  bool multOrDivSempred(MultOrDivContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

