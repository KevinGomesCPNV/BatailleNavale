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

    int jouer;
    int aide;

    printf("\n"
           "______         _          _  _  _         _   _                      _       \n"
           "| ___ \\       | |        (_)| || |       | \\ | |                    | |      \n"
           "| |_/ /  __ _ | |_  __ _  _ | || |  ___  |  \\| |  __ _ __   __ __ _ | |  ___ \n"
           "| ___ \\ / _` || __|/ _` || || || | / _ \\ | . ` | / _` |\\ \\ / // _` || | / _ \\\n"
           "| |_/ /| (_| || |_| (_| || || || ||  __/ | |\\  || (_| | \\ V /| (_| || ||  __/\n"
           "\\____/  \\__,_| \\__|\\__,_||_||_||_| \\___| \\_| \\_/ \\__,_|  \\_/  \\__,_||_| \\___|\n"
           "                                                                             \n"
           "                                                                             \n\n\n");
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
           "          \\________\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\_______/\n"
           "%%%^^^^^%%%%%^^^^!!^%%^^^^%%%%%!!!!^^^^^^!%^^^%%%%!!^^\n"
           "^^!!!!%%%%^^^^!!^^%%%%%^^!!!^^%%%%%!!!%%%%^^^!!^^%%%!!\n\n\n\n");

    printf("Bienvenue a la bataille navale\n\n");
    printf("Veuillez vous identifier:\n")
    scanf("%d");

    printf("Appuyez sur 1 si vous voulez jouer ou 0 si vous voulez afficher l'aide du jeu\n");
    scanf("%d",&jouer);


    if(jouer==1)
    {
        system("cls");
        printf("\nALED\n");
    }

    else if (jouer==0)
    {
        system("cls");
        printf("\n\nAide: Bienvenue sur le jeu de bataille navale.\n");
        printf("Voici les regles du jeu :\n");
    }

    system("pause");
    return 0;
}
