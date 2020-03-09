//Une boucle for est définie comme suit :

for (/*initialisation*/; /*condition (booléen)*/; /*iteration*/)
{
    /*instructions*/
}




//En C++, il est possible que la partie initialisation déclare une variable. Dans ce cas,
//la variable déclarée n'est définie qu'à l'intérieur de l'instruction for. Par exemple :

for (int i = 0; i < 10; ++i)
{
}

//Cela signifie que l'on ne peut pas utiliser la variable i après l'instruction for,
//puisqu'elle n'est définie que dans le corps de cette instruction. Cela permet de réaliser
//des variables muettes qui ne servent qu'à l'instruction for dans laquelle elles sont définies.
//Il est recommandé de ne pas déclarer de variables dans la partie initialisation des instructions for
//pour assurer une portabilité maximale.




//------EXEMPLE------//

for (int i = 0; i < 10; i++)
{
    std::cout << i << std::endl;
}


for (int a = 0, b = 10, c = 20; (a + b + c < 100); c--, b++, a += c)
{
    std::cout << a << " " << b << " " << c << std::endl;
}


int i = 99; //i = 99
for (int i = 0; i < 10; i++)    //on déclare une nouvelle variable i
{ 
    //la valeur de i varie de 0 à 9 pendant l'exécution de la boucle
}
//après l'exécution de la boucle, on peut accéder à i avec une valeur de 99


int i = 99; //i = 99
for(i = 0; i < 10; i++)     //on utilise la variable i déja déclaré
{ 
    //la valeur de i varie de 0 à 9 pendant l'exécution de la boucle
}
//après l'exécution de la boucel, on peut accéder à i avec une valeur de 10


//Boucle infinie :
for (;;) 
{
    std::cout << "Ne s'arrête jamais!\n";
}




//Autres syntaxes (sur une ligne) dans le cas d'une seule instrucions éxécutés par boucle, exemple :
for(int i = 0; i < 10; i++) std::cout << i << "\n";
