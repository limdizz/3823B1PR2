
// Generated from calc.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "calcListener.h"


/**
 * This class provides an empty implementation of calcListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  calcBaseListener : public calcListener {
public:

  virtual void enterInput(calcParser::InputContext * /*ctx*/) override { }
  virtual void exitInput(calcParser::InputContext * /*ctx*/) override { }

  virtual void enterSetValue(calcParser::SetValueContext * /*ctx*/) override { }
  virtual void exitSetValue(calcParser::SetValueContext * /*ctx*/) override { }

  virtual void enterPrint(calcParser::PrintContext * /*ctx*/) override { }
  virtual void exitPrint(calcParser::PrintContext * /*ctx*/) override { }

  virtual void enterCalculate(calcParser::CalculateContext * /*ctx*/) override { }
  virtual void exitCalculate(calcParser::CalculateContext * /*ctx*/) override { }

  virtual void enterReadUserVar(calcParser::ReadUserVarContext * /*ctx*/) override { }
  virtual void exitReadUserVar(calcParser::ReadUserVarContext * /*ctx*/) override { }

  virtual void enterToMultOrDiv(calcParser::ToMultOrDivContext * /*ctx*/) override { }
  virtual void exitToMultOrDiv(calcParser::ToMultOrDivContext * /*ctx*/) override { }

  virtual void enterBinaryMinusOp(calcParser::BinaryMinusOpContext * /*ctx*/) override { }
  virtual void exitBinaryMinusOp(calcParser::BinaryMinusOpContext * /*ctx*/) override { }

  virtual void enterPlusOp(calcParser::PlusOpContext * /*ctx*/) override { }
  virtual void exitPlusOp(calcParser::PlusOpContext * /*ctx*/) override { }

  virtual void enterToAtom(calcParser::ToAtomContext * /*ctx*/) override { }
  virtual void exitToAtom(calcParser::ToAtomContext * /*ctx*/) override { }

  virtual void enterMultOp(calcParser::MultOpContext * /*ctx*/) override { }
  virtual void exitMultOp(calcParser::MultOpContext * /*ctx*/) override { }

  virtual void enterUnaryMinusOp(calcParser::UnaryMinusOpContext * /*ctx*/) override { }
  virtual void exitUnaryMinusOp(calcParser::UnaryMinusOpContext * /*ctx*/) override { }

  virtual void enterParenthesisOp(calcParser::ParenthesisOpContext * /*ctx*/) override { }
  virtual void exitParenthesisOp(calcParser::ParenthesisOpContext * /*ctx*/) override { }

  virtual void enterMonom(calcParser::MonomContext * /*ctx*/) override { }
  virtual void exitMonom(calcParser::MonomContext * /*ctx*/) override { }

  virtual void enterGetValue(calcParser::GetValueContext * /*ctx*/) override { }
  virtual void exitGetValue(calcParser::GetValueContext * /*ctx*/) override { }

  virtual void enterFullMonom(calcParser::FullMonomContext * /*ctx*/) override { }
  virtual void exitFullMonom(calcParser::FullMonomContext * /*ctx*/) override { }

  virtual void enterMonomZeroPower(calcParser::MonomZeroPowerContext * /*ctx*/) override { }
  virtual void exitMonomZeroPower(calcParser::MonomZeroPowerContext * /*ctx*/) override { }

  virtual void enterMonomWithoutCoefficient(calcParser::MonomWithoutCoefficientContext * /*ctx*/) override { }
  virtual void exitMonomWithoutCoefficient(calcParser::MonomWithoutCoefficientContext * /*ctx*/) override { }

  virtual void enterReadVar(calcParser::ReadVarContext * /*ctx*/) override { }
  virtual void exitReadVar(calcParser::ReadVarContext * /*ctx*/) override { }

  virtual void enterPow(calcParser::PowContext * /*ctx*/) override { }
  virtual void exitPow(calcParser::PowContext * /*ctx*/) override { }

  virtual void enterConvertToInt(calcParser::ConvertToIntContext * /*ctx*/) override { }
  virtual void exitConvertToInt(calcParser::ConvertToIntContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

