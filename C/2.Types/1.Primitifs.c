/*

 Un type permet d’indiquer au compilateur quel genre de données nous souhaitons stocker. Ce type va permettre de préciser :
    
    - toutes les valeurs que peut prendre la variable ;
    - les opérations qu’il est possible d’effectuer avec.

Définir le type d’une variable permet donc de préciser son contenu potentiel et ce que nous pouvons faire avec. Le langage C fournit neuf types de base :

*/

//////////////------------------Signification || Stockée------------------//////////////

/*

Un type signé est un type qui accepte que des valeurs positives ou nulles , il vous suffit de faire précéder le nom du type du mot-clé signed.

*/

// Entier || Entier
signed int entier; 

// Entier court || Entier 
signed short int;

// Entier long || Entier
signed long int;

// Entier très long || Entier
signed long long int;

// Réel || Réel
float;

// Réel double || Réel
double; 

// Réel double long || Réel
long double;

// Booléen || Entier (0 ou 1)
_Bool;

// Caractère || Caractère ou Entier
signed char; 

/*

Un type non-signé est un type qui n’accepte que des valeurs positives ou nulles : il ne peut pas stocker de valeurs négatives. 
Pour déclarer des variables d’un type non-signé, il vous suffit de faire précéder le nom du type du mot-clé unsigned.

*/

unsigned int;
unsigned short int;
unsigned long int;
unsigned long long int;
unsigned char;



