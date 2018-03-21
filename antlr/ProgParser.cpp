
// Generated from Prog.g4 by ANTLR 4.7.1


#include "ProgVisitor.h"

#include "ProgParser.h"


using namespace antlrcpp;
using namespace antlr4;

ProgParser::ProgParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ProgParser::~ProgParser() {
  delete _interpreter;
}

std::string ProgParser::getGrammarFileName() const {
  return "Prog.g4";
}

const std::vector<std::string>& ProgParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ProgParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

ProgParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ProgParser::GlobalVarContext *> ProgParser::ProgramContext::globalVar() {
  return getRuleContexts<ProgParser::GlobalVarContext>();
}

ProgParser::GlobalVarContext* ProgParser::ProgramContext::globalVar(size_t i) {
  return getRuleContext<ProgParser::GlobalVarContext>(i);
}

std::vector<ProgParser::FunctionContext *> ProgParser::ProgramContext::function() {
  return getRuleContexts<ProgParser::FunctionContext>();
}

ProgParser::FunctionContext* ProgParser::ProgramContext::function(size_t i) {
  return getRuleContext<ProgParser::FunctionContext>(i);
}


size_t ProgParser::ProgramContext::getRuleIndex() const {
  return ProgParser::RuleProgram;
}

antlrcpp::Any ProgParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

ProgParser::ProgramContext* ProgParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, ProgParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(43);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(40);
        globalVar(); 
      }
      setState(45);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(49);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ProgParser::CHAR)
      | (1ULL << ProgParser::INT32_T)
      | (1ULL << ProgParser::INT64_T)
      | (1ULL << ProgParser::VOID))) != 0)) {
      setState(46);
      function();
      setState(51);
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

ProgParser::GlobalVarContext::GlobalVarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ProgParser::TypeContext* ProgParser::GlobalVarContext::type() {
  return getRuleContext<ProgParser::TypeContext>(0);
}

ProgParser::NameContext* ProgParser::GlobalVarContext::name() {
  return getRuleContext<ProgParser::NameContext>(0);
}

ProgParser::ValContext* ProgParser::GlobalVarContext::val() {
  return getRuleContext<ProgParser::ValContext>(0);
}


size_t ProgParser::GlobalVarContext::getRuleIndex() const {
  return ProgParser::RuleGlobalVar;
}

antlrcpp::Any ProgParser::GlobalVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitGlobalVar(this);
  else
    return visitor->visitChildren(this);
}

ProgParser::GlobalVarContext* ProgParser::globalVar() {
  GlobalVarContext *_localctx = _tracker.createInstance<GlobalVarContext>(_ctx, getState());
  enterRule(_localctx, 2, ProgParser::RuleGlobalVar);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    type();
    setState(53);
    name();
    setState(54);
    match(ProgParser::T__0);
    setState(55);
    val();
    setState(56);
    match(ProgParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

ProgParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ProgParser::RetTypeContext* ProgParser::FunctionContext::retType() {
  return getRuleContext<ProgParser::RetTypeContext>(0);
}

tree::TerminalNode* ProgParser::FunctionContext::NAME() {
  return getToken(ProgParser::NAME, 0);
}

ProgParser::BlockFunctionContext* ProgParser::FunctionContext::blockFunction() {
  return getRuleContext<ProgParser::BlockFunctionContext>(0);
}

ProgParser::SigParamsContext* ProgParser::FunctionContext::sigParams() {
  return getRuleContext<ProgParser::SigParamsContext>(0);
}


size_t ProgParser::FunctionContext::getRuleIndex() const {
  return ProgParser::RuleFunction;
}

antlrcpp::Any ProgParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

ProgParser::FunctionContext* ProgParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 4, ProgParser::RuleFunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    retType();
    setState(59);
    match(ProgParser::NAME);
    setState(60);
    match(ProgParser::T__2);
    setState(62);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ProgParser::CHAR)
      | (1ULL << ProgParser::INT32_T)
      | (1ULL << ProgParser::INT64_T))) != 0)) {
      setState(61);
      sigParams();
    }
    setState(64);
    match(ProgParser::T__3);
    setState(65);
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

ProgParser::BlockFunctionContext::BlockFunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ProgParser::DeclareContext *> ProgParser::BlockFunctionContext::declare() {
  return getRuleContexts<ProgParser::DeclareContext>();
}

ProgParser::DeclareContext* ProgParser::BlockFunctionContext::declare(size_t i) {
  return getRuleContext<ProgParser::DeclareContext>(i);
}

std::vector<ProgParser::InstructionContext *> ProgParser::BlockFunctionContext::instruction() {
  return getRuleContexts<ProgParser::InstructionContext>();
}

ProgParser::InstructionContext* ProgParser::BlockFunctionContext::instruction(size_t i) {
  return getRuleContext<ProgParser::InstructionContext>(i);
}


size_t ProgParser::BlockFunctionContext::getRuleIndex() const {
  return ProgParser::RuleBlockFunction;
}

antlrcpp::Any ProgParser::BlockFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitBlockFunction(this);
  else
    return visitor->visitChildren(this);
}

