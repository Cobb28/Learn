//------EXEMPLE D'ITERATEUR DE STD::VECTOR------//

#include <vector>
#include <iostream>
int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5};   // initialise le vector en utilisant une liste d'initialisation.
    
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
    return 0;
}

//Sortie : 1 2 3 4 5


//Si le vector est const, begin() et end() renvoient un const_iterator.
//Si vous voulez qu'un const_iterator soit renvoyé même si votre vector n'est pas const,
//vous pouvez utiliser cbegin() et cend().



//Autre façon d'itéré sur un vector 

#include <vector>
#include <iostream>
int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5};   // initialise le vector en utilisant une liste d'initialisation.
    
    for (auto i : v)                        // auto est de type int comme le vector, on itere sur chaque element du vector (for each)
    {
        std::cout << i << std::endl;
    }
    return 0;
}

//Sortie : 1 2 3 4 5