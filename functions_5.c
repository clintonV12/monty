#include "monty.h"

void nop(stack_t **stack, unsigned int line_number);

/**
* nop - Does absolutely nothing for the Monty opcode 'nop'.
* @stack: A pointer to the top mode node of a stack_t linked list.
* @line_number: The current working line number of a Monty bytecodes file.
*/
void nop(stack_t **stack, unsigned int line_number)
{
(void)stack;
(void)line_number;
}

