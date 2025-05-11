
// Generated from calc.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "calcParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by calcParser.
 */
class  calcListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterInput(calcParser::InputContext *ctx) = 0;
  virtual void exitInput(calcParser::InputContext *ctx) = 0;

  virtual void enterSetValue(calcParser::SetValueContext *ctx) = 0;
  virtual void exitSetValue(calcParser::SetValueContext *ctx) = 0;

  virtual void enterPrint(calcParser::PrintContext *ctx) = 0;
  virtual void exitPrint(calcParser::PrintContext *ctx) = 0;

  virtual void enterCalculate(calcParser::CalculateContext *ctx) = 0;
  virtual void exitCalculate(calcParser::CalculateContext *ctx) = 0;

  virtual void enterReadUserVar(calcParser::ReadUserVarContext *ctx) = 0;
  virtual void exitReadUserVar(calcParser::ReadUserVarContext *ctx) = 0;

  virtual void enterToMultOrDiv(calcParser::ToMultOrDivContext *ctx) = 0;
  virtual void exitToMultOrDiv(calcParser::ToMultOrDivContext *ctx) = 0;

  virtual void enterBinaryMinusOp(calcParser::BinaryMinusOpContext *ctx) = 0;
  virtual void exitBinaryMinusOp(calcParser::BinaryMinusOpContext *ctx) = 0;

  virtual void enterPlusOp(calcParser::PlusOpContext *ctx) = 0;
  virtual void exitPlusOp(calcParser::PlusOpContext *ctx) = 0;

  virtual void enterToAtom(calcParser::ToAtomContext *ctx) = 0;
  virtual void exitToAtom(calcParser::ToAtomContext *ctx) = 0;

  virtual void enterMultOp(calcParser::MultOpContext *ctx) = 0;
  virtual void exitMultOp(calcParser::MultOpContext *ctx) = 0;

  virtual void enterUnaryMinusOp(calcParser::UnaryMinusOpContext *ctx) = 0;
  virtual void exitUnaryMinusOp(calcParser::UnaryMinusOpContext *ctx) = 0;

  virtual void enterParenthesisOp(calcParser::ParenthesisOpContext *ctx) = 0;
  virtual void exitParenthesisOp(calcParser::ParenthesisOpContext *ctx) = 0;

  virtual void enterMonom(calcParser::MonomContext *ctx) = 0;
  virtual void exitMonom(calcParser::MonomContext *ctx) = 0;

  virtual void enterGetValue(calcParser::GetValueContext *ctx) = 0;
  virtual void exitGetValue(calcParser::GetValueContext *ctx) = 0;

  virtual void enterFullMonom(calcParser::FullMonomContext *ctx) = 0;
  virtual void exitFullMonom(calcParser::FullMonomContext *ctx) = 0;

  virtual void enterMonomZeroPower(calcParser::MonomZeroPowerContext *ctx) = 0;
  virtual void exitMonomZeroPower(calcParser::MonomZeroPowerContext *ctx) = 0;

  virtual void enterMonomWithoutCoefficient(calcParser::MonomWithoutCoefficientContext *ctx) = 0;
  virtual void exitMonomWithoutCoefficient(calcParser::MonomWithoutCoefficientContext *ctx) = 0;

  virtual void enterReadVar(calcParser::ReadVarContext *ctx) = 0;
  virtual void exitReadVar(calcParser::ReadVarContext *ctx) = 0;

  virtual void enterPow(calcParser::PowContext *ctx) = 0;
  virtual void exitPow(calcParser::PowContext *ctx) = 0;

  virtual void enterConvertToInt(calcParser::ConvertToIntContext *ctx) = 0;
  virtual void exitConvertToInt(calcParser::ConvertToIntContext *ctx) = 0;


};

