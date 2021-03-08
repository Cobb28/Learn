/*

Une condition est soit vrai soit fausse, pour cela, en C faux est représenté par 0
et vrai par tout ce qui est différent de 0.
On peut également utilisé le fichier d'en tête stdbool.h pour utiliser bool avec les valeur true et false.

true vaut 1 et false vaut 0.

*/

#include <stdbool.h>
#include <stdio.h>

int main () {

    bool booleen = true;

    printf("true = %u, false = %u\n", true, false); // true = 1, false = 0
    printf("booleen = %u\n", booleen); //booleen = 1
    
    return 0;
}