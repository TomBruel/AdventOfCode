#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX 10

int AdventOfCode2021Day1()
{
    FILE* fichier = NULL;

    fichier = fopen("Input2021Day1.txt", "r");

    char chaine[TAILLE_MAX] = "";

    if(fichier != NULL)
    {
        int nb1=0;
        int nb2=0;
        int cpt=0;
        fgets(chaine, TAILLE_MAX, fichier);
        nb1 = atoi(chaine);
        while (fgets(chaine, TAILLE_MAX, fichier) != NULL)
        {
            nb2=atoi(chaine);
            if(nb2>nb1)cpt++;
            nb1=nb2;
        }
        printf("result : %d\n", cpt);
    }
    else
    {
        printf("file is NULL");
    }

    fclose(fichier);

    return 0;
}
