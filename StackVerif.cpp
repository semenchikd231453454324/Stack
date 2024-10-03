#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <assert.h>

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
        printf("StacOverflow\n");

        return StackOverflow;
    }
    
    if(!Stack->StackData)
    {
        printf("Stack adress failure");

        return NullAdr;
    }

    if(StackGuard(Stack))
    {
        return DataDamage;
    }
    
    printf("NoErrors");
    return NoErrors;
}