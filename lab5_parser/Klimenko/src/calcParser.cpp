
// Generated from calc.g4 by ANTLR 4.13.2


#include "calcListener.h"

#include "calcParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CalcParserStaticData final {
  CalcParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CalcParserStaticData(const CalcParserStaticData&) = delete;
  CalcParserStaticData(CalcParserStaticData&&) = delete;
  CalcParserStaticData& operator=(const CalcParserStaticData&) = delete;
  CalcParserStaticData& operator=(CalcParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag calcParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<CalcParserStaticData> calcParserStaticData = nullptr;

void calcParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (calcParserStaticData != nullptr) {
    return;
  }
#else
  assert(calcParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CalcParserStaticData>(
    std::vector<std::string>{
      "input", "setValueOrPrintOrCalculate", "readUserVar", "plusOrMinus", 
      "multOrDiv", "atom", "mon", "readVar", "pow", "int"
    },
    std::vector<std::string>{
      "", "", "", "'\\n'", "'+'", "'-'", "'*'", "'/'", "'('", "')'", "", 
      "'^'", "'='", "", "'print'", "'calculate'"
    },
    std::vector<std::string>{
      "", "INT", "WS", "NL", "PLUS", "MINUS", "MULT", "DIV", "POPEN", "PCLOSE", 
      "VAR", "POW", "EQ", "USERVAR", "PRINT", "CALCULATE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,15,104,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,1,0,1,0,3,0,23,8,0,4,0,25,8,0,11,0,12,0,26,1,0,
  	1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,43,8,1,1,2,1,
  	2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,56,8,3,10,3,12,3,59,9,3,1,4,
  	1,4,1,4,1,4,1,4,1,4,5,4,67,8,4,10,4,12,4,70,9,4,1,5,1,5,1,5,1,5,1,5,1,
  	5,1,5,1,5,3,5,80,8,5,1,6,1,6,4,6,84,8,6,11,6,12,6,85,1,6,1,6,4,6,90,8,
  	6,11,6,12,6,91,3,6,94,8,6,1,7,1,7,1,8,1,8,1,8,1,8,1,9,1,9,1,9,0,2,6,8,
  	10,0,2,4,6,8,10,12,14,16,18,0,0,107,0,24,1,0,0,0,2,42,1,0,0,0,4,44,1,
  	0,0,0,6,46,1,0,0,0,8,60,1,0,0,0,10,79,1,0,0,0,12,93,1,0,0,0,14,95,1,0,
  	0,0,16,97,1,0,0,0,18,101,1,0,0,0,20,22,3,2,1,0,21,23,5,3,0,0,22,21,1,
  	0,0,0,22,23,1,0,0,0,23,25,1,0,0,0,24,20,1,0,0,0,25,26,1,0,0,0,26,24,1,
  	0,0,0,26,27,1,0,0,0,27,28,1,0,0,0,28,29,5,0,0,1,29,1,1,0,0,0,30,31,3,
  	4,2,0,31,32,5,12,0,0,32,33,3,6,3,0,33,43,1,0,0,0,34,35,5,14,0,0,35,43,
  	3,6,3,0,36,37,5,15,0,0,37,38,3,6,3,0,38,39,3,18,9,0,39,40,3,18,9,0,40,
  	41,3,18,9,0,41,43,1,0,0,0,42,30,1,0,0,0,42,34,1,0,0,0,42,36,1,0,0,0,43,
  	3,1,0,0,0,44,45,5,13,0,0,45,5,1,0,0,0,46,47,6,3,-1,0,47,48,3,8,4,0,48,
  	57,1,0,0,0,49,50,10,3,0,0,50,51,5,4,0,0,51,56,3,8,4,0,52,53,10,2,0,0,
  	53,54,5,5,0,0,54,56,3,8,4,0,55,49,1,0,0,0,55,52,1,0,0,0,56,59,1,0,0,0,
  	57,55,1,0,0,0,57,58,1,0,0,0,58,7,1,0,0,0,59,57,1,0,0,0,60,61,6,4,-1,0,
  	61,62,3,10,5,0,62,68,1,0,0,0,63,64,10,2,0,0,64,65,5,6,0,0,65,67,3,10,
  	5,0,66,63,1,0,0,0,67,70,1,0,0,0,68,66,1,0,0,0,68,69,1,0,0,0,69,9,1,0,
  	0,0,70,68,1,0,0,0,71,72,5,5,0,0,72,80,3,6,3,0,73,74,5,8,0,0,74,75,3,6,
  	3,0,75,76,5,9,0,0,76,80,1,0,0,0,77,80,3,12,6,0,78,80,3,4,2,0,79,71,1,
  	0,0,0,79,73,1,0,0,0,79,77,1,0,0,0,79,78,1,0,0,0,80,11,1,0,0,0,81,83,3,
  	18,9,0,82,84,3,16,8,0,83,82,1,0,0,0,84,85,1,0,0,0,85,83,1,0,0,0,85,86,
  	1,0,0,0,86,94,1,0,0,0,87,94,3,18,9,0,88,90,3,16,8,0,89,88,1,0,0,0,90,
  	91,1,0,0,0,91,89,1,0,0,0,91,92,1,0,0,0,92,94,1,0,0,0,93,81,1,0,0,0,93,
  	87,1,0,0,0,93,89,1,0,0,0,94,13,1,0,0,0,95,96,5,10,0,0,96,15,1,0,0,0,97,
  	98,3,14,7,0,98,99,5,11,0,0,99,100,3,18,9,0,100,17,1,0,0,0,101,102,5,1,
  	0,0,102,19,1,0,0,0,10,22,26,42,55,57,68,79,85,91,93
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  calcParserStaticData = std::move(staticData);
}

}

calcParser::calcParser(TokenStream *input) : calcParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

calcParser::calcParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  calcParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *calcParserStaticData->atn, calcParserStaticData->decisionToDFA, calcParserStaticData->sharedContextCache, options);
}

