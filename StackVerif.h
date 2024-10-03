#ifndef STACKVERIF_H
#define STACKVERIF_H

#include <stdlib.h>

#include "StackStruct.h"

enum Errors {NoErrors, StackOverflow, NullAdr, DataDamage};

int StackVerif(StackStruct* Stack, size_t CallLineNum, const char* CallFile);

#endif