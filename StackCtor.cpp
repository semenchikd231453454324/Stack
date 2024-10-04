#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <assert.h>

#include "StackCtor.h"
#include "StackStruct.h"

int StackCtor(StackStruct* Stack)
{
    assert(Stack);

    Stack->Capacity = 8; // FIXME not hardcode

    if(Stack->Capacity == 0)
    {
        Stack->Errors = Stack->Errors | StackCapacityZero;
        return 1;
    }

    Stack->StackData = (elem_t*) calloc(Stack->Capacity, sizeof(elem_t));
    if (!Stack->StackData)
    {
        Stack->Errors = Stack->Errors | PointerStackDataFailureInCtor;
        return 1;
    }
    
    return 0;
}