#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <assert.h>

#include "StackPush.h"
#include "StackStruct.h"
#include "recalloc.h"

void StackPush(StackStruct* Stack, int NewElem)
{
    assert(Stack);

    Stack->StackData[Stack->Size] = NewElem;

    Stack->Size++;

    if(Stack->Size == Stack->Capacity)
    {
        if((Stack->StackData = (elem_t*) recalloc(Stack->StackData, (Stack->Capacity)*2, sizeof(elem_t), Expand)) == nullptr)          //TODO мы поняли что recalloc возвращает ошибку, что делать
        {
            Stack->Errors = Stack->Errors | recallocPushFailure;
        }
        
        Stack->Capacity = (Stack->Capacity)*2;
    }

}