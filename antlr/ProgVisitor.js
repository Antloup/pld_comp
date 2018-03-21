// Generated from Prog.g4 by ANTLR 4.5.1
// jshint ignore: start
var antlr4 = require('antlr4/index');

// This class defines a complete generic visitor for a parse tree produced by ProgParser.

function ProgVisitor() {
	antlr4.tree.ParseTreeVisitor.call(this);
	return this;
}

ProgVisitor.prototype = Object.create(antlr4.tree.ParseTreeVisitor.prototype);
ProgVisitor.prototype.constructor = ProgVisitor;

// Visit a parse tree produced by ProgParser#program.
ProgVisitor.prototype.visitProgram = function(ctx) {
};


// Visit a parse tree produced by ProgParser#globalVar.
ProgVisitor.prototype.visitGlobalVar = function(ctx) {
};


// Visit a parse tree produced by ProgParser#function.
ProgVisitor.prototype.visitFunction = function(ctx) {
};


// Visit a parse tree produced by ProgParser#blockFunction.
ProgVisitor.prototype.visitBlockFunction = function(ctx) {
};


// Visit a parse tree produced by ProgParser#instruction.
ProgVisitor.prototype.visitInstruction = function(ctx) {
};


// Visit a parse tree produced by ProgParser#returnStatement.
ProgVisitor.prototype.visitReturnStatement = function(ctx) {
};


// Visit a parse tree produced by ProgParser#ifStatement.
ProgVisitor.prototype.visitIfStatement = function(ctx) {
};


// Visit a parse tree produced by ProgParser#elseStatement.
ProgVisitor.prototype.visitElseStatement = function(ctx) {
};


// Visit a parse tree produced by ProgParser#whileStatement.
ProgVisitor.prototype.visitWhileStatement = function(ctx) {
};


// Visit a parse tree produced by ProgParser#block.
ProgVisitor.prototype.visitBlock = function(ctx) {
};


// Visit a parse tree produced by ProgParser#declare.
ProgVisitor.prototype.visitDeclare = function(ctx) {
};


// Visit a parse tree produced by ProgParser#type.
ProgVisitor.prototype.visitType = function(ctx) {
};


// Visit a parse tree produced by ProgParser#sigType.
ProgVisitor.prototype.visitSigType = function(ctx) {
};


// Visit a parse tree produced by ProgParser#retType.
ProgVisitor.prototype.visitRetType = function(ctx) {
};


// Visit a parse tree produced by ProgParser#sigParams.
ProgVisitor.prototype.visitSigParams = function(ctx) {
};


// Visit a parse tree produced by ProgParser#sigDeclare.
ProgVisitor.prototype.visitSigDeclare = function(ctx) {
};


// Visit a parse tree produced by ProgParser#params.
ProgVisitor.prototype.visitParams = function(ctx) {
};


// Visit a parse tree produced by ProgParser#val.
ProgVisitor.prototype.visitVal = function(ctx) {
};


// Visit a parse tree produced by ProgParser#name.
ProgVisitor.prototype.visitName = function(ctx) {
};


// Visit a parse tree produced by ProgParser#par.
ProgVisitor.prototype.visitPar = function(ctx) {
};


// Visit a parse tree produced by ProgParser#inf.
ProgVisitor.prototype.visitInf = function(ctx) {
};


// Visit a parse tree produced by ProgParser#egal.
ProgVisitor.prototype.visitEgal = function(ctx) {
};


// Visit a parse tree produced by ProgParser#mult.
ProgVisitor.prototype.visitMult = function(ctx) {
};


// Visit a parse tree produced by ProgParser#valeur.
ProgVisitor.prototype.visitValeur = function(ctx) {
};


// Visit a parse tree produced by ProgParser#affect.
ProgVisitor.prototype.visitAffect = function(ctx) {
};


// Visit a parse tree produced by ProgParser#ou.
ProgVisitor.prototype.visitOu = function(ctx) {
};


// Visit a parse tree produced by ProgParser#diff.
ProgVisitor.prototype.visitDiff = function(ctx) {
};


// Visit a parse tree produced by ProgParser#non.
ProgVisitor.prototype.visitNon = function(ctx) {
};


// Visit a parse tree produced by ProgParser#plus.
ProgVisitor.prototype.visitPlus = function(ctx) {
};


// Visit a parse tree produced by ProgParser#sup.
ProgVisitor.prototype.visitSup = function(ctx) {
};


// Visit a parse tree produced by ProgParser#et.
ProgVisitor.prototype.visitEt = function(ctx) {
};


// Visit a parse tree produced by ProgParser#inv.
ProgVisitor.prototype.visitInv = function(ctx) {
};


// Visit a parse tree produced by ProgParser#div.
ProgVisitor.prototype.visitDiv = function(ctx) {
};


// Visit a parse tree produced by ProgParser#callfunction.
ProgVisitor.prototype.visitCallfunction = function(ctx) {
};


// Visit a parse tree produced by ProgParser#predecr.
ProgVisitor.prototype.visitPredecr = function(ctx) {
};


// Visit a parse tree produced by ProgParser#preincr.
ProgVisitor.prototype.visitPreincr = function(ctx) {
};


// Visit a parse tree produced by ProgParser#postdecr.
ProgVisitor.prototype.visitPostdecr = function(ctx) {
};


// Visit a parse tree produced by ProgParser#supegal.
ProgVisitor.prototype.visitSupegal = function(ctx) {
};


// Visit a parse tree produced by ProgParser#moins.
ProgVisitor.prototype.visitMoins = function(ctx) {
};


// Visit a parse tree produced by ProgParser#postincr.
ProgVisitor.prototype.visitPostincr = function(ctx) {
};


// Visit a parse tree produced by ProgParser#modulo.
ProgVisitor.prototype.visitModulo = function(ctx) {
};


// Visit a parse tree produced by ProgParser#infegal.
ProgVisitor.prototype.visitInfegal = function(ctx) {
};



exports.ProgVisitor = ProgVisitor;