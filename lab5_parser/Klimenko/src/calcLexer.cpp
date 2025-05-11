
// Generated from calc.g4 by ANTLR 4.13.2


#include "calcLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct CalcLexerStaticData final {
  CalcLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CalcLexerStaticData(const CalcLexerStaticData&) = delete;
  CalcLexerStaticData(CalcLexerStaticData&&) = delete;
  CalcLexerStaticData& operator=(const CalcLexerStaticData&) = delete;
  CalcLexerStaticData& operator=(CalcLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag calclexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<CalcLexerStaticData> calclexerLexerStaticData = nullptr;

void calclexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (calclexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(calclexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CalcLexerStaticData>(
    std::vector<std::string>{
      "INT", "WS", "NL", "PLUS", "MINUS", "MULT", "DIV", "POPEN", "PCLOSE", 
      "VAR", "POW", "EQ", "USERVAR", "PRINT", "CALCULATE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,15,84,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,1,0,4,0,33,8,0,11,0,12,0,34,1,1,4,1,38,8,1,11,1,12,1,39,1,1,1,1,
  	1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,
  	1,10,1,11,1,11,1,12,4,12,65,8,12,11,12,12,12,66,1,13,1,13,1,13,1,13,1,
  	13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,0,0,15,1,1,
  	3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,
  	15,1,0,4,1,0,48,57,3,0,9,9,13,13,32,32,1,0,120,122,1,0,65,90,86,0,1,1,
  	0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,
  	13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,
  	0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,1,32,1,0,0,0,3,37,1,0,0,
  	0,5,43,1,0,0,0,7,45,1,0,0,0,9,47,1,0,0,0,11,49,1,0,0,0,13,51,1,0,0,0,
  	15,53,1,0,0,0,17,55,1,0,0,0,19,57,1,0,0,0,21,59,1,0,0,0,23,61,1,0,0,0,
  	25,64,1,0,0,0,27,68,1,0,0,0,29,74,1,0,0,0,31,33,7,0,0,0,32,31,1,0,0,0,
  	33,34,1,0,0,0,34,32,1,0,0,0,34,35,1,0,0,0,35,2,1,0,0,0,36,38,7,1,0,0,
  	37,36,1,0,0,0,38,39,1,0,0,0,39,37,1,0,0,0,39,40,1,0,0,0,40,41,1,0,0,0,
  	41,42,6,1,0,0,42,4,1,0,0,0,43,44,5,10,0,0,44,6,1,0,0,0,45,46,5,43,0,0,
  	46,8,1,0,0,0,47,48,5,45,0,0,48,10,1,0,0,0,49,50,5,42,0,0,50,12,1,0,0,
  	0,51,52,5,47,0,0,52,14,1,0,0,0,53,54,5,40,0,0,54,16,1,0,0,0,55,56,5,41,
  	0,0,56,18,1,0,0,0,57,58,7,2,0,0,58,20,1,0,0,0,59,60,5,94,0,0,60,22,1,
  	0,0,0,61,62,5,61,0,0,62,24,1,0,0,0,63,65,7,3,0,0,64,63,1,0,0,0,65,66,
  	1,0,0,0,66,64,1,0,0,0,66,67,1,0,0,0,67,26,1,0,0,0,68,69,5,112,0,0,69,
  	70,5,114,0,0,70,71,5,105,0,0,71,72,5,110,0,0,72,73,5,116,0,0,73,28,1,
  	0,0,0,74,75,5,99,0,0,75,76,5,97,0,0,76,77,5,108,0,0,77,78,5,99,0,0,78,
  	79,5,117,0,0,79,80,5,108,0,0,80,81,5,97,0,0,81,82,5,116,0,0,82,83,5,101,
  	0,0,83,30,1,0,0,0,4,0,34,39,66,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  calclexerLexerStaticData = std::move(staticData);
}

}

calcLexer::calcLexer(CharStream *input) : Lexer(input) {
  calcLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *calclexerLexerStaticData->atn, calclexerLexerStaticData->decisionToDFA, calclexerLexerStaticData->sharedContextCache);
}

calcLexer::~calcLexer() {
  delete _interpreter;
}

std::string calcLexer::getGrammarFileName() const {
  return "calc.g4";
}

const std::vector<std::string>& calcLexer::getRuleNames() const {
  return calclexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& calcLexer::getChannelNames() const {
  return calclexerLexerStaticData->channelNames;
}

const std::vector<std::string>& calcLexer::getModeNames() const {
  return calclexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& calcLexer::getVocabulary() const {
  return calclexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView calcLexer::getSerializedATN() const {
  return calclexerLexerStaticData->serializedATN;
}

const atn::ATN& calcLexer::getATN() const {
  return *calclexerLexerStaticData->atn;
}




void calcLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  calclexerLexerInitialize();
#else
  ::antlr4::internal::call_once(calclexerLexerOnceFlag, calclexerLexerInitialize);
#endif
}
