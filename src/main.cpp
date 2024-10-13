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
    StackPopprint;

    StackPush(&Stack, -1);
    StackPush(&Stack, 0);
    StackDestruct(&Stack);

    DUMP(&Stack);

    StackPopprint;
    StackPopprint;
    StackPopprint;
    

}