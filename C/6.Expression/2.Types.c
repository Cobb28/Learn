/*

Les constantes comme 2 ou 3 sont de type int et les constantes comme 5. ou 2.0 sont de type double.
Le résultat d'une opération sur ces constantes sera donc int et double, exemple :

*/

int var = 5 + 5; // int + int  = int (10)

int var = 5. + 5.0; // double + double = double (10.000000)

/*

Afin de savoir de quel type est une éxpréssion dans le cas où les types des opérandes ne 
sont pas préciser explicitement, il existe des règles :

*/


   - si un opérande est de type long double, le résultat est de type long double ;
   - si un opérande est de type double, le résultat est de type double ;
   - si un opérande est de type float, le résultat est de type float ;
   - si un opérande est de type unsigned long long, le résultat est de type unsigned long long;
   - si un opérande est de type long long, le résultat est de type long long;
   - si un opérande est de type unsigned long, le résultat est de type unsigned long;
   - si un opérande est de type long, le résultat est de type long;
   - si un opérande est de type unsigned int, le résultat est de type unsigned int;
   - le résultat est de type int.


/*

Il existe des précision pour les constantes pour ne pas toujours avoir un int ou un double,
pour cela on utilise des suffixes.
Nécessaires lors des éxpressions, pour ne pas avoir à crée des variables avec un types précis.

*/

u & U || unsigned //Combinable avec l et L

l & L || long //int ou double

ll & LL || long long

f & F || float

l & L || long double //Combinable avec u et U


////////Exemple d'utilisation////////


#include <stdio.h>


int main(void)
{
    /* long double + int = long double */
    printf("78.56 + 5 = %Lf\n", 78.56L + 5);

    /* long + double = double */
    printf("5678 + 2.2 = %f\n", 5678L + 2.2);

    /* long + unsigned long = unsigned long */
    printf("2 + 5 = %lu\n", 2L + 5UL);

    /* long long + int = long long */
    printf("1 + 1 = %lld\n", 1LL + 1);
    return 0;
}







