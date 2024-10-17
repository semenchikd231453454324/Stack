#ifndef STACKFUNCS_H
#define STACKFUNCS_H

#include <stdlib.h>

#include "StackStruct.h"

int StackCtor(StackStruct* Stack);
int StackDestruct(StackStruct* Stack);

void StackPush(StackStruct* Stack, int NewElem);
int StackPop(StackStruct* Stack);

void StackDump(StackStruct* Stack, size_t CallLineNum, const char* CallFile);
int StackVerif(StackStruct* Stack, size_t CallLineNum, const char* CallFile);
int ErrorPrint(StackStruct* Stack);
void* recalloc(void* MemPointer, size_t ElementsNum, size_t SizeOfElement, int WorkScenario);


#endif