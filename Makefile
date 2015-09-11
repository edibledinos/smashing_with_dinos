.PHONY:	all

all: logics1_a logics1_b logics2 sidechannel1 stack_var1 stack_rp1 stack_rp2

stack_rp1: stack_rp1.c
	$(CC) $(CFLAGS) $< -o $@ -fno-stack-protector