ProgParser::BlockFunctionContext* ProgParser::blockFunction() {
  BlockFunctionContext *_localctx = _tracker.createInstance<BlockFunctionContext>(_ctx, getState());
  enterRule(_localctx, 6, ProgParser::RuleBlockFunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    match(ProgParser::T__4);
    setState(73);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ProgParser::CHAR)
      | (1ULL << ProgParser::INT32_T)
      | (1ULL << ProgParser::INT64_T))) != 0)) {
      setState(68);
      declare();
      setState(69);
      match(ProgParser::T__1);
      setState(75);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(79);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ProgParser::T__2)
      | (1ULL << ProgParser::T__12)
      | (1ULL << ProgParser::T__13)
      | (1ULL << ProgParser::T__14)
      | (1ULL << ProgParser::T__24)
      | (1ULL << ProgParser::IF)
      | (1ULL << ProgParser::RETURN)
      | (1ULL << ProgParser::WHILE)
      | (1ULL << ProgParser::NAME)
      | (1ULL << ProgParser::CHARACTER)
      | (1ULL << ProgParser::NUMBER))) != 0)) {
      setState(76);
      instruction();
      setState(81);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(82);
    match(ProgParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

ProgParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ProgParser::ExprContext* ProgParser::InstructionContext::expr() {
  return getRuleContext<ProgParser::ExprContext>(0);
}

ProgParser::IfStatementContext* ProgParser::InstructionContext::ifStatement() {
  return getRuleContext<ProgParser::IfStatementContext>(0);
}

ProgParser::WhileStatementContext* ProgParser::InstructionContext::whileStatement() {
  return getRuleContext<ProgParser::WhileStatementContext>(0);
}

ProgParser::ReturnStatementContext* ProgParser::InstructionContext::returnStatement() {
  return getRuleContext<ProgParser::ReturnStatementContext>(0);
}


size_t ProgParser::InstructionContext::getRuleIndex() const {
  return ProgParser::RuleInstruction;
}

antlrcpp::Any ProgParser::InstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitInstruction(this);
  else
    return visitor->visitChildren(this);
}

ProgParser::InstructionContext* ProgParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 8, ProgParser::RuleInstruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(90);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ProgParser::T__2:
      case ProgParser::T__12:
      case ProgParser::T__13:
      case ProgParser::T__14:
      case ProgParser::T__24:
      case ProgParser::NAME:
      case ProgParser::CHARACTER:
      case ProgParser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(84);
        expr(0);
        setState(85);
        match(ProgParser::T__1);
        break;
      }

      case ProgParser::IF: {
        enterOuterAlt(_localctx, 2);
        setState(87);
        ifStatement();
        break;
      }

      case ProgParser::WHILE: {
        enterOuterAlt(_localctx, 3);
        setState(88);
        whileStatement();
        break;
      }

      case ProgParser::RETURN: {
        enterOuterAlt(_localctx, 4);
        setState(89);
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

ProgParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ProgParser::ReturnStatementContext::RETURN() {
  return getToken(ProgParser::RETURN, 0);
}

ProgParser::ValContext* ProgParser::ReturnStatementContext::val() {
  return getRuleContext<ProgParser::ValContext>(0);
}


size_t ProgParser::ReturnStatementContext::getRuleIndex() const {
  return ProgParser::RuleReturnStatement;
}

antlrcpp::Any ProgParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

ProgParser::ReturnStatementContext* ProgParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 10, ProgParser::RuleReturnStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    match(ProgParser::RETURN);
    setState(94);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(93);
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

ProgParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ProgParser::IfStatementContext::IF() {
  return getToken(ProgParser::IF, 0);
}

ProgParser::BlockContext* ProgParser::IfStatementContext::block() {
  return getRuleContext<ProgParser::BlockContext>(0);
}

ProgParser::ExprContext* ProgParser::IfStatementContext::expr() {
  return getRuleContext<ProgParser::ExprContext>(0);
}

ProgParser::ElseStatementContext* ProgParser::IfStatementContext::elseStatement() {
  return getRuleContext<ProgParser::ElseStatementContext>(0);
}


size_t ProgParser::IfStatementContext::getRuleIndex() const {
  return ProgParser::RuleIfStatement;
}

antlrcpp::Any ProgParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

ProgParser::IfStatementContext* ProgParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 12, ProgParser::RuleIfStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    match(ProgParser::IF);

    setState(97);
    expr(0);
    setState(98);
    block();
    setState(100);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ProgParser::ELSE) {
      setState(99);
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

ProgParser::ElseStatementContext::ElseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ProgParser::ElseStatementContext::ELSE() {
  return getToken(ProgParser::ELSE, 0);
}

ProgParser::BlockContext* ProgParser::ElseStatementContext::block() {
  return getRuleContext<ProgParser::BlockContext>(0);
}

ProgParser::IfStatementContext* ProgParser::ElseStatementContext::ifStatement() {
  return getRuleContext<ProgParser::IfStatementContext>(0);
}


size_t ProgParser::ElseStatementContext::getRuleIndex() const {
  return ProgParser::RuleElseStatement;
}

antlrcpp::Any ProgParser::ElseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitElseStatement(this);
  else
    return visitor->visitChildren(this);
}

ProgParser::ElseStatementContext* ProgParser::elseStatement() {
  ElseStatementContext *_localctx = _tracker.createInstance<ElseStatementContext>(_ctx, getState());
  enterRule(_localctx, 14, ProgParser::RuleElseStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(106);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(102);
      match(ProgParser::ELSE);
      setState(103);
      block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(104);
      match(ProgParser::ELSE);
      setState(105);
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

ProgParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ProgParser::WhileStatementContext::WHILE() {
  return getToken(ProgParser::WHILE, 0);
}

ProgParser::BlockContext* ProgParser::WhileStatementContext::block() {
  return getRuleContext<ProgParser::BlockContext>(0);
}

ProgParser::ExprContext* ProgParser::WhileStatementContext::expr() {
  return getRuleContext<ProgParser::ExprContext>(0);
}


size_t ProgParser::WhileStatementContext::getRuleIndex() const {
  return ProgParser::RuleWhileStatement;
}

antlrcpp::Any ProgParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

ProgParser::WhileStatementContext* ProgParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 16, ProgParser::RuleWhileStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(108);
    match(ProgParser::WHILE);

    setState(109);
    expr(0);
    setState(110);
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

ProgParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ProgParser::InstructionContext *> ProgParser::BlockContext::instruction() {
  return getRuleContexts<ProgParser::InstructionContext>();
}

ProgParser::InstructionContext* ProgParser::BlockContext::instruction(size_t i) {
  return getRuleContext<ProgParser::InstructionContext>(i);
}


size_t ProgParser::BlockContext::getRuleIndex() const {
  return ProgParser::RuleBlock;
}

antlrcpp::Any ProgParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

ProgParser::BlockContext* ProgParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 18, ProgParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    match(ProgParser::T__4);
    setState(116);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ProgParser::T__2)
      | (1ULL << ProgParser::T__12)
      | (1ULL << ProgParser::T__13)
      | (1ULL << ProgParser::T__14)
      | (1ULL << ProgParser::T__24)
      | (1ULL << ProgParser::IF)
      | (1ULL << ProgParser::RETURN)
      | (1ULL << ProgParser::WHILE)
      | (1ULL << ProgParser::NAME)
      | (1ULL << ProgParser::CHARACTER)
      | (1ULL << ProgParser::NUMBER))) != 0)) {
      setState(113);
      instruction();
      setState(118);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(119);
    match(ProgParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclareContext ------------------------------------------------------------------

ProgParser::DeclareContext::DeclareContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ProgParser::TypeContext* ProgParser::DeclareContext::type() {
  return getRuleContext<ProgParser::TypeContext>(0);
}

ProgParser::NameContext* ProgParser::DeclareContext::name() {
  return getRuleContext<ProgParser::NameContext>(0);
}


size_t ProgParser::DeclareContext::getRuleIndex() const {
  return ProgParser::RuleDeclare;
}

antlrcpp::Any ProgParser::DeclareContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitDeclare(this);
  else
    return visitor->visitChildren(this);
}

ProgParser::DeclareContext* ProgParser::declare() {
  DeclareContext *_localctx = _tracker.createInstance<DeclareContext>(_ctx, getState());
  enterRule(_localctx, 20, ProgParser::RuleDeclare);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    type();
    setState(122);
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

ProgParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ProgParser::TypeContext::CHAR() {
  return getToken(ProgParser::CHAR, 0);
}

tree::TerminalNode* ProgParser::TypeContext::INT32_T() {
  return getToken(ProgParser::INT32_T, 0);
}

tree::TerminalNode* ProgParser::TypeContext::INT64_T() {
  return getToken(ProgParser::INT64_T, 0);
}


size_t ProgParser::TypeContext::getRuleIndex() const {
  return ProgParser::RuleType;
}

antlrcpp::Any ProgParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

ProgParser::TypeContext* ProgParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 22, ProgParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(124);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ProgParser::CHAR)
      | (1ULL << ProgParser::INT32_T)
      | (1ULL << ProgParser::INT64_T))) != 0))) {
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

ProgParser::SigTypeContext::SigTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ProgParser::SigTypeContext::CHAR() {
  return getToken(ProgParser::CHAR, 0);
}

tree::TerminalNode* ProgParser::SigTypeContext::INT32_T() {
  return getToken(ProgParser::INT32_T, 0);
}

tree::TerminalNode* ProgParser::SigTypeContext::INT64_T() {
  return getToken(ProgParser::INT64_T, 0);
}

ProgParser::TypeContext* ProgParser::SigTypeContext::type() {
  return getRuleContext<ProgParser::TypeContext>(0);
}


size_t ProgParser::SigTypeContext::getRuleIndex() const {
  return ProgParser::RuleSigType;
}

antlrcpp::Any ProgParser::SigTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitSigType(this);
  else
    return visitor->visitChildren(this);
}

