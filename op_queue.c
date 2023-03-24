#include "monty.h"

/**
 * op_queue - Main entry
 * Description: set to queue mode
 * @stack: unused
 * @line_number: unused
 * Return void
 **/

void op_queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	mem.mode = QUEUE;
}
