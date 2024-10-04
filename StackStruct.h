#ifndef STACKSTRUCT_H
#define STACKSTRUCT_H

#include <stdlib.h>

typedef int elem_t;
#define printfStackElem printf("Stack->StackData[Stack->Size] = %d\n", Stack->StackData[Stack->Size - 1])

enum PoisonValue {Poison = 43957};

// #define printfStack(Text, arg) do {                  \
     printf("Text", arg);      \
 } while(0)

//TODO ask how to define printf

enum ErorrsValues 
{
    recallocPushFailure           = 1 << 0,
    StackCapacityZero             = 1 << 1,
    PointerStackDataFailureInCtor = 1 << 2,
    recallocPopFailure            = 1 << 3,
    DataUnsafe                    = 1 << 4,
    StackOverflowed               = 1 << 5,
    StackAdrFailuire              = 1 << 6,
    nullptrDataInFree             = 1 << 7
};

struct StackStruct
{
    elem_t* StackData;
    size_t Size, Capacity;

    int Errors;
};

#endif