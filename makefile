#For more reference regarding gdb and other useful debug flags: https://gcc.gnu.org/onlinedocs/gcc/Debugging-Options.html

GCC_FLAGS = gcc -ggdb
COMPILER_FLAGS = -Wall -g -Wextra
OBJS += x2_memleak.o
EXE = x2_memleak

$(EXE): $(OBJS)
	$(GCC_FLAGS) $(COMPILER_FLAGS) -o $@ $(OBJS) 

%.o: %.c
	$(GCC_FLAGS) $(COMPILER_FLAGS) -c $< 

clean: 
	@rm -rf *.o *.exe 