#For more reference regarding gdb and other useful debug flags: https://gcc.gnu.org/onlinedocs/gcc/Debugging-Options.html

GCC_FLAGS = gcc -m64 
COMPILER_FLAGS = -Wall -g -Wextra
OBJS +=\
	x13_diff_line_print.o \
	strcpy_lib.o

EXE = x13_diff_line_print

#linking phase of all the .c files to machine code done (put all together)
$(EXE): $(OBJS)
	$(GCC_FLAGS) $(COMPILER_FLAGS) -o $@ $(OBJS)

#compiles to machine code without linking 
%.o: %.c
	$(GCC_FLAGS) $(COMPILER_FLAGS) -c $< 

clean: 
	@rm -rf *.o *.exe 