/*

Le langage C fournit des opérateurs de comparaison pour comparé la valeur de 
2 opérandes. Les opérandes peuvent être des éxpressions.

Le résultat d'une comparaison est soit vrai (= 1) soit faux (= 0).

On les utilisent le plus souvent pour les conditions.

*/

== || Egalité

!= || Inégalité

<  || Strictement inférieur à

>  || Strictement supérieur à

<= || Inférieur ou égale à

>= || Supérieur ou égale à


///////////Exemple d'utilisation///////////

int main(void)
{
    printf("10 == 20 vaut %d\n", 10 == 20); // 10 == 20 vaut 0
    printf("10 != 20 vaut %d\n", 10 != 20); // 10 != 20 vaut 1
    printf("10 < 20 vaut %d\n", 10 < 20);   // 10 < 20 vaut 1
    printf("10 > 20 vaut %d\n", 10 > 20);   // 10 > 20 vaut 0

    return 0;
}