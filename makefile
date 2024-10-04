DED_FLAGS=-Wall -Wextra -Weffc++ -Wcast-align -Wcast-qual -Wconversion -Wctor-dtor-privacy -Wempty-body -Wfloat-equal -Wformat-security -Wformat=2 -Wignored-qualifiers -Winit-self -Winline -Wlogical-op -Wmain -Wmissing-declarations -Wno-missing-field-initializers -Wmissing-include-dirs -Wnon-virtual-dtor -Woverloaded-virtual -Wpointer-arith -Wredundant-decls -Wshadow -Wsign-promo -Wstack-usage=8192 -Wstrict-aliasing -Wstrict-null-sentinel -Wswitch-default -Wswitch-enum -Wtype-limits -Wundef -Wunreachable-code -Wwrite-strings -fexceptions -g -pipe -D_DEBUG -D_EJUDGE_CLIENT_SIDE -D_EJC

all: Stack

Stack: main.o StackCtor.o StackPush.o recalloc.o StackPop.o StackDump.o StackVerif.o StackGuard.o StackDestruct.o ErrorPrint.o
	@g++ main.o StackCtor.o StackPush.o recalloc.o StackPop.o StackDump.o StackVerif.o StackGuard.o StackDestruct.o ErrorPrint.o -o Stack

main.o: main.cpp
	@g++ $(DED_FLAGS) -c main.cpp -o main.o

StackCtor.o: StackCtor.cpp
	@g++ $(DED_FLAGS) -c StackCtor.cpp -o StackCtor.o

StackPush.o: StackPush.cpp
	@g++ $(DED_FLAGS) -c StackPush.cpp -o StackPush.o

recalloc.o: recalloc.cpp
	@g++ $(DED_FLAGS) -c recalloc.cpp -o recalloc.o

StackPop.o: StackPop.cpp
	@g++ $(DED_FLAGS) -c StackPop.cpp -o StackPop.o

StackVerif.o: StackVerif.cpp
	@g++ $(DED_FLAGS) -c StackVerif.cpp -o StackVerif.o

StackDump.o: StackDump.cpp
	@g++ $(DED_FLAGS) -c StackDump.cpp -o StackDump.o

StackGuard.o: StackGuard.cpp
	@g++ $(DED_FLAGS) -c StackGuard.cpp -o StackGuard.o

StackDestruct.o: StackDestruct.cpp
	@g++ $(DED_FLAGS) -c StackDestruct.cpp -o StackDestruct.o

ErrorPrint.o: ErrorPrint.cpp
	@g++ $(DED_FLAGS) -c ErrorPrint.cpp -o ErrorPrint.o	

clean:
	rm *.o
	rm Stack