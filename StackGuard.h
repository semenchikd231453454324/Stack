#ifndef STACKGUARD_H
#define STACKGUARD_H

#include "StackStruct.h"

enum Safety {DataOK, DataDamaged};

int StackGuard(StackStruct* Stack);

#endif