//Si nous voulons itérer à l'envers à travers une liste ou un vecteur, nous pouvons utiliser un reverse_iterator.
//Un itérateur inverse est faità partir d'un itérateur d'accès bidirectionnel, ou aléatoire,
//qu'il conserve comme un membre accessible par base(). Pour itérer à l'envers, utilisez rbegin() et rend() comme
//itérateurs de fin de collection, et le début de l'itérateur respectivement.

#include <vector>
#include <iostream>
int main()
{
    std::vector<int> v{1, 2, 3, 4, 5};

    for (std::vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); ++it)
    {
        std::cout << *it << "\n";
    } 
    return 0;
}

// Sortie : 5 4 3 2 1



//Un itérateur inverse peut être converti en un itérateur avant via la fonction membre base().
//L'itérateur de base est un itérateur du même type que celui utilisé pour construire le reverse_iterator, 
//mais pointant vers l'élément à côté de celui vers lequel le reverse_iterator pointe actuellement 
//(un reverse_iterator (r) a toujours un décalage de -1 par rapport à son itérateur de base (r.base())).

std::vector<int>::reverse_iterator r = v.rbegin();
std::vector<int>::iterator i = r.base();

//Voird Doc pour shéma explicatif