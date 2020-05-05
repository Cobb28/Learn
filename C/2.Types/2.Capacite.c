/*

Tous les types stockant des nombres ont des bornes, c’est-à-dire une limite aux valeurs qu’ils peuvent stocker. 

*/


//////////////------------------Taille || Plage de Valeur------------------//////////////



//TYPE VIDE

// inaccessible || inaccessible
void;



//TYPE CHAR (EQUIVALENT POUR INT)

// 1 || -128 à 127
signed char;  

// 1 || -0 à 255
unsigned char;



//TYPE INT

// 2 || -32 768 à 32 767
signed short int;

// 2 || 0 à 65 535
unsigned short int;

// 2 || -32 768 à 32 767 (processeur 16 bits)
signed int;

// 4 || -2 147 483 648 à 2 147 483 647 (processeur 32 bits/64bits)
signed int;  

// 2 || 0 à 65 535 (processeur 16 bits)
unsigned int;

// 4 || 0 à 4 294 967 295 (processeur 32 bits/64 bits)
unsigned int;   

// 4 || -2 147 483 648 à 2 147 483 647 (processeur 32 bits)
signed long int;

// 8 || -9 223 372 036 854 775 808 ; +9 223 372 036 854 775 807 (processeur 64 bits)
signed long int;

// 4 || 0 à 4 294 967 295 (processeur 32 bits)
unsigned long int;

// 8 || 0 à 18 446 744 073 509 551 615  (processeur 64 bits)
unsigned long int;

// 8 || -9 223 372 036 854 775 808 à 9 223 372 036 854 775 807 (processeur 32 bits)
signed long long int; 

// 8 || 0 à 18 446 744 073 509 551 615 (processeur 32 bits)
unsigned long long int;


//TYPE FLOTTANT

// 4 || 3.4*10-38 à 3.4*1038
float;

// 8 || 1.7*10-308 à 1.7*10308
double;

// 10 || 3.4*10-4932 à 3.4*104932
long double;



//TYPE LOGIQUE

// 4 || -2 147 489 648 à 2 147 489 647 = 0 à 1
_Bool;



/*

char ≤ short ≤ int ≤ long ≤ long long et float ≤ double ≤ long double
Aujourd’hui il n’est pas nécessaire de se casser la tête sur quel type choisir (excepté si vous voulez programmer pour de petits appareils où la mémoire est plus petite). 

*/