calcParser::~calcParser() {
  delete _interpreter;
}

const atn::ATN& calcParser::getATN() const {
  return *calcParserStaticData->atn;
}

std::string calcParser::getGrammarFileName() const {
  return "calc.g4";
}

const std::vector<std::string>& calcParser::getRuleNames() const {
  return calcParserStaticData->ruleNames;
}

const dfa::Vocabulary& calcParser::getVocabulary() const {
  return calcParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView calcParser::getSerializedATN() const {
  return calcParserStaticData->serializedATN;
}


//----------------- InputContext ------------------------------------------------------------------

calcParser::InputContext::InputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* calcParser::InputContext::EOF() {
  return getToken(calcParser::EOF, 0);
}

std::vector<calcParser::SetValueOrPrintOrCalculateContext *> calcParser::InputContext::setValueOrPrintOrCalculate() {
  return getRuleContexts<calcParser::SetValueOrPrintOrCalculateContext>();
}

calcParser::SetValueOrPrintOrCalculateContext* calcParser::InputContext::setValueOrPrintOrCalculate(size_t i) {
  return getRuleContext<calcParser::SetValueOrPrintOrCalculateContext>(i);
}

std::vector<tree::TerminalNode *> calcParser::InputContext::NL() {
  return getTokens(calcParser::NL);
}

tree::TerminalNode* calcParser::InputContext::NL(size_t i) {
  return getToken(calcParser::NL, i);
}


size_t calcParser::InputContext::getRuleIndex() const {
  return calcParser::RuleInput;
}

void calcParser::InputContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInput(this);
}

void calcParser::InputContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInput(this);
}

