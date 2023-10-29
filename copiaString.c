#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char origem[20] = {"esse e o inicio"};
    char destino[20] = {"e esse, o fim"};

    printf("\nModo normal:\n-%s\n-%s\n", origem, destino);

    strcpy(destino, origem);

    printf("\nDepois de copiar:\n-%s\n-%s\n", origem, destino);

    return 0;
}
