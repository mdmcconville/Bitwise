#include "bitwise.h"

/*
Determines the parity of an unsigned long
input: an unsigned long
output: 1 if an odd number of set bits; 0 if even
*/
short Bitwise::parity(unsigned long bits)
{
	short count = 0;
	while (bits)
	{
		count += (bits & 1);
		bits >>= 1;
	}
	// Return whether count is even or not
	return count % 2;
}

/*
Toggles the last bit of an unsigned long
input: an unsigned long
output: the unsigned long with last bit toggled
*/
unsigned long Bitwise::changeLastBit(unsigned long bits)
{
	unsigned long temp = bits;
	// Bitwise xor of the last bit and 1
	temp ^= 1u;
	return temp;
}

/*
Sets all of the bits to the right of the last set bit
input: an unsigned long
output: the unsigned long with bits to right of last set bit propagated
*/
unsigned long Bitwise::rightPropagateBits(unsigned long bits)
{
	// Don't bother doing anything if all zeros
	if (bits != 0u)
	{
		int count = 0;
		// Stop when the first set bit is reached
		while ((bits & (1 << count)) == 0)
		{
			// Set the bit in the count position
			bits |= 1 << count;
			count++;
		}
	}
	return bits;
}