
// Generated from CalcParser.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "CalcParserListener.h"


namespace calc {

/**
 * This class provides an empty implementation of CalcParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CalcParserBaseListener : public CalcParserListener {
public:

  virtual void enterRoot(CalcParser::RootContext * /*ctx*/) override { }
  virtual void exitRoot(CalcParser::RootContext * /*ctx*/) override { }

  virtual void enterNumericLiteral(CalcParser::NumericLiteralContext * /*ctx*/) override { }
  virtual void exitNumericLiteral(CalcParser::NumericLiteralContext * /*ctx*/) override { }

  virtual void enterSinExpr(CalcParser::SinExprContext * /*ctx*/) override { }
  virtual void exitSinExpr(CalcParser::SinExprContext * /*ctx*/) override { }

  virtual void enterSqrtExpr(CalcParser::SqrtExprContext * /*ctx*/) override { }
  virtual void exitSqrtExpr(CalcParser::SqrtExprContext * /*ctx*/) override { }

  virtual void enterPiLiteralExpr(CalcParser::PiLiteralExprContext * /*ctx*/) override { }
  virtual void exitPiLiteralExpr(CalcParser::PiLiteralExprContext * /*ctx*/) override { }

  virtual void enterExprGroup(CalcParser::ExprGroupContext * /*ctx*/) override { }
  virtual void exitExprGroup(CalcParser::ExprGroupContext * /*ctx*/) override { }

  virtual void enterSubExpr(CalcParser::SubExprContext * /*ctx*/) override { }
  virtual void exitSubExpr(CalcParser::SubExprContext * /*ctx*/) override { }

  virtual void enterMultExpr(CalcParser::MultExprContext * /*ctx*/) override { }
  virtual void exitMultExpr(CalcParser::MultExprContext * /*ctx*/) override { }

  virtual void enterNegateExpr(CalcParser::NegateExprContext * /*ctx*/) override { }
  virtual void exitNegateExpr(CalcParser::NegateExprContext * /*ctx*/) override { }

  virtual void enterCosExpr(CalcParser::CosExprContext * /*ctx*/) override { }
  virtual void exitCosExpr(CalcParser::CosExprContext * /*ctx*/) override { }

  virtual void enterExpExpr(CalcParser::ExpExprContext * /*ctx*/) override { }
  virtual void exitExpExpr(CalcParser::ExpExprContext * /*ctx*/) override { }

  virtual void enterAddExpr(CalcParser::AddExprContext * /*ctx*/) override { }
  virtual void exitAddExpr(CalcParser::AddExprContext * /*ctx*/) override { }

  virtual void enterLiteralExpr(CalcParser::LiteralExprContext * /*ctx*/) override { }
  virtual void exitLiteralExpr(CalcParser::LiteralExprContext * /*ctx*/) override { }

  virtual void enterDivExpr(CalcParser::DivExprContext * /*ctx*/) override { }
  virtual void exitDivExpr(CalcParser::DivExprContext * /*ctx*/) override { }

  virtual void enterTanExpr(CalcParser::TanExprContext * /*ctx*/) override { }
  virtual void exitTanExpr(CalcParser::TanExprContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace calc
