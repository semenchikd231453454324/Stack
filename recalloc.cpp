#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <assert.h>

#include "StackStruct.h"
#include "recalloc.h"

void* recalloc(void* MemPointer, size_t ElementsNum, size_t SizeOfElement, int WorkScenario)          //TODO test recalloc в цикле %x по char*, яд C0D 16 ричная 
{
    assert(MemPointer);

    void* NemMemPointer = realloc(MemPointer, ElementsNum*SizeOfElement);

    if(NemMemPointer == nullptr)
    {
        return nullptr;
    }
    
    switch (WorkScenario)
    {
        case Expand:
        {

            void* MemPointerForMemset = (void*) ((char*) NemMemPointer + (ElementsNum*SizeOfElement)/2);

            memset( MemPointerForMemset, 0, (ElementsNum*SizeOfElement)/2);

            break;
        }

        case Reduce:
        {
            void* MemPointerForMemset = (void*) ((char*) NemMemPointer + ElementsNum*SizeOfElement);

            memset( MemPointerForMemset, 0, (ElementsNum*SizeOfElement)*3);

            break;
        }

        default:
        {
            return nullptr;

            break;
        }
    }  

    return NemMemPointer;
}