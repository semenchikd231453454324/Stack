#ifndef ERRORPRINT_H
#define ERRORPRINT_H

#include "StackStruct.h"

#define printfErr(arg, desc) do {      \
    if((Stack->Errors & arg) == arg)   \
    {                                  \
        printf(desc);                  \
    }                                  \
} while(0)

//FIXME printf arg 

int ErrorPrint(StackStruct* Stack);                              

#endif