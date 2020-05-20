
// Generated from CalcParser.g4 by ANTLR 4.7


#include "CalcParserListener.h"

#include "CalcParser.h"


using namespace antlrcpp;
using namespace calc;
using namespace antlr4;

CalcParser::CalcParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CalcParser::~CalcParser() {
  delete _interpreter;
}

std::string CalcParser::getGrammarFileName() const {
  return "CalcParser.g4";
}

const std::vector<std::string>& CalcParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& CalcParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- RootContext ------------------------------------------------------------------

CalcParser::RootContext::RootContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CalcParser::RootContext::EOF() {
  return getToken(CalcParser::EOF, 0);
}

CalcParser::ExprContext* CalcParser::RootContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}


size_t CalcParser::RootContext::getRuleIndex() const {
  return CalcParser::RuleRoot;
}

void CalcParser::RootContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRoot(this);
}

void CalcParser::RootContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRoot(this);
}

CalcParser::RootContext* CalcParser::root() {
  RootContext *_localctx = _tracker.createInstance<RootContext>(_ctx, getState());
  enterRule(_localctx, 0, CalcParser::RuleRoot);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(7);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CalcParser::PI)
      | (1ULL << CalcParser::SIN)
      | (1ULL << CalcParser::COS)
      | (1ULL << CalcParser::TAN)
      | (1ULL << CalcParser::SQRT)
      | (1ULL << CalcParser::LPAREN)
      | (1ULL << CalcParser::SUB)
      | (1ULL << CalcParser::DecimalLiteral)
      | (1ULL << CalcParser::FloatLiteral))) != 0)) {
      setState(6);
      expr(0);
    }
    setState(9);
    match(CalcParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumericLiteralContext ------------------------------------------------------------------

CalcParser::NumericLiteralContext::NumericLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CalcParser::NumericLiteralContext::DecimalLiteral() {
  return getToken(CalcParser::DecimalLiteral, 0);
}

tree::TerminalNode* CalcParser::NumericLiteralContext::FloatLiteral() {
  return getToken(CalcParser::FloatLiteral, 0);
}


size_t CalcParser::NumericLiteralContext::getRuleIndex() const {
  return CalcParser::RuleNumericLiteral;
}

void CalcParser::NumericLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumericLiteral(this);
}

void CalcParser::NumericLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumericLiteral(this);
}

CalcParser::NumericLiteralContext* CalcParser::numericLiteral() {
  NumericLiteralContext *_localctx = _tracker.createInstance<NumericLiteralContext>(_ctx, getState());
  enterRule(_localctx, 2, CalcParser::RuleNumericLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(11);
    _la = _input->LA(1);
    if (!(_la == CalcParser::DecimalLiteral

    || _la == CalcParser::FloatLiteral)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

CalcParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::ExprContext::getRuleIndex() const {
  return CalcParser::RuleExpr;
}

void CalcParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SinExprContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::SinExprContext::SIN() {
  return getToken(CalcParser::SIN, 0);
}

CalcParser::ExprContext* CalcParser::SinExprContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

CalcParser::SinExprContext::SinExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcParser::SinExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSinExpr(this);
}
void CalcParser::SinExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSinExpr(this);
}
//----------------- SqrtExprContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::SqrtExprContext::SQRT() {
  return getToken(CalcParser::SQRT, 0);
}

CalcParser::ExprContext* CalcParser::SqrtExprContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

CalcParser::SqrtExprContext::SqrtExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcParser::SqrtExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSqrtExpr(this);
}
void CalcParser::SqrtExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSqrtExpr(this);
}
//----------------- PiLiteralExprContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::PiLiteralExprContext::PI() {
  return getToken(CalcParser::PI, 0);
}

CalcParser::PiLiteralExprContext::PiLiteralExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcParser::PiLiteralExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPiLiteralExpr(this);
}
void CalcParser::PiLiteralExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPiLiteralExpr(this);
}
//----------------- ExprGroupContext ------------------------------------------------------------------

CalcParser::ExprContext* CalcParser::ExprGroupContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

CalcParser::ExprGroupContext::ExprGroupContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcParser::ExprGroupContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprGroup(this);
}
void CalcParser::ExprGroupContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprGroup(this);
}
//----------------- SubExprContext ------------------------------------------------------------------

