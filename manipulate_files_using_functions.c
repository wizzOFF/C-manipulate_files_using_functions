#include <stdlib.h>
#include <stdio.h>

FILE* fopen(const char* nomDuFichier, const char* modeOuverture);

int main(int argc, char *argv[])
{
    FILE* fichier = NULL;

    fichier = fopen("README.md", "r+");

    return 0;
}