calcParser::InputContext* calcParser::input() {
  InputContext *_localctx = _tracker.createInstance<InputContext>(_ctx, getState());
  enterRule(_localctx, 0, calcParser::RuleInput);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(24); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(20);
      setValueOrPrintOrCalculate();

      setState(22);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == calcParser::NL) {
        setState(21);
        match(calcParser::NL);
      }
      setState(26); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 57344) != 0));
    setState(28);
    match(calcParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SetValueOrPrintOrCalculateContext ------------------------------------------------------------------

calcParser::SetValueOrPrintOrCalculateContext::SetValueOrPrintOrCalculateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t calcParser::SetValueOrPrintOrCalculateContext::getRuleIndex() const {
  return calcParser::RuleSetValueOrPrintOrCalculate;
}

void calcParser::SetValueOrPrintOrCalculateContext::copyFrom(SetValueOrPrintOrCalculateContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PrintContext ------------------------------------------------------------------

tree::TerminalNode* calcParser::PrintContext::PRINT() {
  return getToken(calcParser::PRINT, 0);
}

calcParser::PlusOrMinusContext* calcParser::PrintContext::plusOrMinus() {
  return getRuleContext<calcParser::PlusOrMinusContext>(0);
}

calcParser::PrintContext::PrintContext(SetValueOrPrintOrCalculateContext *ctx) { copyFrom(ctx); }

void calcParser::PrintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint(this);
}
void calcParser::PrintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint(this);
}
//----------------- CalculateContext ------------------------------------------------------------------

tree::TerminalNode* calcParser::CalculateContext::CALCULATE() {
  return getToken(calcParser::CALCULATE, 0);
}

calcParser::PlusOrMinusContext* calcParser::CalculateContext::plusOrMinus() {
  return getRuleContext<calcParser::PlusOrMinusContext>(0);
}

std::vector<calcParser::IntContext *> calcParser::CalculateContext::int_() {
  return getRuleContexts<calcParser::IntContext>();
}

calcParser::IntContext* calcParser::CalculateContext::int_(size_t i) {
  return getRuleContext<calcParser::IntContext>(i);
}

calcParser::CalculateContext::CalculateContext(SetValueOrPrintOrCalculateContext *ctx) { copyFrom(ctx); }

void calcParser::CalculateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCalculate(this);
}
void calcParser::CalculateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCalculate(this);
}
//----------------- SetValueContext ------------------------------------------------------------------

calcParser::ReadUserVarContext* calcParser::SetValueContext::readUserVar() {
  return getRuleContext<calcParser::ReadUserVarContext>(0);
}

tree::TerminalNode* calcParser::SetValueContext::EQ() {
  return getToken(calcParser::EQ, 0);
}

calcParser::PlusOrMinusContext* calcParser::SetValueContext::plusOrMinus() {
  return getRuleContext<calcParser::PlusOrMinusContext>(0);
}

calcParser::SetValueContext::SetValueContext(SetValueOrPrintOrCalculateContext *ctx) { copyFrom(ctx); }

void calcParser::SetValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetValue(this);
}
void calcParser::SetValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetValue(this);
}
calcParser::SetValueOrPrintOrCalculateContext* calcParser::setValueOrPrintOrCalculate() {
  SetValueOrPrintOrCalculateContext *_localctx = _tracker.createInstance<SetValueOrPrintOrCalculateContext>(_ctx, getState());
  enterRule(_localctx, 2, calcParser::RuleSetValueOrPrintOrCalculate);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(42);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case calcParser::USERVAR: {
        _localctx = _tracker.createInstance<calcParser::SetValueContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(30);
        readUserVar();
        setState(31);
        match(calcParser::EQ);
        setState(32);
        plusOrMinus(0);
        break;
      }

      case calcParser::PRINT: {
        _localctx = _tracker.createInstance<calcParser::PrintContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(34);
        match(calcParser::PRINT);
        setState(35);
        plusOrMinus(0);
        break;
      }

      case calcParser::CALCULATE: {
        _localctx = _tracker.createInstance<calcParser::CalculateContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(36);
        match(calcParser::CALCULATE);
        setState(37);
        plusOrMinus(0);
        setState(38);
        int_();
        setState(39);
        int_();
        setState(40);
        int_();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReadUserVarContext ------------------------------------------------------------------

calcParser::ReadUserVarContext::ReadUserVarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* calcParser::ReadUserVarContext::USERVAR() {
  return getToken(calcParser::USERVAR, 0);
}


size_t calcParser::ReadUserVarContext::getRuleIndex() const {
  return calcParser::RuleReadUserVar;
}

void calcParser::ReadUserVarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReadUserVar(this);
}

void calcParser::ReadUserVarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReadUserVar(this);
}

