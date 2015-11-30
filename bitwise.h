#ifndef BITWISE_H_
#define BITWISE_H_
class Bitwise
{
	public:
		static short parity(unsigned long);
		static unsigned long changeLastBit(unsigned long);
		static unsigned long rightPropagateBits(unsigned long);
		static short bitsInDigit(unsigned long);
		static long onesComplement(unsigned long);
};

#endif