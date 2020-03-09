//Cette instruction de contrôle est utilisé quand on ne sait pas,
//à l'avance, combien de fois un bloc de code doit être exécuté.

//Une boucle while est définie comme suit :

/*inisialisation*/
while (/*condition (booléen)*/)
{
    /*instruction*/
    /*iteration*/
}




//------EXEMPLE------//

int i = 0;

while (i < 10)
{
    std::cout << i << " ";
    ++i; // Incremente le compteur (itérateur)
}
std::cout << std::endl; //Sortie : 0 1 2 3 4 5 6 7 8 9


//Notez que depuis C++17, les 2 premières instructions peuvent être combinées :
while (int i = 0; i < 10)
{
    std::cout << i << " ";
    ++i; // Incremente le compteur (itérateur)
}
std::cout << std::endl; //Sortie : 0 1 2 3 4 5 6 7 8 9


//Boucle infinie :
while (true /*1*/)
{
    /*instructions*/
}
