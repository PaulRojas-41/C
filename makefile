GCC_FLAG = gcc
C_FLAGS = -Wall -g -Wextra
OBJS= test.o
C_FILES= test.c
EXE = test

$(EXE): $(OBJS)
	$(GCC_FLAG) $(C_FLAGS) -o $@ $(OBJS)

%.o: %.c
	$(GCC_FLAG) $(C_FLAGS) -c $< 

test_2:
	@echo '[exe....]' $(EXE)

clean: 
	@rm -rf *.o *.exe 