
DED_FLAGS=-Wall -Wextra -Weffc++ -Wcast-align -Wcast-qual -Iinclude -Wconversion -Wctor-dtor-privacy -Wempty-body -Wfloat-equal -Wformat-security -Wformat=2 -Wignored-qualifiers -Winit-self -Winline -Wlogical-op -Wmain -Wmissing-declarations -Wno-missing-field-initializers -Wmissing-include-dirs -Wnon-virtual-dtor -Woverloaded-virtual -Wpointer-arith -Wredundant-decls -Wshadow -Wsign-promo -Wstack-usage=8192 -Wstrict-aliasing -Wstrict-null-sentinel -Wswitch-default -Wswitch-enum -Wtype-limits -Wundef -Wunreachable-code -Wwrite-strings -fexceptions -g -pipe -D_DEBUG -D_EJUDGE_CLIENT_SIDE -D_EJC
FILE_OBJECTS=main.o StackCtor.o StackPush.o recalloc.o StackPop.o StackDump.o StackVerif.o StackDestruct.o ErrorPrint.o
EXE_NAME=Stack
build_dir=Build

src_prefix=src/
build_prefix=Build/
#PATH=C:/Windows/System32/cmd.exe
#putsubstr
#variab

HUI = $(addprefix ${src_prefix}, main.cpp StackCtor.cpp StackPush.cpp recalloc.cpp StackPop.cpp StackDump.cpp StackVerif.cpp StackDestruct.cpp ErrorPrint.cpp)
OBJ = $(addprefix ${build_prefix}, main.o StackCtor.o StackPush.o recalloc.o StackPop.o StackDump.o StackVerif.o StackDestruct.o ErrorPrint.o)


all : $(EXE_NAME)

$(EXE_NAME): $(OBJ)
	@echo "[LD] Linking"
	@g++ $^ ${DED_FLAGS} -o Stack

${build_prefix}%.o: src\%.cpp
	@echo "[CXX] $@"
	@g++ -c $^ ${DED_FLAGS} -o $@

clean:
	rm -rf *.o *.exe