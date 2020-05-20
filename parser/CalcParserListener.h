
// Generated from CalcParser.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "CalcParser.h"


namespace calc {

/**
 * This interface defines an abstract listener for a parse tree produced by CalcParser.
 */
class  CalcParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterRoot(CalcParser::RootContext *ctx) = 0;
  virtual void exitRoot(CalcParser::RootContext *ctx) = 0;

  virtual void enterNumericLiteral(CalcParser::NumericLiteralContext *ctx) = 0;
  virtual void exitNumericLiteral(CalcParser::NumericLiteralContext *ctx) = 0;

  virtual void enterSinExpr(CalcParser::SinExprContext *ctx) = 0;
  virtual void exitSinExpr(CalcParser::SinExprContext *ctx) = 0;

  virtual void enterSqrtExpr(CalcParser::SqrtExprContext *ctx) = 0;
  virtual void exitSqrtExpr(CalcParser::SqrtExprContext *ctx) = 0;

  virtual void enterPiLiteralExpr(CalcParser::PiLiteralExprContext *ctx) = 0;
  virtual void exitPiLiteralExpr(CalcParser::PiLiteralExprContext *ctx) = 0;

  virtual void enterExprGroup(CalcParser::ExprGroupContext *ctx) = 0;
  virtual void exitExprGroup(CalcParser::ExprGroupContext *ctx) = 0;

  virtual void enterSubExpr(CalcParser::SubExprContext *ctx) = 0;
  virtual void exitSubExpr(CalcParser::SubExprContext *ctx) = 0;

  virtual void enterMultExpr(CalcParser::MultExprContext *ctx) = 0;
  virtual void exitMultExpr(CalcParser::MultExprContext *ctx) = 0;

  virtual void enterNegateExpr(CalcParser::NegateExprContext *ctx) = 0;
  virtual void exitNegateExpr(CalcParser::NegateExprContext *ctx) = 0;

  virtual void enterCosExpr(CalcParser::CosExprContext *ctx) = 0;
  virtual void exitCosExpr(CalcParser::CosExprContext *ctx) = 0;

  virtual void enterExpExpr(CalcParser::ExpExprContext *ctx) = 0;
  virtual void exitExpExpr(CalcParser::ExpExprContext *ctx) = 0;

  virtual void enterAddExpr(CalcParser::AddExprContext *ctx) = 0;
  virtual void exitAddExpr(CalcParser::AddExprContext *ctx) = 0;

  virtual void enterLiteralExpr(CalcParser::LiteralExprContext *ctx) = 0;
  virtual void exitLiteralExpr(CalcParser::LiteralExprContext *ctx) = 0;

  virtual void enterDivExpr(CalcParser::DivExprContext *ctx) = 0;
  virtual void exitDivExpr(CalcParser::DivExprContext *ctx) = 0;

  virtual void enterTanExpr(CalcParser::TanExprContext *ctx) = 0;
  virtual void exitTanExpr(CalcParser::TanExprContext *ctx) = 0;


};

}  // namespace calc
