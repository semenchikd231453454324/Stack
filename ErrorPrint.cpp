#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <assert.h>

#include "StackStruct.h"
#include "ErrorPrint.h"

int ErrorPrint(StackStruct* Stack)
{
    assert(Stack);

    printfErr(recallocPushFailure, "HUI\n");

    printfErr(StackCapacityZero);

    printfErr(PointerStackDataFailureInCtor);
    
    printfErr(recallocPopFailure);
    
    printfErr(DataUnsafe);
    
    printfErr(StackOverflowed);
    
    printfErr(StackAdrFailuire);

    printfErr(nullptrDataInFree);

    return 0;
}