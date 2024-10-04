#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <assert.h>

#include "StackDestruct.h"
#include "StackStruct.h"

int StackDestruct(StackStruct* Stack)
{
    assert(Stack);

    if (!Stack->StackData)
    {
        printf ("nullptrInfree");

        Stack->Errors = Stack->Errors | nullptrDataInFree;

        return nullptrInfree;
    }

    free(Stack->StackData);

    Stack = {};

    return StackDestructed;
}