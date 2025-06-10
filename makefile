GCC_FLAGS = gcc -ggdb
COMPILER_FLAGS = -Wall -g -Wextra
OBJS += x1_memleak.o
EXE = x1_memleak

$(EXE): $(OBJS)
	$(GCC_FLAGS) $(COMPILER_FLAGS) -o $@ $(OBJS) 

%.o: %.c
	$(GCC_FLAGS) $(COMPILER_FLAGS) -c $< 

test_2:
	@echo '[exe....]' $(EXE)

clean: 
	@rm -rf *.o *.exe 