calcParser::ReadUserVarContext* calcParser::readUserVar() {
  ReadUserVarContext *_localctx = _tracker.createInstance<ReadUserVarContext>(_ctx, getState());
  enterRule(_localctx, 4, calcParser::RuleReadUserVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    match(calcParser::USERVAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlusOrMinusContext ------------------------------------------------------------------

calcParser::PlusOrMinusContext::PlusOrMinusContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t calcParser::PlusOrMinusContext::getRuleIndex() const {
  return calcParser::RulePlusOrMinus;
}

void calcParser::PlusOrMinusContext::copyFrom(PlusOrMinusContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ToMultOrDivContext ------------------------------------------------------------------

calcParser::MultOrDivContext* calcParser::ToMultOrDivContext::multOrDiv() {
  return getRuleContext<calcParser::MultOrDivContext>(0);
}

calcParser::ToMultOrDivContext::ToMultOrDivContext(PlusOrMinusContext *ctx) { copyFrom(ctx); }

void calcParser::ToMultOrDivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToMultOrDiv(this);
}
void calcParser::ToMultOrDivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToMultOrDiv(this);
}
//----------------- BinaryMinusOpContext ------------------------------------------------------------------

calcParser::PlusOrMinusContext* calcParser::BinaryMinusOpContext::plusOrMinus() {
  return getRuleContext<calcParser::PlusOrMinusContext>(0);
}

tree::TerminalNode* calcParser::BinaryMinusOpContext::MINUS() {
  return getToken(calcParser::MINUS, 0);
}

calcParser::MultOrDivContext* calcParser::BinaryMinusOpContext::multOrDiv() {
  return getRuleContext<calcParser::MultOrDivContext>(0);
}

calcParser::BinaryMinusOpContext::BinaryMinusOpContext(PlusOrMinusContext *ctx) { copyFrom(ctx); }

void calcParser::BinaryMinusOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryMinusOp(this);
}
void calcParser::BinaryMinusOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryMinusOp(this);
}
//----------------- PlusOpContext ------------------------------------------------------------------

calcParser::PlusOrMinusContext* calcParser::PlusOpContext::plusOrMinus() {
  return getRuleContext<calcParser::PlusOrMinusContext>(0);
}

tree::TerminalNode* calcParser::PlusOpContext::PLUS() {
  return getToken(calcParser::PLUS, 0);
}

calcParser::MultOrDivContext* calcParser::PlusOpContext::multOrDiv() {
  return getRuleContext<calcParser::MultOrDivContext>(0);
}

calcParser::PlusOpContext::PlusOpContext(PlusOrMinusContext *ctx) { copyFrom(ctx); }

void calcParser::PlusOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlusOp(this);
}
void calcParser::PlusOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlusOp(this);
}

calcParser::PlusOrMinusContext* calcParser::plusOrMinus() {
   return plusOrMinus(0);
}

