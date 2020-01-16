//En plus d'allouer dynamiquement des valeurs individuelles, nous pouvons également allouer dynamiquement des tableaux de variables. 
//Contrairement à un tableau fixe, où la taille du tableau doit être fixée à la compilation, 
//l'allocation dynamique d'un tableau nous permet de choisir une longueur de tableau à l'exécution.
//Pour allouer un tableau dynamiquement, nous utilisons la forme de tableau new et delete (souvent appelée new[] et delete[]) :

// Exemple de tableau de taille dynamique brute. Il est généralement préférable d'utiliser std::vector.

int* a = new int[n]; // ← Allocation d'un tableau de n éléments.

delete[] a; //Désallocation ([] version tableau de delete) Cela indique au CPU qu'il doit nettoyer plusieurs variables au lieu d'une seule.
            //L'utilisation de delete sur un tableau entraînera un comportement indéfini.

//Le tableau alloué ici a des valeurs indéterminées, mais il peut être initialisé à zéro en ajoutant simplement des
//parenthèses (), comme ceci : nouveau int[n](). Plus généralement, pour un type d'objet arbitraire, cela effectue une initialisation de la valeur.

int* a = new int[n]();


//Exemple de code 
#include <iostream>
 
int main()
{
    std::cout << "Entrer un entier positif ";
    int length{};
    std::cin >> length;
 
    int *array = new int[length]{}; //Notez que la longueur n'a pas besoin d'être constante.
 
    std::cout << "Je viens d'allouer un tableau d'entiers de longueur " << length << '\n';
 
    array[0] = 5;
 
    delete[] array;
 
    // Nous n'avons pas besoin de mettre array à nullptr/0 ici car il va de toute façon sortir du scope après cela.
 
    return 0;
}


//Un tableau dynamique commence sa vie comme un pointeur qui pointe vers le premier élément du tableau. 
//Par conséquent, il a les mêmes limitations dans la mesure où il ne connaît pas sa longueur ou sa taille. 
//Un tableau dynamique fonctionne de manière identique à un tableau fixe décomposé, 
//à l'exception du fait que le programmeur est responsable de la désallocation du tableau dynamique via le mot-clé delete[].

//Si vous voulez initialiser un tableau alloué dynamiquement à 0, la syntaxe est assez simple :
int *array  = new int[length] {}; //0 .. 0
int *array  = new int[5] {1,2,3}; //1 2 3 0 0 //Notez que cette syntaxe n'a pas d'opérateur= entre la longueur du tableau et la liste de l'initialisateur.


//L'allocation dynamique d'un tableau vous permet de définir la longueur du tableau au moment de l'allocation. 
//Cependant, C++ ne fournit pas de moyen intégré pour redimensionner un tableau qui a déjà été alloué. 
//Il est possible de contourner cette limitation en allouant dynamiquement un nouveau tableau,
// en copiant les éléments par dessus, et en supprimant l'ancien tableau. Cependant, ceci est sujet à des erreurs, 
//particulièrement lorsque le type d'élément est une classe (qui a des règles spéciales régissant la façon dont ils sont créés).

//Par conséquent, nous vous recommandons d'éviter de faire cela vous-même, il est préférable d'utiliser les vectors.