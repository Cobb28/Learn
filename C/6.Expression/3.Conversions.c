/*

En C, il est possible de convertir un type en un autre, c'est ce que l'on
appelle la conversion de type (cast).
Il y a des pertes de données dans le cas où l'on convertie un type vers un type 
de données plus faible, qui ne peut contenir les informatios d'origine (double vers int).

*/



///////////////Conversion explicite///////////////

//(<Types>)<Expression>

int a =;

const double pi = 3.14;

a = (int)pi; // a = 3


///////////////Conversion implicite///////////////

int a;

const double pi = 3.14;

a = pi; // a = 3