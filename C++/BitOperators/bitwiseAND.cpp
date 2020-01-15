//A bit wise AND operates on the bit level and uses the following Boolean truth table:
true AND true = true
true AND false = false
false AND false = false


int a = 6;          // 0110b (0x06)
int b = 10;         // 1010b (0x0A)
int c = a & b;      // 0010b (0x02)
int c = a bitand b;
std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl; //Output : a = 6 , b = 10 , c = 2


int a = 0 1 1 0
int b = 1 0 1 0 &
        ---------
int c = 0 0 1 0


//The bit wise AND does not change the value of the original values unless specifically assigned to using the bit wise
//assignment compound operator &=:

int a = 5;      // 0101b (0x05)
a &= 10;        // a = 0101b & 1010b
a and_eq 10;