#include "PrintTool.h"

using namespace std;


PrintTool::PrintTool() {}

PrintTool::~PrintTool()
{
}

string PrintTool::getTabs(int tabs) {
    string stab = "";
    for(int i=0;i<tabs;i++){
        stab += "     ";
    }
    stab +="|--> ";
    return stab;
}


