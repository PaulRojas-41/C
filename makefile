#For more reference regarding gdb and other useful debug flags: https://gcc.gnu.org/onlinedocs/gcc/Debugging-Options.html

GCC_FLAGS = gcc -g -m64 
COMPILER_FLAGS = -Wall -g -Wextra
OBJS = x4_strings_and_funcs.o
EXE = x4_strings_and_funcs

$(EXE): $(OBJS)
	$(GCC_FLAGS) $(COMPILER_FLAGS) -o $@ $(OBJS)

%.o: %.c
	$(GCC_FLAGS) $(COMPILER_FLAGS) -c $< 

clean: 
	@rm -rf *.o *.exe 