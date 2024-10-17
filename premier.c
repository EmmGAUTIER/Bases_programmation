/*
 * premier.c
 * E. Gautier, le 16 octobre 2024
 *
 * Description : Réalisation des 4 opérations sur deux nombre entiers.
 *
 * Usage : Déamarrer le programme avec la commande premier
 * tapez les nombres à traiter, puis l'opération demandée;
 * premier vous répond avec le résultat.
 */

/* Ligne qui indique qu'il faut lire le fichier stdio.h */
/* Ce fichier contient les "prototypes" de scanf et printf */

#include <stdio.h>

/*
 * somme
 *
 * paramètres (entrées):
 *   a et b de types entiers (int)
 * Valeur retournée (sortie):
 *   somme de a et b
 */
int somme (int a1, int a2)
{
    int resultat;

    resultat  = a1 + a2;

    return resultat;
}

/*
 * multiplication
 *
 * param  a, b : nombres à multiplier
 * return : produit des nombres
 */
int multiplication (int m1, int m2)
{
    return m1 * m2;
}

int division (int dividande, int diviseur)
{
    return dividande / diviseur;
}

/*
 * soustraction, division
 *
 * TODO
 *
 */
int soustraction (int s1, int s2)
{
    return s1 / s2;
}


/*
 *
 */
/* Déclaration de la fonction main, c'est la première fonction appelée */
int main()
{
    /* Déclarer deux entiers (int) appelés a et b */
    int a, b;

    /* Déclarer un entier (int) appelé résultat */
    int resultat;

    char message[10] = "";

    /* déclarer un caractère (char) appelé op*/
    char op;

    /* Afficher  Le message : "Premier nombre : " */
    printf("Premier nombre  : ");

    /* Lire le nombre dans la variable a */
    scanf("%d", &a);

    /* Afficher  Le message : "Deuxième nombre : " */
    printf("Deuxième nombre  : ");

    /* Lire le nombre dans la variable a */
    scanf("%d", &b);

    /* Afficher "Quelle opération voulez-vous ? +, -, * ou / :" */
    printf("Quelle opération voulez-vous ? +, -, * ou / :");
    /* Lire la réponse et la mettre dans op */
    scanf(" %s", message);

    switch (message[0]) {
        case '+' :
            resultat = somme (a, b);
            break;
        /* Ajouter les autres calculs : soustraction, multiplication et division */
        case '-' :
            resultat = soustraction (a, b);
            break;
        case '*' :
            resultat = multiplication (a, b);
            break;
        case '/' :
            resultat = division (a, b);
            break;
        default:
            resultat = 0;
            break;
    }
    printf ("Résultat : %d\n", resultat);

    return 0;
}

