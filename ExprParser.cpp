
// Generated from Expr.g4 by ANTLR 4.7.1


#include "ExprVisitor.h"

#include "ExprParser.h"


using namespace antlrcpp;
using namespace antlr4;

ExprParser::ExprParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ExprParser::~ExprParser() {
  delete _interpreter;
}

std::string ExprParser::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ExprParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ExprContext ------------------------------------------------------------------

ExprParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::ExprContext::getRuleIndex() const {
  return ExprParser::RuleExpr;
}

void ExprParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParContext ------------------------------------------------------------------

ExprParser::ExprContext* ExprParser::ParContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::ParContext::ParContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ExprParser::ParContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitPar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InfContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::InfContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::InfContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::InfContext::InfContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ExprParser::InfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitInf(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EgalContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::EgalContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::EgalContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::EgalContext::EgalContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ExprParser::EgalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitEgal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::MultContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::MultContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::MultContext::MultContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ExprParser::MultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitMult(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ValeurContext ------------------------------------------------------------------

ExprParser::ValContext* ExprParser::ValeurContext::val() {
  return getRuleContext<ExprParser::ValContext>(0);
}

ExprParser::ValeurContext::ValeurContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ExprParser::ValeurContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitValeur(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffectContext ------------------------------------------------------------------

ExprParser::NameContext* ExprParser::AffectContext::name() {
  return getRuleContext<ExprParser::NameContext>(0);
}

ExprParser::ExprContext* ExprParser::AffectContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::AffectContext::AffectContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ExprParser::AffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitAffect(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OuContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::OuContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::OuContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::OuContext::OuContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ExprParser::OuContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitOu(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DiffContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::DiffContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::DiffContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::DiffContext::DiffContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ExprParser::DiffContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDiff(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NonContext ------------------------------------------------------------------

ExprParser::ExprContext* ExprParser::NonContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::NonContext::NonContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ExprParser::NonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitNon(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlusContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::PlusContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::PlusContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::PlusContext::PlusContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ExprParser::PlusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitPlus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SupContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::SupContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::SupContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::SupContext::SupContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ExprParser::SupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitSup(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EtContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::EtContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::EtContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::EtContext::EtContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ExprParser::EtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitEt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InvContext ------------------------------------------------------------------

ExprParser::ExprContext* ExprParser::InvContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::InvContext::InvContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ExprParser::InvContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitInv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DivContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::DivContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::DivContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::DivContext::DivContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ExprParser::DivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CallfunctionContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::CallfunctionContext::FUNCTION_NAME() {
  return getToken(ExprParser::FUNCTION_NAME, 0);
}

ExprParser::ParamsContext* ExprParser::CallfunctionContext::params() {
  return getRuleContext<ExprParser::ParamsContext>(0);
}

ExprParser::CallfunctionContext::CallfunctionContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ExprParser::CallfunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCallfunction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PredecrContext ------------------------------------------------------------------

ExprParser::NameContext* ExprParser::PredecrContext::name() {
  return getRuleContext<ExprParser::NameContext>(0);
}

ExprParser::PredecrContext::PredecrContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ExprParser::PredecrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitPredecr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreincrContext ------------------------------------------------------------------

ExprParser::NameContext* ExprParser::PreincrContext::name() {
  return getRuleContext<ExprParser::NameContext>(0);
}

ExprParser::PreincrContext::PreincrContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ExprParser::PreincrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitPreincr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PostdecrContext ------------------------------------------------------------------

ExprParser::NameContext* ExprParser::PostdecrContext::name() {
  return getRuleContext<ExprParser::NameContext>(0);
}

ExprParser::PostdecrContext::PostdecrContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ExprParser::PostdecrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitPostdecr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SupegalContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::SupegalContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::SupegalContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::SupegalContext::SupegalContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ExprParser::SupegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitSupegal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MoinsContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::MoinsContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::MoinsContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::MoinsContext::MoinsContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ExprParser::MoinsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitMoins(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PostincrContext ------------------------------------------------------------------

ExprParser::NameContext* ExprParser::PostincrContext::name() {
  return getRuleContext<ExprParser::NameContext>(0);
}

ExprParser::PostincrContext::PostincrContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ExprParser::PostincrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitPostincr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModuloContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::ModuloContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::ModuloContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::ModuloContext::ModuloContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ExprParser::ModuloContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitModulo(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InfegalContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::InfegalContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::InfegalContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::InfegalContext::InfegalContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ExprParser::InfegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitInfegal(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ExprContext* ExprParser::expr() {
   return expr(0);
}

ExprParser::ExprContext* ExprParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  ExprParser::ExprContext *previousContext = _localctx;
  size_t startState = 0;
  enterRecursionRule(_localctx, 0, ExprParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(70);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<PostincrContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(41);
      name();
      setState(42);
      match(ExprParser::T__3);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PreincrContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(44);
      match(ExprParser::T__3);
      setState(45);
      name();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<InvContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(46);
      match(ExprParser::T__4);
      setState(47);
      expr(17);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<PostdecrContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(48);
      name();
      setState(49);
      match(ExprParser::T__5);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<PredecrContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(51);
      match(ExprParser::T__5);
      setState(52);
      name();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<AffectContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(53);
      name();
      setState(54);
      match(ExprParser::T__7);
      setState(55);
      expr(13);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<ParContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(57);
      match(ExprParser::T__16);
      setState(58);
      expr(0);
      setState(59);
      match(ExprParser::T__17);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<NonContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(61);
      match(ExprParser::T__18);
      setState(62);
      expr(3);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<CallfunctionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(63);
      match(ExprParser::FUNCTION_NAME);
      setState(64);
      match(ExprParser::T__16);
      setState(66);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ExprParser::T__3)
        | (1ULL << ExprParser::T__4)
        | (1ULL << ExprParser::T__5)
        | (1ULL << ExprParser::T__16)
        | (1ULL << ExprParser::T__18)
        | (1ULL << ExprParser::FUNCTION_NAME)
        | (1ULL << ExprParser::NAME)
        | (1ULL << ExprParser::CHARACTER)
        | (1ULL << ExprParser::NUMBER))) != 0)) {
        setState(65);
        params();
      }
      setState(68);
      match(ExprParser::T__17);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<ValeurContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(69);
      val();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(113);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(111);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(72);

          if (!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
          setState(73);
          match(ExprParser::T__0);
          setState(74);
          expr(24);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<DivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(75);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(76);
          match(ExprParser::T__1);
          setState(77);
          expr(23);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<PlusContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(78);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(79);
          match(ExprParser::T__2);
          setState(80);
          expr(22);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<MoinsContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(81);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(82);
          match(ExprParser::T__4);
          setState(83);
          expr(19);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ModuloContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(84);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(85);
          match(ExprParser::T__6);
          setState(86);
          expr(15);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<EgalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(87);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(88);
          match(ExprParser::T__8);
          setState(89);
          expr(13);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<DiffContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(90);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(91);
          match(ExprParser::T__9);
          setState(92);
          expr(12);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<SupContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(93);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(94);
          match(ExprParser::T__10);
          setState(95);
          expr(11);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<SupegalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(96);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(97);
          match(ExprParser::T__11);
          setState(98);
          expr(10);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<InfContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(99);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(100);
          match(ExprParser::T__12);
          setState(101);
          expr(9);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<InfegalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(102);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(103);
          match(ExprParser::T__13);
          setState(104);
          expr(8);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<OuContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(105);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(106);
          match(ExprParser::T__14);
          setState(107);
          expr(7);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<EtContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(108);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(109);
          match(ExprParser::T__15);
          setState(110);
          expr(6);
          break;
        }

        } 
      }
      setState(115);
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

//----------------- ProgramContext ------------------------------------------------------------------

ExprParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::GlobalVarContext *> ExprParser::ProgramContext::globalVar() {
  return getRuleContexts<ExprParser::GlobalVarContext>();
}

ExprParser::GlobalVarContext* ExprParser::ProgramContext::globalVar(size_t i) {
  return getRuleContext<ExprParser::GlobalVarContext>(i);
}

std::vector<ExprParser::FunctionContext *> ExprParser::ProgramContext::function() {
  return getRuleContexts<ExprParser::FunctionContext>();
}

ExprParser::FunctionContext* ExprParser::ProgramContext::function(size_t i) {
  return getRuleContext<ExprParser::FunctionContext>(i);
}


size_t ExprParser::ProgramContext::getRuleIndex() const {
  return ExprParser::RuleProgram;
}

antlrcpp::Any ExprParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ProgramContext* ExprParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 2, ExprParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(119);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(116);
        globalVar(); 
      }
      setState(121);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
    setState(125);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::CHAR)
      | (1ULL << ExprParser::INT32_T)
      | (1ULL << ExprParser::INT64_T)
      | (1ULL << ExprParser::VOID))) != 0)) {
      setState(122);
      function();
      setState(127);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GlobalVarContext ------------------------------------------------------------------

ExprParser::GlobalVarContext::GlobalVarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::TypeContext* ExprParser::GlobalVarContext::type() {
  return getRuleContext<ExprParser::TypeContext>(0);
}

ExprParser::NameContext* ExprParser::GlobalVarContext::name() {
  return getRuleContext<ExprParser::NameContext>(0);
}

ExprParser::ValContext* ExprParser::GlobalVarContext::val() {
  return getRuleContext<ExprParser::ValContext>(0);
}


size_t ExprParser::GlobalVarContext::getRuleIndex() const {
  return ExprParser::RuleGlobalVar;
}

antlrcpp::Any ExprParser::GlobalVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitGlobalVar(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::GlobalVarContext* ExprParser::globalVar() {
  GlobalVarContext *_localctx = _tracker.createInstance<GlobalVarContext>(_ctx, getState());
  enterRule(_localctx, 4, ExprParser::RuleGlobalVar);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    type();
    setState(129);
    name();
    setState(130);
    match(ExprParser::T__7);
    setState(131);
    val();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

ExprParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::RetTypeContext* ExprParser::FunctionContext::retType() {
  return getRuleContext<ExprParser::RetTypeContext>(0);
}

tree::TerminalNode* ExprParser::FunctionContext::FUNCTION_NAME() {
  return getToken(ExprParser::FUNCTION_NAME, 0);
}

ExprParser::BlockFunctionContext* ExprParser::FunctionContext::blockFunction() {
  return getRuleContext<ExprParser::BlockFunctionContext>(0);
}

ExprParser::SigParamsContext* ExprParser::FunctionContext::sigParams() {
  return getRuleContext<ExprParser::SigParamsContext>(0);
}


size_t ExprParser::FunctionContext::getRuleIndex() const {
  return ExprParser::RuleFunction;
}

antlrcpp::Any ExprParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::FunctionContext* ExprParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 6, ExprParser::RuleFunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(133);
    retType();
    setState(134);
    match(ExprParser::FUNCTION_NAME);

    setState(136);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::CHAR)
      | (1ULL << ExprParser::INT32_T)
      | (1ULL << ExprParser::INT64_T))) != 0)) {
      setState(135);
      sigParams();
    }
    setState(138);
    blockFunction();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockFunctionContext ------------------------------------------------------------------

