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
    BasicBlock* testBB = new BasicBlock(cfg,"WhileTest");
    BasicBlock* bodyBB = new BasicBlock(cfg,"WhileBody");
    BasicBlock* afterWhileBB = new BasicBlock(cfg,"afterWhile");
    cfg->add_bb(testBB);
    expr->buildIR(cfg,true);
    cfg->add_bb(bodyBB);
    child->buildIR(cfg);
    afterWhileBB->exit_true = beforeWhileBB->exit_true;
    afterWhileBB->exit_false = beforeWhileBB->exit_false;
    beforeWhileBB->exit_true = testBB;
    beforeWhileBB->exit_false = nullptr;
    testBB->exit_true = bodyBB;
    testBB->exit_false = afterWhileBB;
    bodyBB->exit_true = testBB;
    bodyBB->exit_false = nullptr;

    cfg->add_bb(afterWhileBB);

    return "";

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
