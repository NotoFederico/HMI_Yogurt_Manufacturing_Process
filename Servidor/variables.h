//---------------------------------------------------------------------------

#ifndef variablesH
#define variablesH
//---------------------------------------------------------------------------

class ContVar
{
public:
    double tempRef;
    double tempEst;
    double tempPas;
    double tempHom;
    double tempPre;
    double tempInc;
    double tempEnf;

    double timePas;
    double timePre;
    double timeInc;
    double timeEnf;

    double ppYog;
    double ppCol;
    double ppCub;

public:

    ContVar();
    void resetAll();
    void resetTemp();
    void resetTime();
    void resetPp();
};

class DiscVar
{

    bool motRef;
    bool motEst;
    bool motPas;
    bool motHom;
    bool motPreInc;
    bool motEnf;

    bool valRef;
    bool valEst;
    bool valPas;
    bool valHom;
    bool valPreInc;
    bool valEnf;

public:

    DiscVar();
    void resetAll();
};

#endif
