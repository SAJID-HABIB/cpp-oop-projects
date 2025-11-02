#include "Auxi.h"
#include "Budget.h"



void AuxiliaryOffice::addBudget(double b, Budget &)
{
    auxBudget += b;
    div.corpBudget += b;
}

