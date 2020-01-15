//A bit wise XOR (exclusive or) operates on the bit level and uses the following Boolean truth table:
true OR true = false
true OR false = true
false OR false = false


int a = 5;          // 0101b (0x05)
int b = 9;          // 1001b (0x09)
int c = a ^ b;      // 1100b (0x0C)
int c = a xor b;
std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl; //Output : a = 5, b = 9, c = 12


int a = 0 1 0 1
int b = 1 0 0 1 ^
        ---------
int c = 1 1 0 0


//The bit wise XOR does not change the value of the original values unless specifically assigned to using the bit wise
//assignment compound operator ^=:

int a = 5;      // 0101b (0x05)
a ^= 9;         // a = 0101b ^ 1001b
a xor_eq 9;


// nice trick. But should not be used in production
//code (there are better ways std::swap() to achieve the same result).

int a = 42;
int b = 64;
// XOR swap
a ^= b;
b ^= a;
a ^= b;
std::cout << "a = " << a << ", b = " << b << "\n"; //Output : a = 64 , b = 42

//To productionalize this you need to add a check to make sure it can be used.
void doXORSwap(int& a, int& b)
{
    // Need to add a check to make sure you are not swapping the same
    // variable with itself. Otherwise it will zero the value.
    if (&a != &b)
    {
        // XOR swap
        a ^= b;
        b ^= a;
        a ^= b;
    }
}
