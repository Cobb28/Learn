int a = 2;          // 0010b
int b = a >> 1;     // 0001b
std::cout << "a = " << a << ", b = " << b << std::endl; //Outut : a = 2, b = 1


//The right bit wise shift will shift the bits of the left hand value (a) the number specified on the right (1); it should be
//noted that while the operation of a right shift is standard, what happens to the bits of a right shift on a signed
//negative number is implementation defined and thus cannot be guaranteed to be portable, example:

int a = -2;
int b = a >> 1;     // the value of b will be depend on the compiler


//It is also undefined if the number of bits you wish to shift by is a negative number, example:
int a = 1;
int b = a >> -1;    // undefined behavior


//The bit wise right shift does not change the value of the original values unless specifically assigned to using the bit
//wise assignment compound operator >>=:

int a = 2;      // 0010b
a >>= 1;        // a = a >> 1;
