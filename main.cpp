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
#include "StackGuard.h"


int main()
{
    struct StackStruct Stack = {};

    // StackError error = NO_ERROR;
    StackCtor(&Stack);

    // if ((error = StackCtor(&Stack))) {           //TODO dump, destruct, free память, статья на хабре про функц макросы
    //    print_error(error);
    //    return 1;
    //}

    StackPush(&Stack, 1);
    StackPush(&Stack, 2);
    StackPush(&Stack, 3);
    StackPush(&Stack, 4);
    StackPush(&Stack, 5);
    StackPush(&Stack, 6);
    StackPush(&Stack, 7);
    StackPush(&Stack, 8);
    StackPush(&Stack, 9);
    StackPush(&Stack, 10);

    DUMP(&Stack);

    printf("Stack Elem %d = %d\n", Stack.Size, StackPop(&Stack));
    printf("Stack Elem %d = %d\n", Stack.Size, StackPop(&Stack));

    DUMP(&Stack);

    printf("Stack Elem %d = %d\n", Stack.Size, StackPop(&Stack));
    printf("Stack Elem %d = %d\n", Stack.Size, StackPop(&Stack));
    printf("Stack Elem %d = %d\n", Stack.Size, StackPop(&Stack));
    printf("Stack Elem %d = %d\n", Stack.Size, StackPop(&Stack));
    printf("Stack Elem %d = %d\n", Stack.Size, StackPop(&Stack));
    
    DUMP(&Stack);

    StackVerif(&Stack, __LINE__, __FILE__);

}