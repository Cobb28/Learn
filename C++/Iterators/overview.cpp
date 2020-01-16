//------LES ITERATEURS SONT DES POSITIONS------//

//L'intérêt des itérateurs est qu'on les utilise de la même manière quel que soit le conteneur.
//Pas besoin de faire de distinction entre les vectors, les maps ou les lists.
//Chaque conteneur possède son propre type d'itérateur mais la manière de les déclarer est toujours la même.

//Tous les conteneurs possèdent une méthode begin() renvoyant un itérateur sur le premier élément contenu.
//On peut ainsi faire pointer l'itérateur sur le premier élément. On avance alors dans le conteneur en utilisant l'opérateur++.
//Il ne nous reste plus qu'à spécifier une condition d'arrêt. On ne veut pas aller en dehors du conteneur. Pour éviter cela,
//les conteneurs possèdent une méthode end() renvoyant un itérateur sur la fin du conteneur.

//Dans toutes les séquences et conteneurs trouvés dans la bibliothèque standard C++
//end() retournera un itérateur à un passé de la dernière position (pas la dernière position !).

//Pour les vector et les deque, cela peut vous sembler inutile : on peut faire aussi bien avec les crochets[].
//Mais pour les map et surtout les list, ce n'est pas vrai : les itérateurs sont le seul moyen que nous avons de les parcourir.




//------D'ITERATEURS A VALEURS------//

//Pour convertir une position en une valeur, un itérateur est déréférencé :

auto my_iterator = my_vector.begin(); // position
auto my_value = *my_iterator;         // value

//On peut considérer qu'un itérateur est un déréférencement de la valeur à laquelle il se réfère dans la séquence.
//Cela est particulièrement utile dans le cas de
//comprendre pourquoi vous ne devez jamais déréférencer l'itérateur end() dans une séquence (CF ligne 12).

//Dans une séquence vide, begin() et end() seront à la même position, et aucun des deux ne peut être déréférencé.

//Un itérateur est invalidé si (par exemple, au cours d'une opération) sa position ne fait plus partie d'une séquence.
//Un itérateur invalide ne peut pas être déréférencé tant qu'il n'a pas été réaffecté à une position valide. Par exemple :

std::vector<int>::iterator first;
{
    std::vector<int> foo;
    first = foo.begin(); // first est valide
} // foo est hors scope et est détruit
// first est maintenant invalide




//------NAVIGUER AVEC LES ITERATEURS------//

auto first = my_vector.begin();
++first;                                                            // avance l'iterateur d'une position
std::advance(first, 1);                                             // avance l'iterateur d'une position
first = std::next(first);                                           // renvoie l'itérateur à l'élément suivant
std::advance(first, -1);                                            // avance l'itérateur d'une position vers l'arrière
first = std::next(first, 20);                                       // renvoie l'itérateur à la position 20 de l'élément vers l'avant
first = std::prev(first, 5);                                        // renvoie l'itérateur à la position 5 de l'élément vers l'arrière
auto dist = std::distance(my_vector.begin(), first);                // renvoie la distance entre deux itérateurs




//------TRAITS D'ITERATEURS------//

