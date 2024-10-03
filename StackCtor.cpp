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

    Stack->Capacity = 8;

    if(Stack->Capacity == 0)
    {
        printf("Can't create 0 size stack");
        return 1;
    }

    Stack->StackData = (elem_t*) calloc(Stack->Capacity, sizeof(elem_t));
    if (!Stack->StackData)
    {
        printf("pointer StackData failure");
        return 1;
    }
    
    return 0;
}