/*

Il est possible de passer des arguments à la fonction printf() pour afficher la valeur de variables.
Pour cela printf() met a disposition les formats, qui indique que la valeur d'une variable est attendue.
Les formats sont reconnaissables par l'utilisation du caractères % suivie par une suite de lettre,
appelée "indicateur de conversion".

*/

int main () {

    int var = 10;

    printf("%d\n", var); //%d est le format qui permet d'afficher la valeur d'une variable de type int

    return 0;
}

/*

Il est possible d'afficher plusieur valeur à la fois.

*/


int main () {

    int var1 = 10;
    int var2 = 20;
    printf("%d%d\n", var1, var2); //%d est le format qui permet d'afficher la valeur d'une variable de type int

    return 0;
}


/*

Il existe 15 formats definies dans le standard du langage C :

*/

//////////// Format || Types ////////////

%d  &  %i || _Bool (sortie : 0 ou 1)
          || signed char (valeur numérique ASCI)
          || short
          || int 

%c || char 

%f  &  %e  &  %E  &  %g  &  %G || float 
                               || double

%ld  &  %li || long 

%lld  &  %lli  || long long

%u  &  %x  &  %X  &  %o || unsigned short int
                        || unsigned char
                        || unsigned int

%lu  &  %lx  &  %lX  &  %lo ||unsigned long int                       

%llu  &  %llx  &  %llX  &  %llo ||unsigned long long

%Lf  &  %Le  &  %LE  &  %Lg  &  %LG || long double 


/*

L'indicateur x et X permettent d'afficher la valeur sous sa forme hexadecimal (minuscule et majuscule), le o permet d'afficher la forme octal.

f permet d'afficher un flottant avec 6 chiffre après la virgule. Il est possible de choisir le nombre n de chiffre après la virgule avec %.nf.

e/E permet d'afficher un flottant sous sa forme scientifique (puissance de 10).

g/G permet de choisir entre les deux précèdent, supprime ce qu'il y a après la virgule si c'est inutile.



*/