//decimal-literal
/*It is a non-zero decimal digit (1, 2, 3, 4, 5, 6, 7, 8, 9), followed by zero or more decimal digits (0, 1, 2, 3, 4, 5, 6, 7, 8, 9)*/
int a = 42;

//octal literal
/*It is the digit zero (0) followed by zero or more octal digits (0, 1, 2, 3, 4, 5, 6, 7)*/
int a = 042;

//hex-literal
/*It is the character sequence 0x or the character sequence 0X followed by one or more hexadecimal digits (0, 1, 2, 3,
4, 5, 6, 7, 8, 9, a, A, b, B, c, C, d, D, e, E, f, F)*/
int a = 0x2a;
int a = 0X2A;

//binary-literal (since C++14)
/*It is the character sequence 0b or the character sequence 0B followed by one or more binary digits (0, 1)*/
int a = 0b101101;
int a = 0B101101;

//Unsigned suffix
unsigned int a = 42u;
unsigned int a = 42U;
//The following variables are also initialized to the same value:
/*Letters in the integer literals are case-insensitive: 0xDeAdBaBeU and 0XdeadBABEu represent the same number
(one exception is the long-long-suffix, which is either ll or LL, never lL or Ll)*/
unsigned long long l1 = 18446744073709550592ull; // C++11
unsigned long long l2 = 18'446'744'073'709'550'592llu; // C++14
unsigned long long l3 = 1844'6744'0737'0955'0592uLL; // C++14
unsigned long long l4 = 184467'440737'0'95505'92LLU; // C++14
