
// Generated from CalcParser.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"


namespace calc {


class  CalcParser : public antlr4::Parser {
public:
  enum {
    PI = 1, SIN = 2, COS = 3, TAN = 4, SQRT = 5, LPAREN = 6, RPAREN = 7, 
    ADD = 8, SUB = 9, MULT = 10, EXP = 11, DIV = 12, DecimalLiteral = 13, 
    FloatLiteral = 14, Whitespace = 15, Newline = 16, BlockComment = 17, 
    LineComment = 18
  };

  enum {
    RuleRoot = 0, RuleNumericLiteral = 1, RuleExpr = 2
  };

  CalcParser(antlr4::TokenStream *input);
  ~CalcParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class RootContext;
  class NumericLiteralContext;
  class ExprContext; 

  class  RootContext : public antlr4::ParserRuleContext {
  public:
    RootContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RootContext* root();

  class  NumericLiteralContext : public antlr4::ParserRuleContext {
  public:
    NumericLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DecimalLiteral();
    antlr4::tree::TerminalNode *FloatLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumericLiteralContext* numericLiteral();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SinExprContext : public ExprContext {
  public:
    SinExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *SIN();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SqrtExprContext : public ExprContext {
  public:
    SqrtExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *SQRT();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PiLiteralExprContext : public ExprContext {
  public:
    PiLiteralExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *PI();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ExprGroupContext : public ExprContext {
  public:
    ExprGroupContext(ExprContext *ctx);

    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SubExprContext : public ExprContext {
  public:
    SubExprContext(ExprContext *ctx);

    CalcParser::ExprContext *lhs = nullptr;
    antlr4::Token *op = nullptr;
    CalcParser::ExprContext *rhs = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *SUB();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MultExprContext : public ExprContext {
  public:
    MultExprContext(ExprContext *ctx);

    CalcParser::ExprContext *lhs = nullptr;
    antlr4::Token *op = nullptr;
    CalcParser::ExprContext *rhs = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *MULT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  NegateExprContext : public ExprContext {
  public:
    NegateExprContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    ExprContext *expr();
    antlr4::tree::TerminalNode *SUB();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CosExprContext : public ExprContext {
  public:
    CosExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *COS();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ExpExprContext : public ExprContext {
  public:
    ExpExprContext(ExprContext *ctx);

    CalcParser::ExprContext *lhs = nullptr;
    antlr4::Token *op = nullptr;
    CalcParser::ExprContext *rhs = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *EXP();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AddExprContext : public ExprContext {
  public:
    AddExprContext(ExprContext *ctx);

    CalcParser::ExprContext *lhs = nullptr;
    antlr4::Token *op = nullptr;
    CalcParser::ExprContext *rhs = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *ADD();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  LiteralExprContext : public ExprContext {
  public:
    LiteralExprContext(ExprContext *ctx);

    NumericLiteralContext *numericLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  DivExprContext : public ExprContext {
  public:
    DivExprContext(ExprContext *ctx);

    CalcParser::ExprContext *lhs = nullptr;
    antlr4::Token *op = nullptr;
    CalcParser::ExprContext *rhs = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *DIV();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TanExprContext : public ExprContext {
  public:
    TanExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *TAN();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);

  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace calc
