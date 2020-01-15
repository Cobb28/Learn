int a = 3;          // 0001b
int b = a << 2;     // 1100b
std::cout << "a = " << a << ", b = " << b << std::endl; //Output : a = 3 , b = 12

//The left bit wise shift will shift the bits of the left hand value (a) the number specified on the right (1), essentially
//padding the least significant bits with 0's, so shifting the value of 5 (binary 0000 0101) to the left 4 times (e.g. 5 <<
//4) will yield the value of 80 (binary 0101 0000). You might note that shifting a value to the left 1 time is also the same
//as multiplying the value by 2, example:

int a = 7;
while (a < 200)
{
    std::cout << "a = " << a << std::endl;
    a <<= 1;
}

//Same as

a = 7;
while (a < 200)
{
    std::cout << "a = " << a << std::endl;
    a *= 2;
}


//But it should be noted that the left shift operation will shift all bits to the left, including the sign bit, example:
int a = 2147483647;     // 0111 1111 1111 1111 1111 1111 1111 1111
int b = a << 1;         // 1111 1111 1111 1111 1111 1111 1111 1110
std::cout << "a = " << a << ", b = " << b << std::endl; //Possible Output : a = 2147483647, b = -2


//While some compilers will yield results that seem expected, it should be noted that if you left shift a signed number
//so that the sign bit is affected, the result is undefined. It is also undefined if the number of bits you wish to shift by
//is a negative number or is larger than the number of bits the type on the left can hold, example:
int a = 1;
int b = a << -1;     // undefined behavior
char c = a << 20;    // undefined behavior


//The bit wise left shift does not change the value of the original values unless specifically assigned to using the bit
//wise assignment compound operator <<=:
int a = 5;  // 0101b
a <<= 1;    // a = a << 1;