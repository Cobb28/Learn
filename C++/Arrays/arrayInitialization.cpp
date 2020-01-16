#include <string>

// L'exemple du tableau suivant utilise le type int, le nom de la variable est arrayOfInts, et le nombre d'éléments
//[5] est l'espace que le tableau possède :
int arrayOfInts[5];


//Un tableau peut être déclaré et initialisés au même moment comme suit :
int arrayOfInts[5] = {10, 20, 30, 40, 50};


// Il est également possible de n'initialiser que les premiers éléments tout en allouant plus d'espace. Dans ce cas, la définition de la longueur dans
//les crochest est obligatoire. Ce qui suit va allouer un tableau de longueur 5 avec une initialisation partielle, le compilateur
//initialise tous les éléments restants avec la valeur standard du type d'élément, dans ce cas zéro.
int arrayOfInts[5] = {10,20}; // représente 10, 20, 0, 0, 0


//Les tableaux d'autres types de données de base peuvent être initialisés de la même manière.
char arrayOfChars[5]; // Déclare le tableau et alloue la mémoire, n'initialise pas
char arrayOfChars[5] = { 'a', 'b', 'c', 'd', 'e' } ; //Déclare et initialise
double arrayOfDoubles[5] = {1.14159, 2.14159, 3.14159, 4.14159, 5.14159};
std::string arrayOfStrings[5] = { "C++", "is", "super", "duper", "great!"};

//Il est important de prendre note, que l'orsuqu'on tente d'accéder à un élement du tableau à partir
//de l'index, celui-ci commence à la valeur 0
int array[5] = { 10/*Element no.0*/, 20/*Element no.1*/, 30, 40, 50/*Element no.4*/};
std::cout << array[4]; //Sortie 50
std::cout << array[0]; //Sortie 10