std::vector<CalcParser::ExprContext *> CalcParser::SubExprContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::SubExprContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}

tree::TerminalNode* CalcParser::SubExprContext::SUB() {
  return getToken(CalcParser::SUB, 0);
}

CalcParser::SubExprContext::SubExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcParser::SubExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubExpr(this);
}
void CalcParser::SubExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubExpr(this);
}
//----------------- MultExprContext ------------------------------------------------------------------

std::vector<CalcParser::ExprContext *> CalcParser::MultExprContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::MultExprContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}

tree::TerminalNode* CalcParser::MultExprContext::MULT() {
  return getToken(CalcParser::MULT, 0);
}

CalcParser::MultExprContext::MultExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcParser::MultExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultExpr(this);
}
void CalcParser::MultExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultExpr(this);
}
//----------------- NegateExprContext ------------------------------------------------------------------

CalcParser::ExprContext* CalcParser::NegateExprContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::NegateExprContext::SUB() {
  return getToken(CalcParser::SUB, 0);
}

CalcParser::NegateExprContext::NegateExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcParser::NegateExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNegateExpr(this);
}
void CalcParser::NegateExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNegateExpr(this);
}
//----------------- CosExprContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::CosExprContext::COS() {
  return getToken(CalcParser::COS, 0);
}

CalcParser::ExprContext* CalcParser::CosExprContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

CalcParser::CosExprContext::CosExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcParser::CosExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCosExpr(this);
}
void CalcParser::CosExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCosExpr(this);
}
//----------------- ExpExprContext ------------------------------------------------------------------

std::vector<CalcParser::ExprContext *> CalcParser::ExpExprContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::ExpExprContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}

tree::TerminalNode* CalcParser::ExpExprContext::EXP() {
  return getToken(CalcParser::EXP, 0);
}

CalcParser::ExpExprContext::ExpExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcParser::ExpExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpExpr(this);
}
void CalcParser::ExpExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpExpr(this);
}
//----------------- AddExprContext ------------------------------------------------------------------

std::vector<CalcParser::ExprContext *> CalcParser::AddExprContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::AddExprContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}

tree::TerminalNode* CalcParser::AddExprContext::ADD() {
  return getToken(CalcParser::ADD, 0);
}

CalcParser::AddExprContext::AddExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcParser::AddExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddExpr(this);
}
void CalcParser::AddExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddExpr(this);
}
//----------------- LiteralExprContext ------------------------------------------------------------------

CalcParser::NumericLiteralContext* CalcParser::LiteralExprContext::numericLiteral() {
  return getRuleContext<CalcParser::NumericLiteralContext>(0);
}

CalcParser::LiteralExprContext::LiteralExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcParser::LiteralExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteralExpr(this);
}
void CalcParser::LiteralExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteralExpr(this);
}
//----------------- DivExprContext ------------------------------------------------------------------

std::vector<CalcParser::ExprContext *> CalcParser::DivExprContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::DivExprContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}

tree::TerminalNode* CalcParser::DivExprContext::DIV() {
  return getToken(CalcParser::DIV, 0);
}

CalcParser::DivExprContext::DivExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcParser::DivExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDivExpr(this);
}
void CalcParser::DivExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDivExpr(this);
}
//----------------- TanExprContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::TanExprContext::TAN() {
  return getToken(CalcParser::TAN, 0);
}

CalcParser::ExprContext* CalcParser::TanExprContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

CalcParser::TanExprContext::TanExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcParser::TanExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTanExpr(this);
}
void CalcParser::TanExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTanExpr(this);
}

CalcParser::ExprContext* CalcParser::expr() {
   return expr(0);
}

