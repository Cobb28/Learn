//The bitwise NOT operator in C++ is the tilde character ~. Unlike & and |, 
//the bitwise NOT operator is applied to a single operand to its right.
//Bitwise NOT changes each bit to its opposite: 0 becomes 1, and 1 becomes 0.

int a = 103;  // binary:  0000000001100111
int b = ~a;   // binary:  1111111110011000 = -104


int a = 0 1 ~
        -----
int c = 1 0


//You might be surprised to see a negative number like -104 as the result of this operation. 
//This is because the highest bit in an int variable is the so-called sign bit. If the highest bit is 1, the number is interpreted as negative. 
//This encoding of positive and negative numbers is referred to as two’s complement.


//It is interesting to note that for any integer x, ~x is the same as -x - 1.