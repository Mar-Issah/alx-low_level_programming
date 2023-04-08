#include "main.h"

/**
* get_endianness - Function that checks the endianness
*
* Return: 0 if big endian, 1 if little endian
**/

int get_endianness(void)
{
unsigned int test_number = 1;
char *byte_pointer = (char *)&test_number;

return (*byte_pointer == 1);
}