ExprParser::BlockFunctionContext::BlockFunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::DeclareContext *> ExprParser::BlockFunctionContext::declare() {
  return getRuleContexts<ExprParser::DeclareContext>();
}

ExprParser::DeclareContext* ExprParser::BlockFunctionContext::declare(size_t i) {
  return getRuleContext<ExprParser::DeclareContext>(i);
}

std::vector<ExprParser::InstructionContext *> ExprParser::BlockFunctionContext::instruction() {
  return getRuleContexts<ExprParser::InstructionContext>();
}

ExprParser::InstructionContext* ExprParser::BlockFunctionContext::instruction(size_t i) {
  return getRuleContext<ExprParser::InstructionContext>(i);
}


size_t ExprParser::BlockFunctionContext::getRuleIndex() const {
  return ExprParser::RuleBlockFunction;
}

antlrcpp::Any ExprParser::BlockFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitBlockFunction(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::BlockFunctionContext* ExprParser::blockFunction() {
  BlockFunctionContext *_localctx = _tracker.createInstance<BlockFunctionContext>(_ctx, getState());
  enterRule(_localctx, 8, ExprParser::RuleBlockFunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140);
    match(ExprParser::T__19);
    setState(146);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::CHAR)
      | (1ULL << ExprParser::INT32_T)
      | (1ULL << ExprParser::INT64_T))) != 0)) {
      setState(141);
      declare();
      setState(142);
      match(ExprParser::T__20);
      setState(148);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(152);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::T__3)
      | (1ULL << ExprParser::T__4)
      | (1ULL << ExprParser::T__5)
      | (1ULL << ExprParser::T__16)
      | (1ULL << ExprParser::T__18)
      | (1ULL << ExprParser::FUNCTION_NAME)
      | (1ULL << ExprParser::NAME)
      | (1ULL << ExprParser::CHARACTER)
      | (1ULL << ExprParser::NUMBER)
      | (1ULL << ExprParser::IF)
      | (1ULL << ExprParser::RETURN)
      | (1ULL << ExprParser::WHILE))) != 0)) {
      setState(149);
      instruction();
      setState(154);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(155);
    match(ExprParser::T__21);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

ExprParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::ExprContext* ExprParser::InstructionContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::IfStatementContext* ExprParser::InstructionContext::ifStatement() {
  return getRuleContext<ExprParser::IfStatementContext>(0);
}

ExprParser::WhileStatementContext* ExprParser::InstructionContext::whileStatement() {
  return getRuleContext<ExprParser::WhileStatementContext>(0);
}

ExprParser::ReturnStatementContext* ExprParser::InstructionContext::returnStatement() {
  return getRuleContext<ExprParser::ReturnStatementContext>(0);
}


size_t ExprParser::InstructionContext::getRuleIndex() const {
  return ExprParser::RuleInstruction;
}

antlrcpp::Any ExprParser::InstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitInstruction(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::InstructionContext* ExprParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 10, ExprParser::RuleInstruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(163);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::T__3:
      case ExprParser::T__4:
      case ExprParser::T__5:
      case ExprParser::T__16:
      case ExprParser::T__18:
      case ExprParser::FUNCTION_NAME:
      case ExprParser::NAME:
      case ExprParser::CHARACTER:
      case ExprParser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(157);
        expr(0);
        setState(158);
        match(ExprParser::T__20);
        break;
      }

      case ExprParser::IF: {
        enterOuterAlt(_localctx, 2);
        setState(160);
        ifStatement();
        break;
      }

      case ExprParser::WHILE: {
        enterOuterAlt(_localctx, 3);
        setState(161);
        whileStatement();
        break;
      }

      case ExprParser::RETURN: {
        enterOuterAlt(_localctx, 4);
        setState(162);
        returnStatement();
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

//----------------- ReturnStatementContext ------------------------------------------------------------------

ExprParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ReturnStatementContext::RETURN() {
  return getToken(ExprParser::RETURN, 0);
}

ExprParser::ValContext* ExprParser::ReturnStatementContext::val() {
  return getRuleContext<ExprParser::ValContext>(0);
}


size_t ExprParser::ReturnStatementContext::getRuleIndex() const {
  return ExprParser::RuleReturnStatement;
}

antlrcpp::Any ExprParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ReturnStatementContext* ExprParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 12, ExprParser::RuleReturnStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(165);
    match(ExprParser::RETURN);
    setState(167);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      setState(166);
      val();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

ExprParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::IfStatementContext::IF() {
  return getToken(ExprParser::IF, 0);
}

ExprParser::BlockContext* ExprParser::IfStatementContext::block() {
  return getRuleContext<ExprParser::BlockContext>(0);
}

ExprParser::ExprContext* ExprParser::IfStatementContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::ElseStatementContext* ExprParser::IfStatementContext::elseStatement() {
  return getRuleContext<ExprParser::ElseStatementContext>(0);
}


size_t ExprParser::IfStatementContext::getRuleIndex() const {
  return ExprParser::RuleIfStatement;
}

antlrcpp::Any ExprParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::IfStatementContext* ExprParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 14, ExprParser::RuleIfStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    match(ExprParser::IF);

    setState(170);
    expr(0);
    setState(171);
    block();
    setState(173);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::ELSE) {
      setState(172);
      elseStatement();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseStatementContext ------------------------------------------------------------------

ExprParser::ElseStatementContext::ElseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ElseStatementContext::ELSE() {
  return getToken(ExprParser::ELSE, 0);
}

ExprParser::BlockContext* ExprParser::ElseStatementContext::block() {
  return getRuleContext<ExprParser::BlockContext>(0);
}

ExprParser::IfStatementContext* ExprParser::ElseStatementContext::ifStatement() {
  return getRuleContext<ExprParser::IfStatementContext>(0);
}


size_t ExprParser::ElseStatementContext::getRuleIndex() const {
  return ExprParser::RuleElseStatement;
}

antlrcpp::Any ExprParser::ElseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitElseStatement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ElseStatementContext* ExprParser::elseStatement() {
  ElseStatementContext *_localctx = _tracker.createInstance<ElseStatementContext>(_ctx, getState());
  enterRule(_localctx, 16, ExprParser::RuleElseStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(179);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(175);
      match(ExprParser::ELSE);
      setState(176);
      block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(177);
      match(ExprParser::ELSE);
      setState(178);
      ifStatement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

ExprParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::WhileStatementContext::WHILE() {
  return getToken(ExprParser::WHILE, 0);
}

ExprParser::BlockContext* ExprParser::WhileStatementContext::block() {
  return getRuleContext<ExprParser::BlockContext>(0);
}

ExprParser::ExprContext* ExprParser::WhileStatementContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}


size_t ExprParser::WhileStatementContext::getRuleIndex() const {
  return ExprParser::RuleWhileStatement;
}

antlrcpp::Any ExprParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::WhileStatementContext* ExprParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 18, ExprParser::RuleWhileStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(181);
    match(ExprParser::WHILE);

    setState(182);
    expr(0);
    setState(183);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

ExprParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::InstructionContext *> ExprParser::BlockContext::instruction() {
  return getRuleContexts<ExprParser::InstructionContext>();
}

ExprParser::InstructionContext* ExprParser::BlockContext::instruction(size_t i) {
  return getRuleContext<ExprParser::InstructionContext>(i);
}


size_t ExprParser::BlockContext::getRuleIndex() const {
  return ExprParser::RuleBlock;
}

antlrcpp::Any ExprParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::BlockContext* ExprParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 20, ExprParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    match(ExprParser::T__19);
    setState(189);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::T__3)
      | (1ULL << ExprParser::T__4)
      | (1ULL << ExprParser::T__5)
      | (1ULL << ExprParser::T__16)
      | (1ULL << ExprParser::T__18)
      | (1ULL << ExprParser::FUNCTION_NAME)
      | (1ULL << ExprParser::NAME)
      | (1ULL << ExprParser::CHARACTER)
      | (1ULL << ExprParser::NUMBER)
      | (1ULL << ExprParser::IF)
      | (1ULL << ExprParser::RETURN)
      | (1ULL << ExprParser::WHILE))) != 0)) {
      setState(186);
      instruction();
      setState(191);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(192);
    match(ExprParser::T__21);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclareContext ------------------------------------------------------------------

ExprParser::DeclareContext::DeclareContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::TypeContext* ExprParser::DeclareContext::type() {
  return getRuleContext<ExprParser::TypeContext>(0);
}

ExprParser::NameContext* ExprParser::DeclareContext::name() {
  return getRuleContext<ExprParser::NameContext>(0);
}


size_t ExprParser::DeclareContext::getRuleIndex() const {
  return ExprParser::RuleDeclare;
}

antlrcpp::Any ExprParser::DeclareContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDeclare(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::DeclareContext* ExprParser::declare() {
  DeclareContext *_localctx = _tracker.createInstance<DeclareContext>(_ctx, getState());
  enterRule(_localctx, 22, ExprParser::RuleDeclare);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    type();
    setState(195);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

ExprParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::TypeContext::CHAR() {
  return getToken(ExprParser::CHAR, 0);
}

tree::TerminalNode* ExprParser::TypeContext::INT32_T() {
  return getToken(ExprParser::INT32_T, 0);
}

tree::TerminalNode* ExprParser::TypeContext::INT64_T() {
  return getToken(ExprParser::INT64_T, 0);
}


size_t ExprParser::TypeContext::getRuleIndex() const {
  return ExprParser::RuleType;
}

antlrcpp::Any ExprParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::TypeContext* ExprParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 24, ExprParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::CHAR)
      | (1ULL << ExprParser::INT32_T)
      | (1ULL << ExprParser::INT64_T))) != 0))) {
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

//----------------- SigTypeContext ------------------------------------------------------------------

ExprParser::SigTypeContext::SigTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::SigTypeContext::CHAR() {
  return getToken(ExprParser::CHAR, 0);
}

tree::TerminalNode* ExprParser::SigTypeContext::INT32_T() {
  return getToken(ExprParser::INT32_T, 0);
}

tree::TerminalNode* ExprParser::SigTypeContext::INT64_T() {
  return getToken(ExprParser::INT64_T, 0);
}

ExprParser::TypeContext* ExprParser::SigTypeContext::type() {
  return getRuleContext<ExprParser::TypeContext>(0);
}


size_t ExprParser::SigTypeContext::getRuleIndex() const {
  return ExprParser::RuleSigType;
}

antlrcpp::Any ExprParser::SigTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitSigType(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::SigTypeContext* ExprParser::sigType() {
  SigTypeContext *_localctx = _tracker.createInstance<SigTypeContext>(_ctx, getState());
  enterRule(_localctx, 26, ExprParser::RuleSigType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(209);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(199);
      match(ExprParser::CHAR);
      setState(200);
      match(ExprParser::T__22);
      setState(201);
      match(ExprParser::T__23);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(202);
      match(ExprParser::INT32_T);
      setState(203);
      match(ExprParser::T__22);
      setState(204);
      match(ExprParser::T__23);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(205);
      match(ExprParser::INT64_T);
      setState(206);
      match(ExprParser::T__22);
      setState(207);
      match(ExprParser::T__23);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(208);
      type();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RetTypeContext ------------------------------------------------------------------

ExprParser::RetTypeContext::RetTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::TypeContext* ExprParser::RetTypeContext::type() {
  return getRuleContext<ExprParser::TypeContext>(0);
}

tree::TerminalNode* ExprParser::RetTypeContext::VOID() {
  return getToken(ExprParser::VOID, 0);
}


size_t ExprParser::RetTypeContext::getRuleIndex() const {
  return ExprParser::RuleRetType;
}

antlrcpp::Any ExprParser::RetTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitRetType(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::RetTypeContext* ExprParser::retType() {
  RetTypeContext *_localctx = _tracker.createInstance<RetTypeContext>(_ctx, getState());
  enterRule(_localctx, 28, ExprParser::RuleRetType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(213);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::CHAR:
      case ExprParser::INT32_T:
      case ExprParser::INT64_T: {
        enterOuterAlt(_localctx, 1);
        setState(211);
        type();
        break;
      }

      case ExprParser::VOID: {
        enterOuterAlt(_localctx, 2);
        setState(212);
        match(ExprParser::VOID);
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

//----------------- SigParamsContext ------------------------------------------------------------------

ExprParser::SigParamsContext::SigParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::SigDeclareContext *> ExprParser::SigParamsContext::sigDeclare() {
  return getRuleContexts<ExprParser::SigDeclareContext>();
}

ExprParser::SigDeclareContext* ExprParser::SigParamsContext::sigDeclare(size_t i) {
  return getRuleContext<ExprParser::SigDeclareContext>(i);
}


size_t ExprParser::SigParamsContext::getRuleIndex() const {
  return ExprParser::RuleSigParams;
}

antlrcpp::Any ExprParser::SigParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitSigParams(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::SigParamsContext* ExprParser::sigParams() {
  SigParamsContext *_localctx = _tracker.createInstance<SigParamsContext>(_ctx, getState());
  enterRule(_localctx, 30, ExprParser::RuleSigParams);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(215);
    sigDeclare();
    setState(220);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::T__24) {
      setState(216);
      match(ExprParser::T__24);
      setState(217);
      sigDeclare();
      setState(222);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SigDeclareContext ------------------------------------------------------------------

ExprParser::SigDeclareContext::SigDeclareContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::SigTypeContext* ExprParser::SigDeclareContext::sigType() {
  return getRuleContext<ExprParser::SigTypeContext>(0);
}

ExprParser::NameContext* ExprParser::SigDeclareContext::name() {
  return getRuleContext<ExprParser::NameContext>(0);
}


size_t ExprParser::SigDeclareContext::getRuleIndex() const {
  return ExprParser::RuleSigDeclare;
}

antlrcpp::Any ExprParser::SigDeclareContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitSigDeclare(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::SigDeclareContext* ExprParser::sigDeclare() {
  SigDeclareContext *_localctx = _tracker.createInstance<SigDeclareContext>(_ctx, getState());
  enterRule(_localctx, 32, ExprParser::RuleSigDeclare);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    sigType();
    setState(224);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamsContext ------------------------------------------------------------------

ExprParser::ParamsContext::ParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::ExprContext *> ExprParser::ParamsContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::ParamsContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}


size_t ExprParser::ParamsContext::getRuleIndex() const {
  return ExprParser::RuleParams;
}

antlrcpp::Any ExprParser::ParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitParams(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ParamsContext* ExprParser::params() {
  ParamsContext *_localctx = _tracker.createInstance<ParamsContext>(_ctx, getState());
  enterRule(_localctx, 34, ExprParser::RuleParams);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(226);
    expr(0);
    setState(231);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::T__24) {
      setState(227);
      match(ExprParser::T__24);
      setState(228);
      expr(0);
      setState(233);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValContext ------------------------------------------------------------------

ExprParser::ValContext::ValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::NameContext* ExprParser::ValContext::name() {
  return getRuleContext<ExprParser::NameContext>(0);
}

tree::TerminalNode* ExprParser::ValContext::NUMBER() {
  return getToken(ExprParser::NUMBER, 0);
}

tree::TerminalNode* ExprParser::ValContext::CHARACTER() {
  return getToken(ExprParser::CHARACTER, 0);
}


size_t ExprParser::ValContext::getRuleIndex() const {
  return ExprParser::RuleVal;
}

antlrcpp::Any ExprParser::ValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVal(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ValContext* ExprParser::val() {
  ValContext *_localctx = _tracker.createInstance<ValContext>(_ctx, getState());
  enterRule(_localctx, 36, ExprParser::RuleVal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(237);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::NAME: {
        enterOuterAlt(_localctx, 1);
        setState(234);
        name();
        break;
      }

      case ExprParser::NUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(235);
        match(ExprParser::NUMBER);
        break;
      }

      case ExprParser::CHARACTER: {
        enterOuterAlt(_localctx, 3);
        setState(236);
        match(ExprParser::CHARACTER);
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

//----------------- NameContext ------------------------------------------------------------------

ExprParser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::NameContext::NAME() {
  return getToken(ExprParser::NAME, 0);
}

ExprParser::ExprContext* ExprParser::NameContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}


size_t ExprParser::NameContext::getRuleIndex() const {
  return ExprParser::RuleName;
}

antlrcpp::Any ExprParser::NameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitName(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::NameContext* ExprParser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 38, ExprParser::RuleName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(239);
    match(ExprParser::NAME);
    setState(245);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      setState(240);
      match(ExprParser::T__22);
      setState(242);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ExprParser::T__3)
        | (1ULL << ExprParser::T__4)
        | (1ULL << ExprParser::T__5)
        | (1ULL << ExprParser::T__16)
        | (1ULL << ExprParser::T__18)
        | (1ULL << ExprParser::FUNCTION_NAME)
        | (1ULL << ExprParser::NAME)
        | (1ULL << ExprParser::CHARACTER)
        | (1ULL << ExprParser::NUMBER))) != 0)) {
        setState(241);
        expr(0);
      }
      setState(244);
      match(ExprParser::T__23);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool ExprParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 0: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ExprParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 23);
    case 1: return precpred(_ctx, 22);
    case 2: return precpred(_ctx, 21);
    case 3: return precpred(_ctx, 18);
    case 4: return precpred(_ctx, 14);
    case 5: return precpred(_ctx, 12);
    case 6: return precpred(_ctx, 11);
    case 7: return precpred(_ctx, 10);
    case 8: return precpred(_ctx, 9);
    case 9: return precpred(_ctx, 8);
    case 10: return precpred(_ctx, 7);
    case 11: return precpred(_ctx, 6);
    case 12: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> ExprParser::_decisionToDFA;
atn::PredictionContextCache ExprParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ExprParser::_atn;
std::vector<uint16_t> ExprParser::_serializedATN;

std::vector<std::string> ExprParser::_ruleNames = {
  "expr", "program", "globalVar", "function", "blockFunction", "instruction", 
  "returnStatement", "ifStatement", "elseStatement", "whileStatement", "block", 
  "declare", "type", "sigType", "retType", "sigParams", "sigDeclare", "params", 
  "val", "name"
};

std::vector<std::string> ExprParser::_literalNames = {
  "", "'*'", "'/'", "'+'", "'++'", "'-'", "'--'", "'%'", "'='", "'=='", 
  "'!='", "'>'", "'>='", "'<'", "'<='", "'||'", "'&&'", "'('", "')'", "'!'", 
  "'{'", "';'", "'}'", "'['", "']'", "','", "", "", "", "", "", "'char'", 
  "'int32_t'", "'int64_t'", "'if'", "'else'", "'return'", "'while'", "'void'"
};

std::vector<std::string> ExprParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "FUNCTION_NAME", "NAME", "STRING", "CHARACTER", 
  "NUMBER", "CHAR", "INT32_T", "INT64_T", "IF", "ELSE", "RETURN", "WHILE", 
  "VOID"
};

dfa::Vocabulary ExprParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ExprParser::_tokenNames;

ExprParser::Initializer::Initializer() {
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
    0x3, 0x28, 0xfa, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x45, 
    0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x49, 0xa, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x72, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
    0x75, 0xb, 0x2, 0x3, 0x3, 0x7, 0x3, 0x78, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 
    0x7b, 0xb, 0x3, 0x3, 0x3, 0x7, 0x3, 0x7e, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 
    0x81, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x8b, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x93, 0xa, 0x6, 0xc, 
    0x6, 0xe, 0x6, 0x96, 0xb, 0x6, 0x3, 0x6, 0x7, 0x6, 0x99, 0xa, 0x6, 0xc, 
    0x6, 0xe, 0x6, 0x9c, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0xa6, 0xa, 0x7, 0x3, 
    0x8, 0x3, 0x8, 0x5, 0x8, 0xaa, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x5, 0x9, 0xb0, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x5, 0xa, 0xb6, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0xbe, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0xc1, 
    0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xd4, 0xa, 0xf, 0x3, 
    0x10, 0x3, 0x10, 0x5, 0x10, 0xd8, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x7, 0x11, 0xdd, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xe0, 0xb, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 
    0x13, 0xe8, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0xeb, 0xb, 0x13, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0xf0, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x5, 0x15, 0xf5, 0xa, 0x15, 0x3, 0x15, 0x5, 0x15, 0xf8, 0xa, 
    0x15, 0x3, 0x15, 0x2, 0x3, 0x2, 0x16, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
    0x26, 0x28, 0x2, 0x3, 0x3, 0x2, 0x21, 0x23, 0x2, 0x112, 0x2, 0x48, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x79, 0x3, 0x2, 0x2, 0x2, 0x6, 0x82, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x87, 0x3, 0x2, 0x2, 0x2, 0xa, 0x8e, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0xa5, 0x3, 0x2, 0x2, 0x2, 0xe, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x10, 0xab, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x14, 0xb7, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x18, 0xc4, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xd3, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x20, 0xd9, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0xe1, 0x3, 0x2, 0x2, 0x2, 0x24, 0xe4, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0xef, 0x3, 0x2, 0x2, 0x2, 0x28, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 
    0x8, 0x2, 0x1, 0x2, 0x2b, 0x2c, 0x5, 0x28, 0x15, 0x2, 0x2c, 0x2d, 0x7, 
    0x6, 0x2, 0x2, 0x2d, 0x49, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x7, 0x6, 
    0x2, 0x2, 0x2f, 0x49, 0x5, 0x28, 0x15, 0x2, 0x30, 0x31, 0x7, 0x7, 0x2, 
    0x2, 0x31, 0x49, 0x5, 0x2, 0x2, 0x13, 0x32, 0x33, 0x5, 0x28, 0x15, 0x2, 
    0x33, 0x34, 0x7, 0x8, 0x2, 0x2, 0x34, 0x49, 0x3, 0x2, 0x2, 0x2, 0x35, 
    0x36, 0x7, 0x8, 0x2, 0x2, 0x36, 0x49, 0x5, 0x28, 0x15, 0x2, 0x37, 0x38, 
    0x5, 0x28, 0x15, 0x2, 0x38, 0x39, 0x7, 0xa, 0x2, 0x2, 0x39, 0x3a, 0x5, 
    0x2, 0x2, 0xf, 0x3a, 0x49, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3c, 0x7, 0x13, 
    0x2, 0x2, 0x3c, 0x3d, 0x5, 0x2, 0x2, 0x2, 0x3d, 0x3e, 0x7, 0x14, 0x2, 
    0x2, 0x3e, 0x49, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x7, 0x15, 0x2, 0x2, 
    0x40, 0x49, 0x5, 0x2, 0x2, 0x5, 0x41, 0x42, 0x7, 0x1c, 0x2, 0x2, 0x42, 
    0x44, 0x7, 0x13, 0x2, 0x2, 0x43, 0x45, 0x5, 0x24, 0x13, 0x2, 0x44, 0x43, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x49, 0x7, 0x14, 0x2, 0x2, 0x47, 0x49, 0x5, 0x26, 
    0x14, 0x2, 0x48, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x48, 0x2e, 0x3, 0x2, 0x2, 
    0x2, 0x48, 0x30, 0x3, 0x2, 0x2, 0x2, 0x48, 0x32, 0x3, 0x2, 0x2, 0x2, 
    0x48, 0x35, 0x3, 0x2, 0x2, 0x2, 0x48, 0x37, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x3b, 0x3, 0x2, 0x2, 0x2, 0x48, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x48, 0x41, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0x47, 0x3, 0x2, 0x2, 0x2, 0x49, 0x73, 0x3, 
    0x2, 0x2, 0x2, 0x4a, 0x4b, 0xc, 0x19, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x3, 
    0x2, 0x2, 0x4c, 0x72, 0x5, 0x2, 0x2, 0x1a, 0x4d, 0x4e, 0xc, 0x18, 0x2, 
    0x2, 0x4e, 0x4f, 0x7, 0x4, 0x2, 0x2, 0x4f, 0x72, 0x5, 0x2, 0x2, 0x19, 
    0x50, 0x51, 0xc, 0x17, 0x2, 0x2, 0x51, 0x52, 0x7, 0x5, 0x2, 0x2, 0x52, 
    0x72, 0x5, 0x2, 0x2, 0x18, 0x53, 0x54, 0xc, 0x14, 0x2, 0x2, 0x54, 0x55, 
    0x7, 0x7, 0x2, 0x2, 0x55, 0x72, 0x5, 0x2, 0x2, 0x15, 0x56, 0x57, 0xc, 
    0x10, 0x2, 0x2, 0x57, 0x58, 0x7, 0x9, 0x2, 0x2, 0x58, 0x72, 0x5, 0x2, 
    0x2, 0x11, 0x59, 0x5a, 0xc, 0xe, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0xb, 0x2, 
    0x2, 0x5b, 0x72, 0x5, 0x2, 0x2, 0xf, 0x5c, 0x5d, 0xc, 0xd, 0x2, 0x2, 
    0x5d, 0x5e, 0x7, 0xc, 0x2, 0x2, 0x5e, 0x72, 0x5, 0x2, 0x2, 0xe, 0x5f, 
    0x60, 0xc, 0xc, 0x2, 0x2, 0x60, 0x61, 0x7, 0xd, 0x2, 0x2, 0x61, 0x72, 
    0x5, 0x2, 0x2, 0xd, 0x62, 0x63, 0xc, 0xb, 0x2, 0x2, 0x63, 0x64, 0x7, 
    0xe, 0x2, 0x2, 0x64, 0x72, 0x5, 0x2, 0x2, 0xc, 0x65, 0x66, 0xc, 0xa, 
    0x2, 0x2, 0x66, 0x67, 0x7, 0xf, 0x2, 0x2, 0x67, 0x72, 0x5, 0x2, 0x2, 
    0xb, 0x68, 0x69, 0xc, 0x9, 0x2, 0x2, 0x69, 0x6a, 0x7, 0x10, 0x2, 0x2, 
    0x6a, 0x72, 0x5, 0x2, 0x2, 0xa, 0x6b, 0x6c, 0xc, 0x8, 0x2, 0x2, 0x6c, 
    0x6d, 0x7, 0x11, 0x2, 0x2, 0x6d, 0x72, 0x5, 0x2, 0x2, 0x9, 0x6e, 0x6f, 
    0xc, 0x7, 0x2, 0x2, 0x6f, 0x70, 0x7, 0x12, 0x2, 0x2, 0x70, 0x72, 0x5, 
    0x2, 0x2, 0x8, 0x71, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x71, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0x71, 0x50, 0x3, 0x2, 0x2, 0x2, 0x71, 0x53, 0x3, 0x2, 0x2, 
    0x2, 0x71, 0x56, 0x3, 0x2, 0x2, 0x2, 0x71, 0x59, 0x3, 0x2, 0x2, 0x2, 
    0x71, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x71, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x71, 
    0x62, 0x3, 0x2, 0x2, 0x2, 0x71, 0x65, 0x3, 0x2, 0x2, 0x2, 0x71, 0x68, 
    0x3, 0x2, 0x2, 0x2, 0x71, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x71, 0x6e, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x75, 0x3, 0x2, 0x2, 0x2, 0x73, 0x71, 0x3, 0x2, 
    0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 0x76, 0x78, 0x5, 0x6, 0x4, 0x2, 
    0x77, 0x76, 0x3, 0x2, 0x2, 0x2, 0x78, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x79, 
    0x77, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7f, 
    0x3, 0x2, 0x2, 0x2, 0x7b, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7e, 0x5, 
    0x8, 0x5, 0x2, 0x7d, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x81, 0x3, 0x2, 
    0x2, 0x2, 0x7f, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x3, 0x2, 0x2, 
    0x2, 0x80, 0x5, 0x3, 0x2, 0x2, 0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 
    0x82, 0x83, 0x5, 0x1a, 0xe, 0x2, 0x83, 0x84, 0x5, 0x28, 0x15, 0x2, 0x84, 
    0x85, 0x7, 0xa, 0x2, 0x2, 0x85, 0x86, 0x5, 0x26, 0x14, 0x2, 0x86, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x5, 0x1e, 0x10, 0x2, 0x88, 0x8a, 0x7, 
    0x1c, 0x2, 0x2, 0x89, 0x8b, 0x5, 0x20, 0x11, 0x2, 0x8a, 0x89, 0x3, 0x2, 
    0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 
    0x2, 0x8c, 0x8d, 0x5, 0xa, 0x6, 0x2, 0x8d, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x8e, 0x94, 0x7, 0x16, 0x2, 0x2, 0x8f, 0x90, 0x5, 0x18, 0xd, 0x2, 0x90, 
    0x91, 0x7, 0x17, 0x2, 0x2, 0x91, 0x93, 0x3, 0x2, 0x2, 0x2, 0x92, 0x8f, 
    0x3, 0x2, 0x2, 0x2, 0x93, 0x96, 0x3, 0x2, 0x2, 0x2, 0x94, 0x92, 0x3, 
    0x2, 0x2, 0x2, 0x94, 0x95, 0x3, 0x2, 0x2, 0x2, 0x95, 0x9a, 0x3, 0x2, 
    0x2, 0x2, 0x96, 0x94, 0x3, 0x2, 0x2, 0x2, 0x97, 0x99, 0x5, 0xc, 0x7, 
    0x2, 0x98, 0x97, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9c, 0x3, 0x2, 0x2, 0x2, 
    0x9a, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9b, 
    0x9d, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 
    0x7, 0x18, 0x2, 0x2, 0x9e, 0xb, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x5, 
    0x2, 0x2, 0x2, 0xa0, 0xa1, 0x7, 0x17, 0x2, 0x2, 0xa1, 0xa6, 0x3, 0x2, 
    0x2, 0x2, 0xa2, 0xa6, 0x5, 0x10, 0x9, 0x2, 0xa3, 0xa6, 0x5, 0x14, 0xb, 
    0x2, 0xa4, 0xa6, 0x5, 0xe, 0x8, 0x2, 0xa5, 0x9f, 0x3, 0x2, 0x2, 0x2, 
    0xa5, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa5, 
    0xa4, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xd, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa9, 
    0x7, 0x26, 0x2, 0x2, 0xa8, 0xaa, 0x5, 0x26, 0x14, 0x2, 0xa9, 0xa8, 0x3, 
    0x2, 0x2, 0x2, 0xa9, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0xab, 0xac, 0x7, 0x24, 0x2, 0x2, 0xac, 0xad, 0x5, 0x2, 0x2, 
    0x2, 0xad, 0xaf, 0x5, 0x16, 0xc, 0x2, 0xae, 0xb0, 0x5, 0x12, 0xa, 0x2, 
    0xaf, 0xae, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb0, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x7, 0x25, 0x2, 0x2, 0xb2, 0xb6, 
    0x5, 0x16, 0xc, 0x2, 0xb3, 0xb4, 0x7, 0x25, 0x2, 0x2, 0xb4, 0xb6, 0x5, 
    0x10, 0x9, 0x2, 0xb5, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb3, 0x3, 0x2, 
    0x2, 0x2, 0xb6, 0x13, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x7, 0x27, 0x2, 
    0x2, 0xb8, 0xb9, 0x5, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x5, 0x16, 0xc, 0x2, 
    0xba, 0x15, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbf, 0x7, 0x16, 0x2, 0x2, 0xbc, 
    0xbe, 0x5, 0xc, 0x7, 0x2, 0xbd, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xc1, 
    0x3, 0x2, 0x2, 0x2, 0xbf, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x3, 
    0x2, 0x2, 0x2, 0xc0, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xbf, 0x3, 0x2, 
    0x2, 0x2, 0xc2, 0xc3, 0x7, 0x18, 0x2, 0x2, 0xc3, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0xc4, 0xc5, 0x5, 0x1a, 0xe, 0x2, 0xc5, 0xc6, 0x5, 0x28, 0x15, 0x2, 
    0xc6, 0x19, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x9, 0x2, 0x2, 0x2, 0xc8, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x7, 0x21, 0x2, 0x2, 0xca, 0xcb, 
    0x7, 0x19, 0x2, 0x2, 0xcb, 0xd4, 0x7, 0x1a, 0x2, 0x2, 0xcc, 0xcd, 0x7, 
    0x22, 0x2, 0x2, 0xcd, 0xce, 0x7, 0x19, 0x2, 0x2, 0xce, 0xd4, 0x7, 0x1a, 
    0x2, 0x2, 0xcf, 0xd0, 0x7, 0x23, 0x2, 0x2, 0xd0, 0xd1, 0x7, 0x19, 0x2, 
    0x2, 0xd1, 0xd4, 0x7, 0x1a, 0x2, 0x2, 0xd2, 0xd4, 0x5, 0x1a, 0xe, 0x2, 
    0xd3, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xd3, 
    0xcf, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0xd5, 0xd8, 0x5, 0x1a, 0xe, 0x2, 0xd6, 0xd8, 0x7, 
    0x28, 0x2, 0x2, 0xd7, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd6, 0x3, 0x2, 
    0x2, 0x2, 0xd8, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xde, 0x5, 0x22, 0x12, 
    0x2, 0xda, 0xdb, 0x7, 0x1b, 0x2, 0x2, 0xdb, 0xdd, 0x5, 0x22, 0x12, 0x2, 
    0xdc, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xde, 
    0xdc, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xdf, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0xe0, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x5, 
    0x1c, 0xf, 0x2, 0xe2, 0xe3, 0x5, 0x28, 0x15, 0x2, 0xe3, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0xe4, 0xe9, 0x5, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0x7, 0x1b, 0x2, 
    0x2, 0xe6, 0xe8, 0x5, 0x2, 0x2, 0x2, 0xe7, 0xe5, 0x3, 0x2, 0x2, 0x2, 
    0xe8, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe9, 
    0xea, 0x3, 0x2, 0x2, 0x2, 0xea, 0x25, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xe9, 
    0x3, 0x2, 0x2, 0x2, 0xec, 0xf0, 0x5, 0x28, 0x15, 0x2, 0xed, 0xf0, 0x7, 
    0x20, 0x2, 0x2, 0xee, 0xf0, 0x7, 0x1f, 0x2, 0x2, 0xef, 0xec, 0x3, 0x2, 
    0x2, 0x2, 0xef, 0xed, 0x3, 0x2, 0x2, 0x2, 0xef, 0xee, 0x3, 0x2, 0x2, 
    0x2, 0xf0, 0x27, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf7, 0x7, 0x1d, 0x2, 0x2, 
    0xf2, 0xf4, 0x7, 0x19, 0x2, 0x2, 0xf3, 0xf5, 0x5, 0x2, 0x2, 0x2, 0xf4, 
    0xf3, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 
    0x3, 0x2, 0x2, 0x2, 0xf6, 0xf8, 0x7, 0x1a, 0x2, 0x2, 0xf7, 0xf2, 0x3, 
    0x2, 0x2, 0x2, 0xf7, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0x17, 0x44, 0x48, 0x71, 0x73, 0x79, 0x7f, 0x8a, 0x94, 0x9a, 
    0xa5, 0xa9, 0xaf, 0xb5, 0xbf, 0xd3, 0xd7, 0xde, 0xe9, 0xef, 0xf4, 0xf7, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ExprParser::Initializer ExprParser::_init;
