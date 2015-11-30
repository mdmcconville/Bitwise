#include "assert.h"
#include <iostream>
#include "bitwise.h"

using namespace std;

void testFunctions();

int main()
{
	testFunctions();
		
	return 0;
}

void testFunctions()
{
	cout << "Parity of 11 (1011) is " << Bitwise::parity((unsigned long)7) 
	     << endl;
	assert(Bitwise::parity((unsigned long)7) == 1);
	
	cout << "Parity of 10 (1010) is " << Bitwise::parity((unsigned long)10) 
	     << endl;
	assert(Bitwise::parity((unsigned long)10) == 0);
	
	cout << "Parity of 152 (10011000) is " 
	     << Bitwise::parity((unsigned long)152) << endl;	
	assert(Bitwise::parity((unsigned long)152) == 1);
	
	cout << "Parity of 129 (10000001) is " 
	     << Bitwise::parity((unsigned long)129) << endl;
	assert(Bitwise::parity((unsigned long)129) == 0);
	
	cout << "Parity of 241 (11110001) is " 
	     << Bitwise::parity((unsigned long)241) << endl;
	assert(Bitwise::parity((unsigned long)241) == 1);
	
	cout << "Parity of 243 (11110011) is " 
	     << Bitwise::parity((unsigned long)243) << endl;	     
	assert(Bitwise::parity((unsigned long)243) == 0);
	
	cout << endl;
	
	cout << "Change last bit of 3 (0011) to "	
	     << Bitwise::changeLastBit((unsigned long)3) << endl;
	assert(Bitwise::changeLastBit((unsigned long)3) == (unsigned long)2);
	
	cout << "Change last bit of 4 (0100) to " 
	     << Bitwise::changeLastBit((unsigned long)4) << endl;
	assert(Bitwise::changeLastBit((unsigned long)4) == (unsigned long)5);
	
	cout << "Change last bit of 20 (00010100) to " 
	     << Bitwise::changeLastBit((unsigned long)20) << endl;
	assert(Bitwise::changeLastBit((unsigned long)20) == (unsigned long)21);
	   
	cout << "Change last bit of 17 (10001) to "
		 << Bitwise::changeLastBit((unsigned long)17) << endl;
	assert(Bitwise::changeLastBit((unsigned long)17) == (unsigned long)16);
	     
	cout << endl;


	cout << "Propagate right bits of 20 (10100) to "
		 << Bitwise::rightPropagateBits((unsigned long)20) << endl;
	assert(Bitwise::rightPropagateBits((unsigned long)20) == (unsigned long)23);
	
	cout << "Propagate right bits of 8 (1000) to "
		 << Bitwise::rightPropagateBits((unsigned long)8) << endl;
	assert(Bitwise::rightPropagateBits((unsigned long)8) == (unsigned long)15);
	
	cout << "Propagate right bits of 17 (10001) to "
		 << Bitwise::rightPropagateBits((unsigned long)17) << endl;
	assert(Bitwise::rightPropagateBits((unsigned long)17) == (unsigned long)17);
	
	cout << endl;

	
	cout << "One's complement of 8 is "
		 << Bitwise::onesComplement((unsigned long)8)
		 << endl;
	assert(Bitwise::onesComplement((unsigned long)8) == (long)8);	 
		 
	cout << "One's complement of 7 is "
		 << Bitwise::onesComplement((unsigned long)7)
		 << endl;
	assert(Bitwise::onesComplement((unsigned long)7) == (long)7);	 
		 
	cout << "One's complement of 128 is "
		 << Bitwise::onesComplement((unsigned long)128)
		 << endl;
	assert(Bitwise::onesComplement((unsigned long)128) == (long)-127);	 
		 
	cout << "One's complement of 255 is "
		 << Bitwise::onesComplement((unsigned long)255)
		 << endl;
	// Can't return -0
	assert(Bitwise::onesComplement((unsigned long)255) == (long)0);
		 
	cout << "One's complement of 254 is "
		 << Bitwise::onesComplement((unsigned long)254)
		 << endl;
	assert(Bitwise::onesComplement((unsigned long)254) == (long)-1);
}
