#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <assert.h>

#include "StackGuard.h"
#include "StackStruct.h"

int StackGuard(StackStruct* Stack)
{
    assert(Stack);

    for(size_t ElemNum; ElemNum < (Stack->Capacity - Stack->Size); ElemNum++)
    {
        if(Stack->StackData[Stack->Size + ElemNum] != 0)
        {
            printf("DataDamaged\n");

            return DataDamaged;
        }
    }

    return DataOK;
}