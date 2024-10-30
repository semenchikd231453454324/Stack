#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <assert.h>

#include "StackStruct.h"
#include "StackCtor.h"
#include "StackPush.h"
#include "recalloc.h"
#include "StackPop.h"
#include "StackDump.h"
#include "StackVerif.h"
#include "StackDestruct.h"


int main()
{
    struct StackStruct Stack = {};

    StackCtor(&Stack);


    StackPush(&Stack, 4);

    DUMP(&Stack);

    StackPopprint;

    DUMP(&Stack);

    /*
    StackPush(&Stack, 0);


    for(int count = 0; count < 10; count++)
    {
        StackPush(&Stack, 78);

    }
    
    
    DUMP(&Stack);
    */
    StackDestruct(&Stack);

    

}