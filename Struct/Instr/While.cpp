#include "While.h"
#include "../../Tools/PrintTool.h"


While::While(Expr* e,Block* b): Instr(e), child(b)
{
}


While::~While()
{
}

string While::buildIR(CFG* cfg){
    BasicBlock* beforeWhileBB = cfg->current_bb;
    BasicBlock* bodyBB = new BasicBlock(cfg,"WhileBody");
    BasicBlock* testBB = new BasicBlock(cfg,"WhileTest");
    beforeWhileBB->exit_true = testBB;
    beforeWhileBB->exit_false = nullptr;
    cfg->add_bb(testBB);
    expr->buildIR(cfg);
    cfg->add_bb(bodyBB);
    child->buildIR(cfg);
    BasicBlock* afterWhileBB = new BasicBlock(cfg,"afterWhile");
    cfg->current_bb->exit_true = bodyBB;
    cfg->current_bb->exit_false = afterWhileBB;
    beforeWhileBB->exit_true = bodyBB;
    beforeWhileBB->exit_false = afterWhileBB;

//    beforeWhileBB = cfg→currentBB
//    bodyBB = new BasicBlock(cfg) . it is empty
//    testBB = new BasicBlock(cfg) . it is empty
//    cfg→currentBB = testBB . so we ﬁll it
//    test→buildIR(cfg)
//    bodyBB = new BasicBlock(cfg, body) . this constructor also generates the code
//    afterWhileBB→exitTrue = beforeWhileBB→exitTrue . pointer stitching
//    afterWhileBB→exitFalse = beforeWhileBB→exitFalse . pointer stitching
//    testBB→exitTrue = bodyBB . pointer stitching
//    testBB→exitFalse = afterWhileBB . pointer stitching
//    bodyBB→exitTrue = testBB . pointer stitching
//    bodyBB→exitFalse = NULL . unconditional
//    exit cfg→currentBB = afterWhileBB

}

void While::print(int tabs) {
    string stab = PrintTool::getTabs(tabs);
    cout << stab << "While" << endl;
    cout << stab <<"Condition : "<<endl;
    expr->print(tabs+1);
    cout << endl;
    cout << stab <<"If Block: "<<endl;
    child->print(tabs+1);
    cout << endl;
}
