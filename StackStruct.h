#ifndef STACKSTRUCT_H
#define STACKSTRUCT_H

#include <stdlib.h>

typedef int elem_t;
#define printfStackElem printf("Stack->StackData[Stack->Size] = %d\n", Stack->StackData[Stack->Size - 1])

// #define printfStack(Text, arg) do {                  \
     printf("Text", arg);      \
 } while(0)

//TODO ask how to define printf

struct StackStruct
{
    elem_t* StackData;
    size_t Size, Capacity;
};

#endif