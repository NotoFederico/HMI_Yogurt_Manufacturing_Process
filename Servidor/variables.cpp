//---------------------------------------------------------------------------


#pragma hdrstop

#include "variables.h"

#define RESET_TEMPVALUE 30
#define RESET_TIMEVALUE 0
#define RESET_PPVALUE 50

DiscVar::DiscVar()
{
}

ContVar::ContVar()
{
}

void ContVar::resetAll()
{

}

void ContVar::resetTemp()
{
    tempEnf = RESET_TEMPVALUE;
    tempEst = RESET_TEMPVALUE;
    tempHom = RESET_TEMPVALUE;
    tempInc = RESET_TEMPVALUE;
    tempPas = RESET_TEMPVALUE;
    tempPre = RESET_TEMPVALUE;
    tempRef = RESET_TEMPVALUE;
}

void ContVar::resetTime()
{
    timeEnf = RESET_TIMEVALUE;
    timeInc = RESET_TIMEVALUE;
    timePas = RESET_TIMEVALUE;
    timePre = RESET_TIMEVALUE;
}

void ContVar::resetPp()
{
    ppCol = RESET_PPVALUE;
    ppCub = RESET_PPVALUE;
    ppYog = RESET_PPVALUE;
}

void DiscVar::resetAll()
{
    motEnf = false;
    motEst = false;
    motHom = false;
    motPas = false;
    motPreInc = false;
    motRef = false;
    valEnf = false;
    valEst = false;
    valHom = false;
    valPas = false;
    valPreInc = false;
    valRef = false;
}

//---------------------------------------------------------------------------

#pragma package(smart_init)
