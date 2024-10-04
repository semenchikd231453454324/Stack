#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <assert.h>

#include "ErrorPrint.h"
#include "StackGuard.h"
#include "StackVerif.h"
#include "StackStruct.h"

int StackVerif(StackStruct* Stack, size_t CallLineNum, const char* CallFile)
{
    assert(Stack);

    printf("STACK VERIFICATION\n");
    printf("Verification called from:   %s\n", CallFile);
    printf("Line:   %d\n", CallLineNum);

    if (Stack->Size >> Stack->Capacity)
    {
        Stack->Errors = Stack->Errors | StackOverflowed;
    }
    
    if(!Stack->StackData)
    {
        Stack->Errors = Stack->Errors | StackAdrFailuire;
    }

    if(StackGuard(Stack))
    {
        Stack->Errors = Stack->Errors | DataUnsafe;
    }
    
    ErrorPrint(Stack);

    return 0;
}