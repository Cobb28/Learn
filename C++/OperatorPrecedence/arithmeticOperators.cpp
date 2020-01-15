//Arithmetic operators in C++ have the same precedence as they do in mathematics:
/*Multiplication and division have left associativity(meaning that they will be evaluated from left to right) and they
have higher precedence than addition and subtraction, which also have left associativity.*/
//We can also force the precedence of expression using parentheses ( ). 


//Addition:
int a = 2+4/2;          // equal to: 2+(4/2) result: 4
int b = (3+3)/2;        // equal to: (3+3)/2 result: 3

//With Multiplication
int c = 3+4/2*6;        // equal to: 3+((4/2)*6) result: 15
int d = 3*(3+6)/9;      // equal to: (3*(3+6))/9 result: 3

//Division and Modulo
int g = 3-3%1;          // equal to: 3 % 1 = 0 3 - 0 = 3
int h = 3-(3%1);        // equal to: 3 % 1 = 0 3 - 0 = 3
int i = 3-3/1%3;        // equal to: 3 / 1 = 3 3 % 3 = 0 3 - 0 = 3
int l = 3-(3/1)%3;      // equal to: 3 / 1 = 3 3 % 3 = 0 3 - 0 = 3
int m = 3-(3/(1%3));    // equal to: 1 % 3 = 1 3 / 1 = 3 3 - 3 = 0
