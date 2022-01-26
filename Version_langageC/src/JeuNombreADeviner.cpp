/*************************************************/
// Nom du projet: Jeu du nombre à deviner
// Nom du fichier: JeuNombreADeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de création : 21/01/2022
// Rôle du fichier: Contient le code des fonctions du jeu
// Nom des composants utilises: JeuNombreADeviner.h
//                              stdio
//                              ctime, cstdlib
// Historique du fichier:
/*************************************************/
#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include "../include/JeuNombreAdeviner.h"

int nbj=0;
int *nbtry=0

// Nom :tirerNombreMystere
// Rôle : Tire aléatoirement un nombre à deviner entre nbMin et nbMAx
// Paramètres d'entrée: nbMin, nbMAx : limites du nombre à deviner
// Valeur de retour : nombre à deviner

int tirerNombreMystere(int nbMin, int nbMax)
{

    int nb = 0; // Nombre aleatoire

    // Initialisation du générateur aléatoire avec l'heure
    // pour obtenir une série de nombres differents à chaque execution
    srand((int)time(NULL));

    nb = rand()%(nbMax - nbMin+1) + nbMin; // compris entre nbMin et nbMax inclus

    return nb;
}


// Nom :jouerPartie
// Rôle : Fait jouer une partie à un joueur
//
// Paramètres d'entrée: le nombre à deviner, les limites min et max du nombre à deviner, le nombre maximal d'essais possibles
// Paramètres de sortie: nombre d'essais utilisés par le joueur
// Valeur de retour : 0 si la partie est perdue, 1 sinon

// Ajouter le CODE de  la fonction

int jouerPartie(int nb, int nbMin, int nbMax, int tryMax, int *nbtry)
{
    printf("Saisir un nombre entre 0 et 10 \n");
    scanf("%d",&nbj);

    while((nbj!=nb) || (*nbtry!=tryMax))
    {
        if(nb<nbj)
        {
        printf("faux la valeur est plus petite\n");
        printf("Saisir un nouveau nombre\n";
        scanf("%d",&nbj);
        }

        if(nb>nbj)
        {
        printf("faux la valeur est plus grande\n");
        printf("Saisir un nouveau nombre\n");
        scanf("%d",&nbj);
        }

         nbtry=nbtry+1;

    }

    if (*nbtry==tryMax)
    {
        printf("Dommage vous avez perdu\n");
    }

    else
    {
        printf("Bravo vous avez gagné\n");
    }
    return *nbtry;
}