calcParser::PlusOrMinusContext* calcParser::plusOrMinus(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  calcParser::PlusOrMinusContext *_localctx = _tracker.createInstance<PlusOrMinusContext>(_ctx, parentState);
  calcParser::PlusOrMinusContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, calcParser::RulePlusOrMinus, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<ToMultOrDivContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(47);
    multOrDiv(0);
    _ctx->stop = _input->LT(-1);
    setState(57);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(55);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PlusOpContext>(_tracker.createInstance<PlusOrMinusContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePlusOrMinus);
          setState(49);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(50);
          match(calcParser::PLUS);
          setState(51);
          multOrDiv(0);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<BinaryMinusOpContext>(_tracker.createInstance<PlusOrMinusContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePlusOrMinus);
          setState(52);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(53);
          match(calcParser::MINUS);
          setState(54);
          multOrDiv(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(59);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MultOrDivContext ------------------------------------------------------------------

calcParser::MultOrDivContext::MultOrDivContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t calcParser::MultOrDivContext::getRuleIndex() const {
  return calcParser::RuleMultOrDiv;
}

void calcParser::MultOrDivContext::copyFrom(MultOrDivContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ToAtomContext ------------------------------------------------------------------

calcParser::AtomContext* calcParser::ToAtomContext::atom() {
  return getRuleContext<calcParser::AtomContext>(0);
}

calcParser::ToAtomContext::ToAtomContext(MultOrDivContext *ctx) { copyFrom(ctx); }

void calcParser::ToAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToAtom(this);
}
void calcParser::ToAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToAtom(this);
}
//----------------- MultOpContext ------------------------------------------------------------------

calcParser::MultOrDivContext* calcParser::MultOpContext::multOrDiv() {
  return getRuleContext<calcParser::MultOrDivContext>(0);
}

tree::TerminalNode* calcParser::MultOpContext::MULT() {
  return getToken(calcParser::MULT, 0);
}

calcParser::AtomContext* calcParser::MultOpContext::atom() {
  return getRuleContext<calcParser::AtomContext>(0);
}

calcParser::MultOpContext::MultOpContext(MultOrDivContext *ctx) { copyFrom(ctx); }

void calcParser::MultOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultOp(this);
}
void calcParser::MultOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultOp(this);
}

calcParser::MultOrDivContext* calcParser::multOrDiv() {
   return multOrDiv(0);
}

calcParser::MultOrDivContext* calcParser::multOrDiv(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  calcParser::MultOrDivContext *_localctx = _tracker.createInstance<MultOrDivContext>(_ctx, parentState);
  calcParser::MultOrDivContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 8;
  enterRecursionRule(_localctx, 8, calcParser::RuleMultOrDiv, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<ToAtomContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(61);
    atom();
    _ctx->stop = _input->LT(-1);
    setState(68);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<MultOpContext>(_tracker.createInstance<MultOrDivContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleMultOrDiv);
        setState(63);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(64);
        match(calcParser::MULT);
        setState(65);
        atom(); 
      }
      setState(70);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

calcParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t calcParser::AtomContext::getRuleIndex() const {
  return calcParser::RuleAtom;
}

void calcParser::AtomContext::copyFrom(AtomContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MonomContext ------------------------------------------------------------------

calcParser::MonContext* calcParser::MonomContext::mon() {
  return getRuleContext<calcParser::MonContext>(0);
}

calcParser::MonomContext::MonomContext(AtomContext *ctx) { copyFrom(ctx); }

void calcParser::MonomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMonom(this);
}
void calcParser::MonomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMonom(this);
}
//----------------- ParenthesisOpContext ------------------------------------------------------------------

tree::TerminalNode* calcParser::ParenthesisOpContext::POPEN() {
  return getToken(calcParser::POPEN, 0);
}

calcParser::PlusOrMinusContext* calcParser::ParenthesisOpContext::plusOrMinus() {
  return getRuleContext<calcParser::PlusOrMinusContext>(0);
}

tree::TerminalNode* calcParser::ParenthesisOpContext::PCLOSE() {
  return getToken(calcParser::PCLOSE, 0);
}

calcParser::ParenthesisOpContext::ParenthesisOpContext(AtomContext *ctx) { copyFrom(ctx); }

