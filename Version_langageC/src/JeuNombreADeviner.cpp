/*************************************************/
// Nom du projet: Jeu du nombre � deviner
// Nom du fichier: JeuNombreADeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de cr�ation : 21/01/2022
// R�le du fichier: Contient le code des fonctions du jeu
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
// R�le : Tire al�atoirement un nombre � deviner entre nbMin et nbMAx
// Param�tres d'entr�e: nbMin, nbMAx : limites du nombre � deviner
// Valeur de retour : nombre � deviner

int tirerNombreMystere(int nbMin, int nbMax)
{

    int nb = 0; // Nombre aleatoire

    // Initialisation du g�n�rateur al�atoire avec l'heure
    // pour obtenir une s�rie de nombres differents � chaque execution
    srand((int)time(NULL));

    nb = rand()%(nbMax - nbMin+1) + nbMin; // compris entre nbMin et nbMax inclus

    return nb;
}


// Nom :jouerPartie
// R�le : Fait jouer une partie � un joueur
//
// Param�tres d'entr�e: le nombre � deviner, les limites min et max du nombre � deviner, le nombre maximal d'essais possibles
// Param�tres de sortie: nombre d'essais utilis�s par le joueur
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
        printf("Bravo vous avez gagn�\n");
    }
    return *nbtry;
}






