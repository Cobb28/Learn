//A bit wise OR operates on the bit level and uses the following Boolean truth table:
true OR true = true
true OR false = true
false OR false = false


int a = 5;      // 0101b (0x05)
int b = 12;     // 1100b (0x0C)
int c = a | b;  // 1101b (0x0D)
int c = a bitor b;

std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl; //Output : a = 5, b = 12, c = 13


int a = 0 1 0 1
int b = 1 1 0 0 
        -------
int c = 1 1 0 1


//The bit wise OR does not change the value of the original values unless specifically assigned to using the bit wise
//assignment compound operator |=:

int a = 5;   // 0101b (0x05)
a |= 12;     // a = 0101b | 1100b
a or_eq 12;

//We can do this too :

int a = 0b0101;     //a = 5
int b = 0b1100;     //b = 12
a |= b;             //a = 13
a or_eq b;

