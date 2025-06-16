#For more reference regarding gdb and other useful debug flags: https://gcc.gnu.org/onlinedocs/gcc/Debugging-Options.html

GCC_FLAGS = gcc -g -m64 
COMPILER_FLAGS = -Wall -g -Wextra
OBJS = x3_pointers.o
EXE = x3_pointers

$(EXE): $(OBJS)
	$(GCC_FLAGS) $(COMPILER_FLAGS) -o $@ $(OBJS)

%.o: %.c
	$(GCC_FLAGS) $(COMPILER_FLAGS) -c $< 

clean: 
	@rm -rf *.o *.exe 