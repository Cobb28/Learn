/*

Voici la fonction scanf() en C pour l'entrée textuelle, une saisie de l'utilisateur depuis la console.
C'est un fonction bloquante, elle stop l'éxecution du programme tant que l'utilisateur n'a rien saisie.
Pour pouvoir l'utiliser il faut inclure le fichier d'en-tête stdio.h.
stdio.h fait partie de la bibliothéque standard du langage C.

*/

#include <stdio.h>

int main () {

    int var;

    scanf("%d", &var); //La saisie de l'utilisateur sera stockée dans var

    return 0;
}

//Le second argument de scanf demande une adresse, car la fonction à besoin de savoir quel emplacement mémoire
//elle doit modifier.


/*

Il est possible de lire plusieur entréé à la fois

*/


#include <stdio.h>

int main () {

    int var1;
    int var2; 

    scanf("%d%d", &var1, &var2); //La saisie de l'utilisateur sera stockée dans var

    return 0;
}