CalcParser::ExprContext* CalcParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CalcParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  CalcParser::ExprContext *previousContext = _localctx;
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, CalcParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(42);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalcParser::DecimalLiteral:
      case CalcParser::FloatLiteral: {
        _localctx = _tracker.createInstance<LiteralExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(14);
        numericLiteral();
        break;
      }

      case CalcParser::PI: {
        _localctx = _tracker.createInstance<PiLiteralExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(15);
        match(CalcParser::PI);
        break;
      }

      case CalcParser::LPAREN: {
        _localctx = _tracker.createInstance<ExprGroupContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(16);
        match(CalcParser::LPAREN);
        setState(17);
        expr(0);
        setState(18);
        match(CalcParser::RPAREN);
        break;
      }

      case CalcParser::SUB: {
        _localctx = _tracker.createInstance<NegateExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(20);
        dynamic_cast<NegateExprContext *>(_localctx)->op = match(CalcParser::SUB);
        setState(21);
        expr(10);
        break;
      }

      case CalcParser::SQRT: {
        _localctx = _tracker.createInstance<SqrtExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(22);
        match(CalcParser::SQRT);
        setState(23);
        match(CalcParser::LPAREN);
        setState(24);
        expr(0);
        setState(25);
        match(CalcParser::RPAREN);
        break;
      }

      case CalcParser::SIN: {
        _localctx = _tracker.createInstance<SinExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(27);
        match(CalcParser::SIN);
        setState(28);
        match(CalcParser::LPAREN);
        setState(29);
        expr(0);
        setState(30);
        match(CalcParser::RPAREN);
        break;
      }

      case CalcParser::COS: {
        _localctx = _tracker.createInstance<CosExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(32);
        match(CalcParser::COS);
        setState(33);
        match(CalcParser::LPAREN);
        setState(34);
        expr(0);
        setState(35);
        match(CalcParser::RPAREN);
        break;
      }

      case CalcParser::TAN: {
        _localctx = _tracker.createInstance<TanExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(37);
        match(CalcParser::TAN);
        setState(38);
        match(CalcParser::LPAREN);
        setState(39);
        expr(0);
        setState(40);
        match(CalcParser::RPAREN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(61);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(59);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ExpExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(44);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(45);
          dynamic_cast<ExpExprContext *>(_localctx)->op = match(CalcParser::EXP);
          setState(46);
          dynamic_cast<ExpExprContext *>(_localctx)->rhs = expr(10);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MultExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(47);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(48);
          dynamic_cast<MultExprContext *>(_localctx)->op = match(CalcParser::MULT);
          setState(49);
          dynamic_cast<MultExprContext *>(_localctx)->rhs = expr(9);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<DivExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(50);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(51);
          dynamic_cast<DivExprContext *>(_localctx)->op = match(CalcParser::DIV);
          setState(52);
          dynamic_cast<DivExprContext *>(_localctx)->rhs = expr(8);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<AddExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(53);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(54);
          dynamic_cast<AddExprContext *>(_localctx)->op = match(CalcParser::ADD);
          setState(55);
          dynamic_cast<AddExprContext *>(_localctx)->rhs = expr(7);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<SubExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(56);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(57);
          dynamic_cast<SubExprContext *>(_localctx)->op = match(CalcParser::SUB);
          setState(58);
          dynamic_cast<SubExprContext *>(_localctx)->rhs = expr(6);
          break;
        }

        } 
      }
      setState(63);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool CalcParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CalcParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 9);
    case 1: return precpred(_ctx, 8);
    case 2: return precpred(_ctx, 7);
    case 3: return precpred(_ctx, 6);
    case 4: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> CalcParser::_decisionToDFA;
atn::PredictionContextCache CalcParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CalcParser::_atn;
std::vector<uint16_t> CalcParser::_serializedATN;

std::vector<std::string> CalcParser::_ruleNames = {
  "root", "numericLiteral", "expr"
};

std::vector<std::string> CalcParser::_literalNames = {
  "", "'pi'", "'sin'", "'cos'", "'tan'", "'sqrt'", "'('", "')'", "'+'", 
  "'-'", "'*'", "'^'", "'/'"
};

std::vector<std::string> CalcParser::_symbolicNames = {
  "", "PI", "SIN", "COS", "TAN", "SQRT", "LPAREN", "RPAREN", "ADD", "SUB", 
  "MULT", "EXP", "DIV", "DecimalLiteral", "FloatLiteral", "Whitespace", 
  "Newline", "BlockComment", "LineComment"
};

dfa::Vocabulary CalcParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CalcParser::_tokenNames;

CalcParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x14, 0x43, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x3, 0x2, 0x5, 0x2, 0xa, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x2d, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x3e, 
    0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x41, 0xb, 0x4, 0x3, 0x4, 0x2, 0x3, 0x6, 
    0x5, 0x2, 0x4, 0x6, 0x2, 0x3, 0x3, 0x2, 0xf, 0x10, 0x2, 0x4c, 0x2, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0xd, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2c, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0xa, 0x5, 0x6, 0x4, 0x2, 0x9, 0x8, 0x3, 0x2, 0x2, 0x2, 
    0x9, 0xa, 0x3, 0x2, 0x2, 0x2, 0xa, 0xb, 0x3, 0x2, 0x2, 0x2, 0xb, 0xc, 
    0x7, 0x2, 0x2, 0x3, 0xc, 0x3, 0x3, 0x2, 0x2, 0x2, 0xd, 0xe, 0x9, 0x2, 
    0x2, 0x2, 0xe, 0x5, 0x3, 0x2, 0x2, 0x2, 0xf, 0x10, 0x8, 0x4, 0x1, 0x2, 
    0x10, 0x2d, 0x5, 0x4, 0x3, 0x2, 0x11, 0x2d, 0x7, 0x3, 0x2, 0x2, 0x12, 
    0x13, 0x7, 0x8, 0x2, 0x2, 0x13, 0x14, 0x5, 0x6, 0x4, 0x2, 0x14, 0x15, 
    0x7, 0x9, 0x2, 0x2, 0x15, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 0x7, 
    0xb, 0x2, 0x2, 0x17, 0x2d, 0x5, 0x6, 0x4, 0xc, 0x18, 0x19, 0x7, 0x7, 
    0x2, 0x2, 0x19, 0x1a, 0x7, 0x8, 0x2, 0x2, 0x1a, 0x1b, 0x5, 0x6, 0x4, 
    0x2, 0x1b, 0x1c, 0x7, 0x9, 0x2, 0x2, 0x1c, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x1d, 0x1e, 0x7, 0x4, 0x2, 0x2, 0x1e, 0x1f, 0x7, 0x8, 0x2, 0x2, 0x1f, 
    0x20, 0x5, 0x6, 0x4, 0x2, 0x20, 0x21, 0x7, 0x9, 0x2, 0x2, 0x21, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0x23, 0x7, 0x5, 0x2, 0x2, 0x23, 0x24, 0x7, 
    0x8, 0x2, 0x2, 0x24, 0x25, 0x5, 0x6, 0x4, 0x2, 0x25, 0x26, 0x7, 0x9, 
    0x2, 0x2, 0x26, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x27, 0x28, 0x7, 0x6, 0x2, 
    0x2, 0x28, 0x29, 0x7, 0x8, 0x2, 0x2, 0x29, 0x2a, 0x5, 0x6, 0x4, 0x2, 
    0x2a, 0x2b, 0x7, 0x9, 0x2, 0x2, 0x2b, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2c, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x11, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x12, 
    0x3, 0x2, 0x2, 0x2, 0x2c, 0x16, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x18, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x22, 0x3, 0x2, 
    0x2, 0x2, 0x2c, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x3f, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0x2f, 0xc, 0xb, 0x2, 0x2, 0x2f, 0x30, 0x7, 0xd, 0x2, 0x2, 
    0x30, 0x3e, 0x5, 0x6, 0x4, 0xc, 0x31, 0x32, 0xc, 0xa, 0x2, 0x2, 0x32, 
    0x33, 0x7, 0xc, 0x2, 0x2, 0x33, 0x3e, 0x5, 0x6, 0x4, 0xb, 0x34, 0x35, 
    0xc, 0x9, 0x2, 0x2, 0x35, 0x36, 0x7, 0xe, 0x2, 0x2, 0x36, 0x3e, 0x5, 
    0x6, 0x4, 0xa, 0x37, 0x38, 0xc, 0x8, 0x2, 0x2, 0x38, 0x39, 0x7, 0xa, 
    0x2, 0x2, 0x39, 0x3e, 0x5, 0x6, 0x4, 0x9, 0x3a, 0x3b, 0xc, 0x7, 0x2, 
    0x2, 0x3b, 0x3c, 0x7, 0xb, 0x2, 0x2, 0x3c, 0x3e, 0x5, 0x6, 0x4, 0x8, 
    0x3d, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x31, 0x3, 0x2, 0x2, 0x2, 0x3d, 
    0x34, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x37, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3a, 
    0x3, 0x2, 0x2, 0x2, 0x3e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3d, 0x3, 
    0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x6, 0x9, 0x2c, 0x3d, 0x3f, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CalcParser::Initializer CalcParser::_init;
