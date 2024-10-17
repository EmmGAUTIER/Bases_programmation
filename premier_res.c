/*
 * premier.c
 * le 17 octobre 2024
 *
 * Description : Réalisation des 4 opérations sur deux nombre entiers.
 *
 * Usage : Déamarrer le programme avec la commande premier
 * tapez les nombres à traiter, puis l'opération demandée;
 * premier vous répond avec le résultat.
 *
 * Attention : Ce programme n'est pas robuste !
 */

/* Ligne qui indique qu'il faut lire le fichier stdio.h */
/* Ce fichier contient les "prototypes" de scanf et printf */

#include <stdio.h>

/*
 * addition
 * Cette fonction calcul la somme de deux nombres
 *
 * paramètres (entrées):
 *   a et b de types entiers (int)
 * Valeur retournée (sortie):
 *   somme de a et b
 */
int addition (int a1, int a2)
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
 * Compléter le commentaire
 * Écrire la fonction
 */
int soustraction (int s1, int s2)
{
    return s1 - s2;
}


/*
 Déclaration de la fonction main, c'est la première fonction appelée
 On dit aussi le "point d'entrée"
*/

int main()
{
    /* Déclarer deux entiers (int) appelés a et b */
    int a, b;

    /* Déclarer un entier (int) appelé résultat */
    int resultat;

    /* Sert à contenir le type d'opération à réaliser */
    /* TODO  mettre la commande dans un caractère */
    char message[10] = "";

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

    /*
     * Réalisation du calcul demandé
     * Il faut un aiguillage pour choisir l'appel de la fonction de calcul.
     * Cet aiguillage est fait avec "switch".
     */
    switch (message[0]) {
        case '+' : /* Cas addition */
            resultat = somme (a, b); /* Appel de la fonction d'additio */
            break; /* C'est fait, pas la peine de faire un autre calcul */

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

        default: /* C'est ballot, l'opération demandée n'est pas réalisable */
            resultat = 0;
            break;
    }
    printf ("Résultat : %d\n", resultat);

    return 0;
}

