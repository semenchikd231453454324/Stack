#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <assert.h>

#include "StackPop.h"
#include "StackStruct.h"
#include "recalloc.h"

int StackPop(StackStruct* Stack)
{
    assert(Stack);

    //printfStackElem;

    Stack->StackData[Stack->Size] = 0;

    Stack->Size--;

    if(Stack->Size <= (Stack->Capacity)/4)
    {
        if((Stack->StackData = (elem_t*) recalloc(Stack->StackData, (Stack->Capacity) / 4, sizeof(elem_t), Reduce)) == nullptr)           //TODO мы поняли что recalloc возвращает ошибку, что делать ----> enum
        {
            printf("StackPop recalloc failuire\n");

        }

        Stack->Capacity = Stack->Capacity / 4;
    }

    return Stack->StackData[Stack->Size];

} 

//TODO read nvlope