ProgParser::SigTypeContext* ProgParser::sigType() {
  SigTypeContext *_localctx = _tracker.createInstance<SigTypeContext>(_ctx, getState());
  enterRule(_localctx, 24, ProgParser::RuleSigType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(136);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(126);
      match(ProgParser::CHAR);
      setState(127);
      match(ProgParser::T__6);
      setState(128);
      match(ProgParser::T__7);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(129);
      match(ProgParser::INT32_T);
      setState(130);
      match(ProgParser::T__6);
      setState(131);
      match(ProgParser::T__7);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(132);
      match(ProgParser::INT64_T);
      setState(133);
      match(ProgParser::T__6);
      setState(134);
      match(ProgParser::T__7);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(135);
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

ProgParser::RetTypeContext::RetTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ProgParser::TypeContext* ProgParser::RetTypeContext::type() {
  return getRuleContext<ProgParser::TypeContext>(0);
}

tree::TerminalNode* ProgParser::RetTypeContext::VOID() {
  return getToken(ProgParser::VOID, 0);
}


size_t ProgParser::RetTypeContext::getRuleIndex() const {
  return ProgParser::RuleRetType;
}

antlrcpp::Any ProgParser::RetTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitRetType(this);
  else
    return visitor->visitChildren(this);
}

ProgParser::RetTypeContext* ProgParser::retType() {
  RetTypeContext *_localctx = _tracker.createInstance<RetTypeContext>(_ctx, getState());
  enterRule(_localctx, 26, ProgParser::RuleRetType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(140);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ProgParser::CHAR:
      case ProgParser::INT32_T:
      case ProgParser::INT64_T: {
        enterOuterAlt(_localctx, 1);
        setState(138);
        type();
        break;
      }

      case ProgParser::VOID: {
        enterOuterAlt(_localctx, 2);
        setState(139);
        match(ProgParser::VOID);
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

ProgParser::SigParamsContext::SigParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ProgParser::SigDeclareContext *> ProgParser::SigParamsContext::sigDeclare() {
  return getRuleContexts<ProgParser::SigDeclareContext>();
}

ProgParser::SigDeclareContext* ProgParser::SigParamsContext::sigDeclare(size_t i) {
  return getRuleContext<ProgParser::SigDeclareContext>(i);
}


size_t ProgParser::SigParamsContext::getRuleIndex() const {
  return ProgParser::RuleSigParams;
}

antlrcpp::Any ProgParser::SigParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitSigParams(this);
  else
    return visitor->visitChildren(this);
}

ProgParser::SigParamsContext* ProgParser::sigParams() {
  SigParamsContext *_localctx = _tracker.createInstance<SigParamsContext>(_ctx, getState());
  enterRule(_localctx, 28, ProgParser::RuleSigParams);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    sigDeclare();
    setState(147);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ProgParser::T__8) {
      setState(143);
      match(ProgParser::T__8);
      setState(144);
      sigDeclare();
      setState(149);
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

ProgParser::SigDeclareContext::SigDeclareContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ProgParser::SigTypeContext* ProgParser::SigDeclareContext::sigType() {
  return getRuleContext<ProgParser::SigTypeContext>(0);
}

ProgParser::NameContext* ProgParser::SigDeclareContext::name() {
  return getRuleContext<ProgParser::NameContext>(0);
}


size_t ProgParser::SigDeclareContext::getRuleIndex() const {
  return ProgParser::RuleSigDeclare;
}

antlrcpp::Any ProgParser::SigDeclareContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitSigDeclare(this);
  else
    return visitor->visitChildren(this);
}

ProgParser::SigDeclareContext* ProgParser::sigDeclare() {
  SigDeclareContext *_localctx = _tracker.createInstance<SigDeclareContext>(_ctx, getState());
  enterRule(_localctx, 30, ProgParser::RuleSigDeclare);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    sigType();
    setState(151);
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

ProgParser::ParamsContext::ParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ProgParser::ExprContext *> ProgParser::ParamsContext::expr() {
  return getRuleContexts<ProgParser::ExprContext>();
}

ProgParser::ExprContext* ProgParser::ParamsContext::expr(size_t i) {
  return getRuleContext<ProgParser::ExprContext>(i);
}


size_t ProgParser::ParamsContext::getRuleIndex() const {
  return ProgParser::RuleParams;
}

antlrcpp::Any ProgParser::ParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitParams(this);
  else
    return visitor->visitChildren(this);
}

ProgParser::ParamsContext* ProgParser::params() {
  ParamsContext *_localctx = _tracker.createInstance<ParamsContext>(_ctx, getState());
  enterRule(_localctx, 32, ProgParser::RuleParams);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    expr(0);
    setState(158);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ProgParser::T__8) {
      setState(154);
      match(ProgParser::T__8);
      setState(155);
      expr(0);
      setState(160);
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

ProgParser::ValContext::ValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ProgParser::NameContext* ProgParser::ValContext::name() {
  return getRuleContext<ProgParser::NameContext>(0);
}

tree::TerminalNode* ProgParser::ValContext::NUMBER() {
  return getToken(ProgParser::NUMBER, 0);
}

tree::TerminalNode* ProgParser::ValContext::CHARACTER() {
  return getToken(ProgParser::CHARACTER, 0);
}


size_t ProgParser::ValContext::getRuleIndex() const {
  return ProgParser::RuleVal;
}

antlrcpp::Any ProgParser::ValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitVal(this);
  else
    return visitor->visitChildren(this);
}

ProgParser::ValContext* ProgParser::val() {
  ValContext *_localctx = _tracker.createInstance<ValContext>(_ctx, getState());
  enterRule(_localctx, 34, ProgParser::RuleVal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(164);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ProgParser::NAME: {
        enterOuterAlt(_localctx, 1);
        setState(161);
        name();
        break;
      }

      case ProgParser::NUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(162);
        match(ProgParser::NUMBER);
        break;
      }

      case ProgParser::CHARACTER: {
        enterOuterAlt(_localctx, 3);
        setState(163);
        match(ProgParser::CHARACTER);
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

ProgParser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ProgParser::NameContext::NAME() {
  return getToken(ProgParser::NAME, 0);
}

ProgParser::ExprContext* ProgParser::NameContext::expr() {
  return getRuleContext<ProgParser::ExprContext>(0);
}


size_t ProgParser::NameContext::getRuleIndex() const {
  return ProgParser::RuleName;
}

antlrcpp::Any ProgParser::NameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitName(this);
  else
    return visitor->visitChildren(this);
}

ProgParser::NameContext* ProgParser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 36, ProgParser::RuleName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(166);
    match(ProgParser::NAME);
    setState(172);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(167);
      match(ProgParser::T__6);
      setState(169);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ProgParser::T__2)
        | (1ULL << ProgParser::T__12)
        | (1ULL << ProgParser::T__13)
        | (1ULL << ProgParser::T__14)
        | (1ULL << ProgParser::T__24)
        | (1ULL << ProgParser::NAME)
        | (1ULL << ProgParser::CHARACTER)
        | (1ULL << ProgParser::NUMBER))) != 0)) {
        setState(168);
        expr(0);
      }
      setState(171);
      match(ProgParser::T__7);
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

