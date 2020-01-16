//------EXEMPLE D'ITERATEUR STD::MAP------//

// Crée une map et inséré des valeurs
std::map<char, int> mymap;
mymap['b'] = 100;
mymap['a'] = 200;
mymap['c'] = 300;

// Itérations sur tous les tuples
for (std::map<char, int>::iterator it = mymap.begin(); it != mymap.end(); ++it)
    std::cout << it->first << " => " << it->second << '\n';

//Sortie a => 200 b => 100 c => 300