void calcParser::ParenthesisOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesisOp(this);
}
void calcParser::ParenthesisOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesisOp(this);
}
//----------------- UnaryMinusOpContext ------------------------------------------------------------------

tree::TerminalNode* calcParser::UnaryMinusOpContext::MINUS() {
  return getToken(calcParser::MINUS, 0);
}

calcParser::PlusOrMinusContext* calcParser::UnaryMinusOpContext::plusOrMinus() {
  return getRuleContext<calcParser::PlusOrMinusContext>(0);
}

calcParser::UnaryMinusOpContext::UnaryMinusOpContext(AtomContext *ctx) { copyFrom(ctx); }

void calcParser::UnaryMinusOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryMinusOp(this);
}
void calcParser::UnaryMinusOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryMinusOp(this);
}
//----------------- GetValueContext ------------------------------------------------------------------

calcParser::ReadUserVarContext* calcParser::GetValueContext::readUserVar() {
  return getRuleContext<calcParser::ReadUserVarContext>(0);
}

calcParser::GetValueContext::GetValueContext(AtomContext *ctx) { copyFrom(ctx); }

void calcParser::GetValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGetValue(this);
}
void calcParser::GetValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGetValue(this);
}
calcParser::AtomContext* calcParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 10, calcParser::RuleAtom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(79);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case calcParser::MINUS: {
        _localctx = _tracker.createInstance<calcParser::UnaryMinusOpContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(71);
        match(calcParser::MINUS);
        setState(72);
        plusOrMinus(0);
        break;
      }

      case calcParser::POPEN: {
        _localctx = _tracker.createInstance<calcParser::ParenthesisOpContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(73);
        match(calcParser::POPEN);
        setState(74);
        plusOrMinus(0);
        setState(75);
        match(calcParser::PCLOSE);
        break;
      }

      case calcParser::INT:
      case calcParser::VAR: {
        _localctx = _tracker.createInstance<calcParser::MonomContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(77);
        mon();
        break;
      }

      case calcParser::USERVAR: {
        _localctx = _tracker.createInstance<calcParser::GetValueContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(78);
        readUserVar();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MonContext ------------------------------------------------------------------

calcParser::MonContext::MonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t calcParser::MonContext::getRuleIndex() const {
  return calcParser::RuleMon;
}

void calcParser::MonContext::copyFrom(MonContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MonomWithoutCoefficientContext ------------------------------------------------------------------

std::vector<calcParser::PowContext *> calcParser::MonomWithoutCoefficientContext::pow() {
  return getRuleContexts<calcParser::PowContext>();
}

calcParser::PowContext* calcParser::MonomWithoutCoefficientContext::pow(size_t i) {
  return getRuleContext<calcParser::PowContext>(i);
}

calcParser::MonomWithoutCoefficientContext::MonomWithoutCoefficientContext(MonContext *ctx) { copyFrom(ctx); }

void calcParser::MonomWithoutCoefficientContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMonomWithoutCoefficient(this);
}
void calcParser::MonomWithoutCoefficientContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMonomWithoutCoefficient(this);
}
//----------------- FullMonomContext ------------------------------------------------------------------

calcParser::IntContext* calcParser::FullMonomContext::int_() {
  return getRuleContext<calcParser::IntContext>(0);
}

std::vector<calcParser::PowContext *> calcParser::FullMonomContext::pow() {
  return getRuleContexts<calcParser::PowContext>();
}

calcParser::PowContext* calcParser::FullMonomContext::pow(size_t i) {
  return getRuleContext<calcParser::PowContext>(i);
}

calcParser::FullMonomContext::FullMonomContext(MonContext *ctx) { copyFrom(ctx); }

void calcParser::FullMonomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFullMonom(this);
}
void calcParser::FullMonomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFullMonom(this);
}
//----------------- MonomZeroPowerContext ------------------------------------------------------------------

calcParser::IntContext* calcParser::MonomZeroPowerContext::int_() {
  return getRuleContext<calcParser::IntContext>(0);
}