//----------------- ExprContext ------------------------------------------------------------------

ProgParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ProgParser::ExprContext::getRuleIndex() const {
  return ProgParser::RuleExpr;
}

void ProgParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParContext ------------------------------------------------------------------

ProgParser::ExprContext* ProgParser::ParContext::expr() {
  return getRuleContext<ProgParser::ExprContext>(0);
}

ProgParser::ParContext::ParContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::ParContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitPar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InfContext ------------------------------------------------------------------

std::vector<ProgParser::ExprContext *> ProgParser::InfContext::expr() {
  return getRuleContexts<ProgParser::ExprContext>();
}

ProgParser::ExprContext* ProgParser::InfContext::expr(size_t i) {
  return getRuleContext<ProgParser::ExprContext>(i);
}

ProgParser::InfContext::InfContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::InfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitInf(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NoContext ------------------------------------------------------------------

ProgParser::ExprContext* ProgParser::NoContext::expr() {
  return getRuleContext<ProgParser::ExprContext>(0);
}

ProgParser::NoContext::NoContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::NoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitNo(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MinusContext ------------------------------------------------------------------

std::vector<ProgParser::ExprContext *> ProgParser::MinusContext::expr() {
  return getRuleContexts<ProgParser::ExprContext>();
}

ProgParser::ExprContext* ProgParser::MinusContext::expr(size_t i) {
  return getRuleContext<ProgParser::ExprContext>(i);
}

ProgParser::MinusContext::MinusContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::MinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitMinus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EgalContext ------------------------------------------------------------------

std::vector<ProgParser::ExprContext *> ProgParser::EgalContext::expr() {
  return getRuleContexts<ProgParser::ExprContext>();
}

ProgParser::ExprContext* ProgParser::EgalContext::expr(size_t i) {
  return getRuleContext<ProgParser::ExprContext>(i);
}

ProgParser::EgalContext::EgalContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::EgalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitEgal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultContext ------------------------------------------------------------------

std::vector<ProgParser::ExprContext *> ProgParser::MultContext::expr() {
  return getRuleContexts<ProgParser::ExprContext>();
}

ProgParser::ExprContext* ProgParser::MultContext::expr(size_t i) {
  return getRuleContext<ProgParser::ExprContext>(i);
}

ProgParser::MultContext::MultContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::MultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitMult(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OrContext ------------------------------------------------------------------

std::vector<ProgParser::ExprContext *> ProgParser::OrContext::expr() {
  return getRuleContexts<ProgParser::ExprContext>();
}

ProgParser::ExprContext* ProgParser::OrContext::expr(size_t i) {
  return getRuleContext<ProgParser::ExprContext>(i);
}

ProgParser::OrContext::OrContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::OrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffectContext ------------------------------------------------------------------

ProgParser::NameContext* ProgParser::AffectContext::name() {
  return getRuleContext<ProgParser::NameContext>(0);
}

ProgParser::ExprContext* ProgParser::AffectContext::expr() {
  return getRuleContext<ProgParser::ExprContext>(0);
}

ProgParser::AffectContext::AffectContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::AffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitAffect(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DiffContext ------------------------------------------------------------------

std::vector<ProgParser::ExprContext *> ProgParser::DiffContext::expr() {
  return getRuleContexts<ProgParser::ExprContext>();
}

ProgParser::ExprContext* ProgParser::DiffContext::expr(size_t i) {
  return getRuleContext<ProgParser::ExprContext>(i);
}

ProgParser::DiffContext::DiffContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::DiffContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitDiff(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlusContext ------------------------------------------------------------------

std::vector<ProgParser::ExprContext *> ProgParser::PlusContext::expr() {
  return getRuleContexts<ProgParser::ExprContext>();
}

ProgParser::ExprContext* ProgParser::PlusContext::expr(size_t i) {
  return getRuleContext<ProgParser::ExprContext>(i);
}

ProgParser::PlusContext::PlusContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::PlusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitPlus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SupContext ------------------------------------------------------------------

std::vector<ProgParser::ExprContext *> ProgParser::SupContext::expr() {
  return getRuleContexts<ProgParser::ExprContext>();
}

ProgParser::ExprContext* ProgParser::SupContext::expr(size_t i) {
  return getRuleContext<ProgParser::ExprContext>(i);
}

ProgParser::SupContext::SupContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::SupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitSup(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InvContext ------------------------------------------------------------------

ProgParser::ExprContext* ProgParser::InvContext::expr() {
  return getRuleContext<ProgParser::ExprContext>(0);
}

ProgParser::InvContext::InvContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::InvContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitInv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DivContext ------------------------------------------------------------------

std::vector<ProgParser::ExprContext *> ProgParser::DivContext::expr() {
  return getRuleContexts<ProgParser::ExprContext>();
}

ProgParser::ExprContext* ProgParser::DivContext::expr(size_t i) {
  return getRuleContext<ProgParser::ExprContext>(i);
}

ProgParser::DivContext::DivContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::DivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CallfunctionContext ------------------------------------------------------------------

tree::TerminalNode* ProgParser::CallfunctionContext::NAME() {
  return getToken(ProgParser::NAME, 0);
}

ProgParser::ParamsContext* ProgParser::CallfunctionContext::params() {
  return getRuleContext<ProgParser::ParamsContext>(0);
}

ProgParser::CallfunctionContext::CallfunctionContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::CallfunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitCallfunction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PredecrContext ------------------------------------------------------------------

ProgParser::NameContext* ProgParser::PredecrContext::name() {
  return getRuleContext<ProgParser::NameContext>(0);
}

ProgParser::PredecrContext::PredecrContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::PredecrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitPredecr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreincrContext ------------------------------------------------------------------

ProgParser::NameContext* ProgParser::PreincrContext::name() {
  return getRuleContext<ProgParser::NameContext>(0);
}

ProgParser::PreincrContext::PreincrContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::PreincrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitPreincr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PostdecrContext ------------------------------------------------------------------

ProgParser::NameContext* ProgParser::PostdecrContext::name() {
  return getRuleContext<ProgParser::NameContext>(0);
}

ProgParser::PostdecrContext::PostdecrContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::PostdecrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitPostdecr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SupegalContext ------------------------------------------------------------------

std::vector<ProgParser::ExprContext *> ProgParser::SupegalContext::expr() {
  return getRuleContexts<ProgParser::ExprContext>();
}

ProgParser::ExprContext* ProgParser::SupegalContext::expr(size_t i) {
  return getRuleContext<ProgParser::ExprContext>(i);
}

ProgParser::SupegalContext::SupegalContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::SupegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitSupegal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndContext ------------------------------------------------------------------

std::vector<ProgParser::ExprContext *> ProgParser::AndContext::expr() {
  return getRuleContexts<ProgParser::ExprContext>();
}

ProgParser::ExprContext* ProgParser::AndContext::expr(size_t i) {
  return getRuleContext<ProgParser::ExprContext>(i);
}

ProgParser::AndContext::AndContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::AndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PostincrContext ------------------------------------------------------------------

ProgParser::NameContext* ProgParser::PostincrContext::name() {
  return getRuleContext<ProgParser::NameContext>(0);
}

ProgParser::PostincrContext::PostincrContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::PostincrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitPostincr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ValueContext ------------------------------------------------------------------

ProgParser::ValContext* ProgParser::ValueContext::val() {
  return getRuleContext<ProgParser::ValContext>(0);
}

ProgParser::ValueContext::ValueContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModuloContext ------------------------------------------------------------------

std::vector<ProgParser::ExprContext *> ProgParser::ModuloContext::expr() {
  return getRuleContexts<ProgParser::ExprContext>();
}

ProgParser::ExprContext* ProgParser::ModuloContext::expr(size_t i) {
  return getRuleContext<ProgParser::ExprContext>(i);
}

ProgParser::ModuloContext::ModuloContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::ModuloContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitModulo(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InfegalContext ------------------------------------------------------------------

std::vector<ProgParser::ExprContext *> ProgParser::InfegalContext::expr() {
  return getRuleContexts<ProgParser::ExprContext>();
}

ProgParser::ExprContext* ProgParser::InfegalContext::expr(size_t i) {
  return getRuleContext<ProgParser::ExprContext>(i);
}

ProgParser::InfegalContext::InfegalContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ProgParser::InfegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ProgVisitor*>(visitor))
    return parserVisitor->visitInfegal(this);
  else
    return visitor->visitChildren(this);
}

ProgParser::ExprContext* ProgParser::expr() {
   return expr(0);
}

ProgParser::ExprContext* ProgParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ProgParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  ProgParser::ExprContext *previousContext = _localctx;
  size_t startState = 38;
  enterRecursionRule(_localctx, 38, ProgParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(204);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<PostincrContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(175);
      name();
      setState(176);
      match(ProgParser::T__12);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PreincrContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(178);
      match(ProgParser::T__12);
      setState(179);
      name();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<InvContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(180);
      match(ProgParser::T__13);
      setState(181);
      expr(17);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<PostdecrContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(182);
      name();
      setState(183);
      match(ProgParser::T__14);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<PredecrContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(185);
      match(ProgParser::T__14);
      setState(186);
      name();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<AffectContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(187);
      name();
      setState(188);
      match(ProgParser::T__0);
      setState(189);
      expr(13);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<ParContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(191);
      match(ProgParser::T__2);
      setState(192);
      expr(0);
      setState(193);
      match(ProgParser::T__3);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<NoContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(195);
      match(ProgParser::T__24);
      setState(196);
      expr(3);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<CallfunctionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(197);
      match(ProgParser::NAME);
      setState(198);
      match(ProgParser::T__2);
      setState(200);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ProgParser::T__2)
        | (1ULL << ProgParser::T__12)
        | (1ULL << ProgParser::T__13)
        | (1ULL << ProgParser::T__14)
        | (1ULL << ProgParser::T__24)
        | (1ULL << ProgParser::NAME)
        | (1ULL << ProgParser::CHARACTER)
        | (1ULL << ProgParser::NUMBER))) != 0)) {
        setState(199);
        params();
      }
      setState(202);
      match(ProgParser::T__3);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<ValueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(203);
      val();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(247);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(245);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(206);

          if (!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
          setState(207);
          match(ProgParser::T__9);
          setState(208);
          expr(24);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<DivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(209);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(210);
          match(ProgParser::T__10);
          setState(211);
          expr(23);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<PlusContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(212);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(213);
          match(ProgParser::T__11);
          setState(214);
          expr(22);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<MinusContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(215);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(216);
          match(ProgParser::T__13);
          setState(217);
          expr(19);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ModuloContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(218);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(219);
          match(ProgParser::T__15);
          setState(220);
          expr(15);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<EgalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(221);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(222);
          match(ProgParser::T__16);
          setState(223);
          expr(13);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<DiffContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(224);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(225);
          match(ProgParser::T__17);
          setState(226);
          expr(12);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<SupContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(227);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(228);
          match(ProgParser::T__18);
          setState(229);
          expr(11);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<SupegalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(230);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(231);
          match(ProgParser::T__19);
          setState(232);
          expr(10);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<InfContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(233);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(234);
          match(ProgParser::T__20);
          setState(235);
          expr(9);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<InfegalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(236);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(237);
          match(ProgParser::T__21);
          setState(238);
          expr(8);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<OrContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(239);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(240);
          match(ProgParser::T__22);
          setState(241);
          expr(7);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<AndContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(242);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(243);
          match(ProgParser::T__23);
          setState(244);
          expr(6);
          break;
        }

        } 
      }
      setState(249);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool ProgParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 19: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ProgParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
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
std::vector<dfa::DFA> ProgParser::_decisionToDFA;
atn::PredictionContextCache ProgParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ProgParser::_atn;
std::vector<uint16_t> ProgParser::_serializedATN;

