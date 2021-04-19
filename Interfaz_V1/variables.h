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
public:

    bool motRef;
    bool motEst;
    bool motPas;
    bool motHom;
    bool motPre;
    bool motIncEnf;

    bool valRef;
    bool valEst;
    bool valPas;
    bool valHom;
    bool valIncEnf;
    bool valPre;

public:

    DiscVar();
    void resetAll();
};

class ItemIndexCb
{
public:

    int oldValue;
    int actualValue;

public:
    ItemIndexCb();
    void Init();
    bool Comparison();
    void Update();
};

class Alarm
{
public:

    float l;
    float ll;
    float ideal;
    float h;
    float hh;

public:

    Alarm();

};

#endif
