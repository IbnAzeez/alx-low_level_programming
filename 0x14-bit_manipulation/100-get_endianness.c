#include <stdio.h>
#include <stdint.h>
#include "main.h"

/**
 * get_endianness - Checks the endianness.
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{
	union {
		uint32_t i;
		char c[4];
	} e = { 0x01000000 };

	return e.c[0];
}
