#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS

/*
 * File: function pointers
 *
 * Desc: header file
*/

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
