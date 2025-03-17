#include <stdlib.h>
#include <stdio.h>
/*
FILE* fopen(const char* nomDuFichier, const char* modeOuverture);

int main(int argc, char *argv[])
{
    FILE* fichier = NULL;

    fichier = fopen("README.md", "r+");

    if (fichier != NULL)
    {
        // On peut lire et écrire dans le fichier

        fclose(fichier); // On ferme le fichier qui a été ouvert
    }
    else
    {
        // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier test.txt");
    }
    
    return 0;
}
*/
/*
int fputc(int caractere, FILE* pointeurSurFichier);

int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
 
    fichier = fopen("test.txt", "w");
 
    if (fichier != NULL)
    {
        fputc('A', fichier); // Écriture du caractère A
        fclose(fichier);
    }
 
    return 0;
}
*/

char* fputs(const char* chaine, FILE* pointeurSurFichier);

int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
 
    fichier = fopen("test.txt", "w");
 
    if (fichier != NULL)
    {
        fputs("Salut les développeurs\nBienvenue sur OpenClassrooms !", fichier);
        fclose(fichier);
    }
 
    return 0;
}