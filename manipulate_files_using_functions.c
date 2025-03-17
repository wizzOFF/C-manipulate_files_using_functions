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
/*
char* fputs(const char* chaine, FILE* pointeurSurFichier);

int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
 
    fichier = fopen("test.txt", "w");
 
    if (fichier != NULL)
    {
        fputs("Salut les développeurs\nBienvenue sur OpenClassrooms !", fichier);
        
        // On demande l'âge
        printf("Quel age avez-vous ? ");
        scanf("%d", &age);
 
        // On l'écrit dans le fichier
        fprintf(fichier, "Le Monsieur qui utilise le programme, il a %d ans", age);

        fclose(fichier);
    }
 
    return 0;
}
*/

int fgetc(FILE* pointeurDeFichier);

int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
    int caractereActuel = 0;
 
    fichier = fopen("test.txt", "r");
 
    if (fichier != NULL)
    {
        // Boucle de lecture des caractères un à un
        do
        {
            caractereActuel = fgetc(fichier); // On lit le caractère
            printf("%c", caractereActuel); // On l'affiche
        } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)
 
        fclose(fichier);
    }
 
    return 0;
}