calcParser::MonomZeroPowerContext::MonomZeroPowerContext(MonContext *ctx) { copyFrom(ctx); }

void calcParser::MonomZeroPowerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMonomZeroPower(this);
}
void calcParser::MonomZeroPowerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMonomZeroPower(this);
}
calcParser::MonContext* calcParser::mon() {
  MonContext *_localctx = _tracker.createInstance<MonContext>(_ctx, getState());
  enterRule(_localctx, 12, calcParser::RuleMon);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(93);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<calcParser::FullMonomContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(81);
      int_();
      setState(83); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(82);
                pow();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(85); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<calcParser::MonomZeroPowerContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(87);
      int_();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<calcParser::MonomWithoutCoefficientContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(89); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(88);
                pow();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(91); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReadVarContext ------------------------------------------------------------------

calcParser::ReadVarContext::ReadVarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* calcParser::ReadVarContext::VAR() {
  return getToken(calcParser::VAR, 0);
}


size_t calcParser::ReadVarContext::getRuleIndex() const {
  return calcParser::RuleReadVar;
}

void calcParser::ReadVarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReadVar(this);
}

void calcParser::ReadVarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReadVar(this);
}

calcParser::ReadVarContext* calcParser::readVar() {
  ReadVarContext *_localctx = _tracker.createInstance<ReadVarContext>(_ctx, getState());
  enterRule(_localctx, 14, calcParser::RuleReadVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    match(calcParser::VAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PowContext ------------------------------------------------------------------

calcParser::PowContext::PowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

calcParser::ReadVarContext* calcParser::PowContext::readVar() {
  return getRuleContext<calcParser::ReadVarContext>(0);
}

tree::TerminalNode* calcParser::PowContext::POW() {
  return getToken(calcParser::POW, 0);
}

calcParser::IntContext* calcParser::PowContext::int_() {
  return getRuleContext<calcParser::IntContext>(0);
}


size_t calcParser::PowContext::getRuleIndex() const {
  return calcParser::RulePow;
}

void calcParser::PowContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPow(this);
}

void calcParser::PowContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPow(this);
}

calcParser::PowContext* calcParser::pow() {
  PowContext *_localctx = _tracker.createInstance<PowContext>(_ctx, getState());
  enterRule(_localctx, 16, calcParser::RulePow);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    readVar();
    setState(98);
    match(calcParser::POW);
    setState(99);
    int_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntContext ------------------------------------------------------------------

calcParser::IntContext::IntContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t calcParser::IntContext::getRuleIndex() const {
  return calcParser::RuleInt;
}

void calcParser::IntContext::copyFrom(IntContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ConvertToIntContext ------------------------------------------------------------------

tree::TerminalNode* calcParser::ConvertToIntContext::INT() {
  return getToken(calcParser::INT, 0);
}

calcParser::ConvertToIntContext::ConvertToIntContext(IntContext *ctx) { copyFrom(ctx); }

void calcParser::ConvertToIntContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConvertToInt(this);
}
void calcParser::ConvertToIntContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConvertToInt(this);
}
calcParser::IntContext* calcParser::int_() {
  IntContext *_localctx = _tracker.createInstance<IntContext>(_ctx, getState());
  enterRule(_localctx, 18, calcParser::RuleInt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<calcParser::ConvertToIntContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(101);
    match(calcParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool calcParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 3: return plusOrMinusSempred(antlrcpp::downCast<PlusOrMinusContext *>(context), predicateIndex);
    case 4: return multOrDivSempred(antlrcpp::downCast<MultOrDivContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool calcParser::plusOrMinusSempred(PlusOrMinusContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool calcParser::multOrDivSempred(MultOrDivContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void calcParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  calcParserInitialize();
#else
  ::antlr4::internal::call_once(calcParserOnceFlag, calcParserInitialize);
#endif
}