std::vector<std::string> ProgParser::_ruleNames = {
  "program", "globalVar", "function", "blockFunction", "instruction", "returnStatement", 
  "ifStatement", "elseStatement", "whileStatement", "block", "declare", 
  "type", "sigType", "retType", "sigParams", "sigDeclare", "params", "val", 
  "name", "expr"
};

std::vector<std::string> ProgParser::_literalNames = {
  "", "'='", "';'", "'('", "')'", "'{'", "'}'", "'['", "']'", "','", "'*'", 
  "'/'", "'+'", "'++'", "'-'", "'--'", "'%'", "'=='", "'!='", "'>'", "'>='", 
  "'<'", "'<='", "'||'", "'&&'", "'!'", "", "", "'char'", "'int32_t'", "'int64_t'", 
  "'if'", "'else'", "'return'", "'while'", "'void'"
};

std::vector<std::string> ProgParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "WS", "INCLUDE", "CHAR", "INT32_T", "INT64_T", 
  "IF", "ELSE", "RETURN", "WHILE", "VOID", "NAME", "CHARACTER", "NUMBER"
};

dfa::Vocabulary ProgParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ProgParser::_tokenNames;

ProgParser::Initializer::Initializer() {
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
    0x3, 0x28, 0xfd, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x3, 0x2, 0x7, 0x2, 0x2c, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x2f, 
    0xb, 0x2, 0x3, 0x2, 0x7, 0x2, 0x32, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x35, 
    0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x41, 0xa, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 
    0x5, 0x4a, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x4d, 0xb, 0x5, 0x3, 0x5, 0x7, 
    0x5, 0x50, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x53, 0xb, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 
    0x6, 0x5d, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x61, 0xa, 0x7, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x67, 0xa, 0x8, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x6d, 0xa, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x75, 0xa, 0xb, 
    0xc, 0xb, 0xe, 0xb, 0x78, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 
    0xe, 0x8b, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x8f, 0xa, 0xf, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x94, 0xa, 0x10, 0xc, 0x10, 0xe, 
    0x10, 0x97, 0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x7, 0x12, 0x9f, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0xa2, 
    0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xa7, 0xa, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0xac, 0xa, 0x14, 0x3, 0x14, 
    0x5, 0x14, 0xaf, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0xcb, 0xa, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x5, 0x15, 0xcf, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0xf8, 0xa, 0x15, 0xc, 0x15, 
    0xe, 0x15, 0xfb, 0xb, 0x15, 0x3, 0x15, 0x2, 0x3, 0x28, 0x16, 0x2, 0x4, 
    0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2, 0x3, 0x3, 0x2, 0x1e, 0x20, 0x2, 0x115, 
    0x2, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x4, 0x36, 0x3, 0x2, 0x2, 0x2, 0x6, 0x3c, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x45, 0x3, 0x2, 0x2, 0x2, 0xa, 0x5c, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x5e, 0x3, 0x2, 0x2, 0x2, 0xe, 0x62, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x12, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x72, 0x3, 0x2, 0x2, 0x2, 0x16, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x18, 0x7e, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x8e, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0x90, 0x3, 0x2, 0x2, 0x2, 0x20, 0x98, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x24, 0xa6, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0xa8, 0x3, 0x2, 0x2, 0x2, 0x28, 0xce, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x2c, 0x5, 0x4, 0x3, 0x2, 0x2b, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0x33, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0x32, 0x5, 0x6, 0x4, 0x2, 0x31, 0x30, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x35, 0x3, 0x2, 0x2, 0x2, 0x33, 0x31, 0x3, 0x2, 0x2, 
    0x2, 0x33, 0x34, 0x3, 0x2, 0x2, 0x2, 0x34, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x5, 0x18, 0xd, 0x2, 0x37, 
    0x38, 0x5, 0x26, 0x14, 0x2, 0x38, 0x39, 0x7, 0x3, 0x2, 0x2, 0x39, 0x3a, 
    0x5, 0x24, 0x13, 0x2, 0x3a, 0x3b, 0x7, 0x4, 0x2, 0x2, 0x3b, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x3c, 0x3d, 0x5, 0x1c, 0xf, 0x2, 0x3d, 0x3e, 0x7, 0x26, 
    0x2, 0x2, 0x3e, 0x40, 0x7, 0x5, 0x2, 0x2, 0x3f, 0x41, 0x5, 0x1e, 0x10, 
    0x2, 0x40, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x41, 0x42, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x7, 0x6, 0x2, 0x2, 0x43, 
    0x44, 0x5, 0x8, 0x5, 0x2, 0x44, 0x7, 0x3, 0x2, 0x2, 0x2, 0x45, 0x4b, 
    0x7, 0x7, 0x2, 0x2, 0x46, 0x47, 0x5, 0x16, 0xc, 0x2, 0x47, 0x48, 0x7, 
    0x4, 0x2, 0x2, 0x48, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x49, 0x46, 0x3, 0x2, 
    0x2, 0x2, 0x4a, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x49, 0x3, 0x2, 0x2, 
    0x2, 0x4b, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x51, 0x3, 0x2, 0x2, 0x2, 
    0x4d, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x50, 0x5, 0xa, 0x6, 0x2, 0x4f, 
    0x4e, 0x3, 0x2, 0x2, 0x2, 0x50, 0x53, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4f, 
    0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 0x2, 0x2, 0x2, 0x52, 0x54, 0x3, 
    0x2, 0x2, 0x2, 0x53, 0x51, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x7, 0x8, 
    0x2, 0x2, 0x55, 0x9, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x5, 0x28, 0x15, 
    0x2, 0x57, 0x58, 0x7, 0x4, 0x2, 0x2, 0x58, 0x5d, 0x3, 0x2, 0x2, 0x2, 
    0x59, 0x5d, 0x5, 0xe, 0x8, 0x2, 0x5a, 0x5d, 0x5, 0x12, 0xa, 0x2, 0x5b, 
    0x5d, 0x5, 0xc, 0x7, 0x2, 0x5c, 0x56, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x59, 
    0x3, 0x2, 0x2, 0x2, 0x5c, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5b, 0x3, 
    0x2, 0x2, 0x2, 0x5d, 0xb, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x60, 0x7, 0x23, 
    0x2, 0x2, 0x5f, 0x61, 0x5, 0x24, 0x13, 0x2, 0x60, 0x5f, 0x3, 0x2, 0x2, 
    0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 0x61, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x62, 0x63, 0x7, 0x21, 0x2, 0x2, 0x63, 0x64, 0x5, 0x28, 0x15, 0x2, 0x64, 
    0x66, 0x5, 0x14, 0xb, 0x2, 0x65, 0x67, 0x5, 0x10, 0x9, 0x2, 0x66, 0x65, 
    0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x3, 0x2, 0x2, 0x2, 0x67, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x68, 0x69, 0x7, 0x22, 0x2, 0x2, 0x69, 0x6d, 0x5, 0x14, 
    0xb, 0x2, 0x6a, 0x6b, 0x7, 0x22, 0x2, 0x2, 0x6b, 0x6d, 0x5, 0xe, 0x8, 
    0x2, 0x6c, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6a, 0x3, 0x2, 0x2, 0x2, 
    0x6d, 0x11, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x7, 0x24, 0x2, 0x2, 0x6f, 
    0x70, 0x5, 0x28, 0x15, 0x2, 0x70, 0x71, 0x5, 0x14, 0xb, 0x2, 0x71, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0x72, 0x76, 0x7, 0x7, 0x2, 0x2, 0x73, 0x75, 0x5, 
    0xa, 0x6, 0x2, 0x74, 0x73, 0x3, 0x2, 0x2, 0x2, 0x75, 0x78, 0x3, 0x2, 
    0x2, 0x2, 0x76, 0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 0x2, 0x2, 
    0x2, 0x77, 0x79, 0x3, 0x2, 0x2, 0x2, 0x78, 0x76, 0x3, 0x2, 0x2, 0x2, 
    0x79, 0x7a, 0x7, 0x8, 0x2, 0x2, 0x7a, 0x15, 0x3, 0x2, 0x2, 0x2, 0x7b, 
    0x7c, 0x5, 0x18, 0xd, 0x2, 0x7c, 0x7d, 0x5, 0x26, 0x14, 0x2, 0x7d, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x9, 0x2, 0x2, 0x2, 0x7f, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x80, 0x81, 0x7, 0x1e, 0x2, 0x2, 0x81, 0x82, 0x7, 0x9, 
    0x2, 0x2, 0x82, 0x8b, 0x7, 0xa, 0x2, 0x2, 0x83, 0x84, 0x7, 0x1f, 0x2, 
    0x2, 0x84, 0x85, 0x7, 0x9, 0x2, 0x2, 0x85, 0x8b, 0x7, 0xa, 0x2, 0x2, 
    0x86, 0x87, 0x7, 0x20, 0x2, 0x2, 0x87, 0x88, 0x7, 0x9, 0x2, 0x2, 0x88, 
    0x8b, 0x7, 0xa, 0x2, 0x2, 0x89, 0x8b, 0x5, 0x18, 0xd, 0x2, 0x8a, 0x80, 
    0x3, 0x2, 0x2, 0x2, 0x8a, 0x83, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x86, 0x3, 
    0x2, 0x2, 0x2, 0x8a, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x1b, 0x3, 0x2, 
    0x2, 0x2, 0x8c, 0x8f, 0x5, 0x18, 0xd, 0x2, 0x8d, 0x8f, 0x7, 0x25, 0x2, 
    0x2, 0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8d, 0x3, 0x2, 0x2, 0x2, 
    0x8f, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x90, 0x95, 0x5, 0x20, 0x11, 0x2, 0x91, 
    0x92, 0x7, 0xb, 0x2, 0x2, 0x92, 0x94, 0x5, 0x20, 0x11, 0x2, 0x93, 0x91, 
    0x3, 0x2, 0x2, 0x2, 0x94, 0x97, 0x3, 0x2, 0x2, 0x2, 0x95, 0x93, 0x3, 
    0x2, 0x2, 0x2, 0x95, 0x96, 0x3, 0x2, 0x2, 0x2, 0x96, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x97, 0x95, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x5, 0x1a, 0xe, 
    0x2, 0x99, 0x9a, 0x5, 0x26, 0x14, 0x2, 0x9a, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0x9b, 0xa0, 0x5, 0x28, 0x15, 0x2, 0x9c, 0x9d, 0x7, 0xb, 0x2, 0x2, 0x9d, 
    0x9f, 0x5, 0x28, 0x15, 0x2, 0x9e, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa2, 
    0x3, 0x2, 0x2, 0x2, 0xa0, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x3, 
    0x2, 0x2, 0x2, 0xa1, 0x23, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa0, 0x3, 0x2, 
    0x2, 0x2, 0xa3, 0xa7, 0x5, 0x26, 0x14, 0x2, 0xa4, 0xa7, 0x7, 0x28, 0x2, 
    0x2, 0xa5, 0xa7, 0x7, 0x27, 0x2, 0x2, 0xa6, 0xa3, 0x3, 0x2, 0x2, 0x2, 
    0xa6, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa7, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xae, 0x7, 0x26, 0x2, 0x2, 0xa9, 0xab, 
    0x7, 0x9, 0x2, 0x2, 0xaa, 0xac, 0x5, 0x28, 0x15, 0x2, 0xab, 0xaa, 0x3, 
    0x2, 0x2, 0x2, 0xab, 0xac, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x3, 0x2, 
    0x2, 0x2, 0xad, 0xaf, 0x7, 0xa, 0x2, 0x2, 0xae, 0xa9, 0x3, 0x2, 0x2, 
    0x2, 0xae, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xaf, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0xb0, 0xb1, 0x8, 0x15, 0x1, 0x2, 0xb1, 0xb2, 0x5, 0x26, 0x14, 0x2, 0xb2, 
    0xb3, 0x7, 0xf, 0x2, 0x2, 0xb3, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 
    0x7, 0xf, 0x2, 0x2, 0xb5, 0xcf, 0x5, 0x26, 0x14, 0x2, 0xb6, 0xb7, 0x7, 
    0x10, 0x2, 0x2, 0xb7, 0xcf, 0x5, 0x28, 0x15, 0x13, 0xb8, 0xb9, 0x5, 
    0x26, 0x14, 0x2, 0xb9, 0xba, 0x7, 0x11, 0x2, 0x2, 0xba, 0xcf, 0x3, 0x2, 
    0x2, 0x2, 0xbb, 0xbc, 0x7, 0x11, 0x2, 0x2, 0xbc, 0xcf, 0x5, 0x26, 0x14, 
    0x2, 0xbd, 0xbe, 0x5, 0x26, 0x14, 0x2, 0xbe, 0xbf, 0x7, 0x3, 0x2, 0x2, 
    0xbf, 0xc0, 0x5, 0x28, 0x15, 0xf, 0xc0, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xc1, 
    0xc2, 0x7, 0x5, 0x2, 0x2, 0xc2, 0xc3, 0x5, 0x28, 0x15, 0x2, 0xc3, 0xc4, 
    0x7, 0x6, 0x2, 0x2, 0xc4, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x7, 
    0x1b, 0x2, 0x2, 0xc6, 0xcf, 0x5, 0x28, 0x15, 0x5, 0xc7, 0xc8, 0x7, 0x26, 
    0x2, 0x2, 0xc8, 0xca, 0x7, 0x5, 0x2, 0x2, 0xc9, 0xcb, 0x5, 0x22, 0x12, 
    0x2, 0xca, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x3, 0x2, 0x2, 0x2, 
    0xcb, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcf, 0x7, 0x6, 0x2, 0x2, 0xcd, 
    0xcf, 0x5, 0x24, 0x13, 0x2, 0xce, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xce, 0xb4, 
    0x3, 0x2, 0x2, 0x2, 0xce, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xce, 0xb8, 0x3, 
    0x2, 0x2, 0x2, 0xce, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xce, 0xbd, 0x3, 0x2, 
    0x2, 0x2, 0xce, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xce, 0xc5, 0x3, 0x2, 0x2, 
    0x2, 0xce, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcd, 0x3, 0x2, 0x2, 0x2, 
    0xcf, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0xc, 0x19, 0x2, 0x2, 0xd1, 
    0xd2, 0x7, 0xc, 0x2, 0x2, 0xd2, 0xf8, 0x5, 0x28, 0x15, 0x1a, 0xd3, 0xd4, 
    0xc, 0x18, 0x2, 0x2, 0xd4, 0xd5, 0x7, 0xd, 0x2, 0x2, 0xd5, 0xf8, 0x5, 
    0x28, 0x15, 0x19, 0xd6, 0xd7, 0xc, 0x17, 0x2, 0x2, 0xd7, 0xd8, 0x7, 
    0xe, 0x2, 0x2, 0xd8, 0xf8, 0x5, 0x28, 0x15, 0x18, 0xd9, 0xda, 0xc, 0x14, 
    0x2, 0x2, 0xda, 0xdb, 0x7, 0x10, 0x2, 0x2, 0xdb, 0xf8, 0x5, 0x28, 0x15, 
    0x15, 0xdc, 0xdd, 0xc, 0x10, 0x2, 0x2, 0xdd, 0xde, 0x7, 0x12, 0x2, 0x2, 
    0xde, 0xf8, 0x5, 0x28, 0x15, 0x11, 0xdf, 0xe0, 0xc, 0xe, 0x2, 0x2, 0xe0, 
    0xe1, 0x7, 0x13, 0x2, 0x2, 0xe1, 0xf8, 0x5, 0x28, 0x15, 0xf, 0xe2, 0xe3, 
    0xc, 0xd, 0x2, 0x2, 0xe3, 0xe4, 0x7, 0x14, 0x2, 0x2, 0xe4, 0xf8, 0x5, 
    0x28, 0x15, 0xe, 0xe5, 0xe6, 0xc, 0xc, 0x2, 0x2, 0xe6, 0xe7, 0x7, 0x15, 
    0x2, 0x2, 0xe7, 0xf8, 0x5, 0x28, 0x15, 0xd, 0xe8, 0xe9, 0xc, 0xb, 0x2, 
    0x2, 0xe9, 0xea, 0x7, 0x16, 0x2, 0x2, 0xea, 0xf8, 0x5, 0x28, 0x15, 0xc, 
    0xeb, 0xec, 0xc, 0xa, 0x2, 0x2, 0xec, 0xed, 0x7, 0x17, 0x2, 0x2, 0xed, 
    0xf8, 0x5, 0x28, 0x15, 0xb, 0xee, 0xef, 0xc, 0x9, 0x2, 0x2, 0xef, 0xf0, 
    0x7, 0x18, 0x2, 0x2, 0xf0, 0xf8, 0x5, 0x28, 0x15, 0xa, 0xf1, 0xf2, 0xc, 
    0x8, 0x2, 0x2, 0xf2, 0xf3, 0x7, 0x19, 0x2, 0x2, 0xf3, 0xf8, 0x5, 0x28, 
    0x15, 0x9, 0xf4, 0xf5, 0xc, 0x7, 0x2, 0x2, 0xf5, 0xf6, 0x7, 0x1a, 0x2, 
    0x2, 0xf6, 0xf8, 0x5, 0x28, 0x15, 0x8, 0xf7, 0xd0, 0x3, 0x2, 0x2, 0x2, 
    0xf7, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xf7, 
    0xd9, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xdf, 
    0x3, 0x2, 0x2, 0x2, 0xf7, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xe5, 0x3, 
    0x2, 0x2, 0x2, 0xf7, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xeb, 0x3, 0x2, 
    0x2, 0x2, 0xf7, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf1, 0x3, 0x2, 0x2, 
    0x2, 0xf7, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xfb, 0x3, 0x2, 0x2, 0x2, 
    0xf9, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfa, 
    0x29, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x17, 0x2d, 
    0x33, 0x40, 0x4b, 0x51, 0x5c, 0x60, 0x66, 0x6c, 0x76, 0x8a, 0x8e, 0x95, 
    0xa0, 0xa6, 0xab, 0xae, 0xca, 0xce, 0xf7, 0xf9, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ProgParser::Initializer ProgParser::_init;
