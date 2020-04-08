/*
 * Titre : Bataille Navale
 * Auteur : Kevin Gomes
 * Date : 25 mars 2020
 * Description : Programme effectué dans le cadre du MA-20 et ICT-114 du CPNV permettant de jouer à la bataille navale en solo avec une grille de base
 * Version : "1.0"
 */


#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//Renvoie vers la fonction du menu de base
void menuDeBase();

                                        //==== MENU DE JEU====
//Fonction du menu de jeux
void jeux(){

    //commande permettant de vider la page
    system("cls");

    char *val = "X";

    int ligneHor;
    int ligneVer;

    int carte[10][10] = {
            {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 1, 0, 0, 0, 0, 1, 0, 0, 0},
            {0, 1, 0, 0, 0, 0, 1, 0, 1, 1},
            {0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
            {0, 0, 1, 1, 1, 1, 0, 0, 0, 1},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
            {1, 1, 1, 1, 0, 0, 0, 0, 0, 0},
    };

            //boucle infini
            while (1){

                //commande permettant de vider la page
                system("cls");

                // affichage de la carte
                printf("\nVoici la carte\n");
                printf("Vous devez abattre tous les bateaux\n");
                printf("Bonne chance\n\n");

            // affichage des nombres du tableau horizontalement
            printf("  1   2   3   4   5   6   7   8   9   10   \n");

                // affichage de la carte
            for (int i = 0; i < 41; ++i) {
                printf("═");
            }

            //création du tableau
            printf("\n");
            for (int ligneHor = 0; ligneHor < 10; ++ligneHor) {
                for (int ligneVer = 0; ligneVer < 10; ++ligneVer) {
                    if (carte[ligneHor][ligneVer] == 9) {
                        printf("║ %c ", val);
                    } else {
                        printf("║   ");
                    }
                }
                printf("║\n");
                for (int i = 0; i < 41; ++i) {
                    printf("═");
                }
                printf("\n");
            }

            do {
                printf("\nIndiquez une ligne horizontale:  ");
                scanf("%d", &ligneHor);
                if (ligneHor > 10) {
                    printf("\nEntrez une valeure valable.(de 1 à 10)\n");
                }

                //si la valeur est au dessus de 10 ou pas valide alors cela redemande une nouvelle ligne horizontale
            } while (ligneHor < 1 || ligneHor > 10);

            do {
                printf("\nIndiquez une ligne verticale:  ");
                scanf("%d", &ligneVer);
                if (ligneVer > 10) {
                    printf("\nEntrez une valeure valable.(de 1 à 10)\n");
                }
            } while (ligneVer < 1 || ligneVer > 10);
            //partie qui demande la ligne et la colonne à l'utilisateur

            //partie qui vérifie si un bateau a ete touché ou pas

            if (carte[ligneHor - 1][ligneVer - 1] == 1) {
                carte[ligneHor - 1][ligneVer - 1] = 2;
                printf("\n\nTouché!\n");
                // avant de redemander à l'utilisateur de nouvelles valeures, le programme attends 2s
                Sleep(1500);
            } else {
                printf("\n\nDommage loupé\n");
                Sleep(1500);
            }
            }

}

                                        //==== MENU D'AIDE ====
//Menu de l'aide
void menuAide(){

    //commande permettant de vider la page
    system("cls");

    //Affichage de l'aide
    printf("Aide:\n");
    printf("\nVoici les regles du jeu :\n"
           "Le but : Couler tous les bateaux adverses placés quelque part en mer (sur le plateau de jeu de 100 cases), avec des missiles.\n\n"
           "Il y a 5 bateau:\n\n"
           "1 porte-avion (5 cases)\n"
           "1 croiseur (4 cases)\n"
           "2 contre-torpilleurs (3 cases)\n"
           "1 torpilleur (2 cases)\n\n");
    printf("Vous devrez selectionner une ligne verticale puis celle horizontale\n\n");

    //Affiche le message "Appuyer sur une touche pour continuer"
    system("pause");

    //Retourne dans le menu de base
    menuDeBase();
}

                                        //==== MENU D'IDENTIFICATION ====
//Fonction d'identification
void identification(){

    char identification[24];

    //commande permettant de vider la page
    system("cls");

    //Enregistrer un identifiant (pour la version 1.0)
    printf("Veuillez vous identifier: (uniquement le prénom, pas d'espace)\n");
    scanf("%s", identification);

    //Affiche le message "Appuyer sur une touche pour continuer"
    system("\npause");

    //Retourne dans le menu de base
    menuDeBase();

}
                                        //==== MENU DE BASE ====
//Fonction du menu de base
void menuDeBase() {

    //Commande permettant de vider la page
    system("cls");

    //Commande pour afficher les accents
    SetConsoleOutputCP(65001);

    //Variable mis à zero pour le choix du menu
    int choix=0;

    //Affichage du menu de base
    printf("______         _          _  _  _         _   _                      _       \n"
           "| ___ \\       | |        (_)| || |       | \\ | |                    | |      \n"
           "| |_/ /  __ _ | |_  __ _  _ | || |  ___  |  \\| |  __ _ __   __ __ _ | |  ___ \n"
           "| ___ \\ / _` || __|/ _` || || || | / _ \\ | . ` | / _` |\\ \\ / // _` || | / _ \\\n"
           "| |_/ /| (_| || |_| (_| || || || ||  __/ | |\\  || (_| | \\ V /| (_| || ||  __/\n"
           "\\____/  \\__,_| \\__|\\__,_||_||_||_| \\___| \\_| \\_/ \\__,_|  \\_/  \\__,_||_| \\___|\n"
           "                                                                             \n"
           "                                                                             ");
    printf("\n"
           "                 >_'--'__'\n"
           "                _________!__________\n"
           "               /   /   /   /   /   /\n"
           "              /   /   /   /   /   /\n"
           "             |   |   |   |   |   |\n"
           "        __^  |   |   |   |   |   |\n"
           "      _/@  \\  \\   \\   \\   \\   \\   \\\n"
           "     S__   |   \\   \\   \\   \\   \\   \\         __\n"
           "    (   |  |    \\___\\___\\___\\___\\___\\       /  \\\n"
           "        |   \\             |                |  |\\|\n"
           "        \\    \\____________!________________/  /\n"
           "         \\ _______OOOOOOOOOOOOOOOOOOO________/\n"
           "          \\________\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\_______/\n\n\n");


    printf("1 : Jouer\n");
    printf("2 : Aide\n");
    printf("3 : S'identifier\n");
    printf("4 : Quitter\n\n");

    //Choix vers les différents menu
    printf("Choisissez une option : ");
    scanf("%d",&choix);

    //Switch permettant de renvoyer l'utilisateur dans les autres menu
    switch(choix){
        //Renvoie vers la fonction du menu de jeu
        case 1:jeux() ;
            break;
        //Renvoie vers la fonction du menu d'aide
        case 2:menuAide() ;
            break;
        //Renvoie vers la fonction d'identification
        case 3:identification() ;
            break;
        //Commande qui fait quitter le programme
        case 4: system("exit");
            break;
        default:
            printf("Veuillez choisir un menu avec les nombres");
            break;
    }
}


int main() {

    //Commence le programme avec le menu de base qui permettra par la suite à accèder aux autres menu du programme
    menuDeBase();

    return 0;
}

