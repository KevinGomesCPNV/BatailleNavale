/*
 * Titre : Bataille Navale
 * Auteur : Kevin Gomes
 * Date : 06 mars 2020
 * Description : Programme permettant de jouer à la bataille navale en solo contre nous même (tout le temps gagnant)
 * Version : 0.1
 */

#include <stdio.h>
#include <windows.h>
int main() {



    int choix;
    char identification[24];
    int recommencer=0;


        do {
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
                   //"%%%^^^^^%%%%%^^^^!!^%%^^^^%%%%%!!!!^^^^^^!%^^^%%%%!!^^\n"
                   //"^^!!!!%%%%^^^^!!^^%%%%%^^!!!^^%%%%%!!!%%%%^^^!!^^%%%!!\n\n");

            //code(s) pour des fonctionalitées spéciales
            SetConsoleOutputCP(65001);  //pour les accents, etc...
            //code(s) pour des fonctionalitées spéciales

            printf("Bienvenue a la bataille navale\n\n");
            printf("1. Jouer\n"
                   "2. Aide\n"
                   "3. Identification\n\n");

            //work in progress identification
            //printf(identification);

            scanf("%d", &choix);


            if (choix == 1) {
                system("cls");
                printf("\nWORK IN PROGRESS\n");
            } else if (choix == 2) {
                system("cls");
                printf("Aide:\n");
                printf("\nVoici les regles du jeu :\n"
                       "Le but : Couler tous les bateaux adverses placés quelque part en mer (sur le plateau de jeu de 100 cases), avec des missiles.\n"
                       "Il y a trois bateaux : de 1, 2, et 3 cases de long. Les bateaux ne touchent pas.\n"
                       "Pour essayer de toucher les bateaux, vous devez entrez la coordonnée de la case où vous voulez lancer un missile (exemple: A8), puis tapez enter. Attention à bien rentrer la lettre en premier !\n"
                       "\n"
                       "Si le programme affiche « A l’eau », vous n’avez pas touché de bateau. Une croix s’affiche dans la case. \n"
                       "\n"
                       "Si le programme affiche « Touché », c’est que vous avez touché un bateau. La case se remplit d’un cercle.\n"
                       "\n"
                       "Si le programme affiche « Touché et coulé », ça signifie que le bateau entier à été touché et qu’il est donc coulé.\n"
                       "Toutes les cases s'affichent avec un carré blanc. Vous devez ensuite cherchez les autres bateaux."
                       "\n\n"
                       "Si vous retirez sur une case que vous avez déjà visée, le programme vous avertira et vous laissera recommencer.\n"
                       "\n"
                       "Une fois que vous avez touché les 3 bateaux, la partie s'arrête et un message s’affiche vous annonçant que vous avez gagné.");
            } else if (choix == 3) {
                system("cls");
                printf("Veuillez vous identifier:\n");
                scanf("%s", identification);
            }
            printf("\n\n1. Retour au menu\n"
                   "2. Quitter le programme\n\n");
            scanf("%d", &recommencer);
            if(recommencer==2)
            {
                exit(0);
            }
        }while(recommencer=1);

    system("pause");
    return 0;
}
