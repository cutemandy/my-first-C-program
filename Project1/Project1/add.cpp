#include <stdio.h>
unsigned char add()
{
	unsigned static int x;
	x++;
	return x;
}