//C++ ne supporte pas de syntaxe spéciale pour l'indexation d'un tableau multidimensionnel. Un tel tableau est plutôt considéré comme un
//tableau de tableaux (éventuellement de tableaux, etc.), et la notation ordinaire à index unique [i] qui est utilisée pour chaque niveau. Dans
//l'exemple ci-dessus m[x] se réfère à la ligne x de m, où x est un indice basé sur zéro. Cette rangée peut ensuite être indexée à son tour,
//par exemple m[x][y], qui se rapporte au yième élément - ou colonne - de la ligne x.
#include <iostream>

int main()
{
    int const n_lignes = 3;
    int const n_colonnes = 7;
    int const m[n_lignes][n_colonnes] =
    {
        {1, 2, 3, 4, 5, 6, 7},
        {8, 9, 10, 11, 12, 13, 14},
        {15, 16, 17, 18, 19, 20, 21}
    };
        
    for (int x = 0; x < n_lignes; ++x)
    {
        for (int y = 0; y < n_colonnes; ++y)
        {
            std::cout << m[x][y] << std::endl;
        }
    }

    return 0;
}

//Sortie : 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21


