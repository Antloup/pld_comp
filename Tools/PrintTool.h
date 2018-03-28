#pragma once
#include <string>
#include <iostream>

using namespace std;
class PrintTool
{
public:
    /* ---- Constructors / Destructor ---- */
    PrintTool();
    ~PrintTool();

    /* ------------- Methods ------------- */
    static string getTabs(int tabs);
};

