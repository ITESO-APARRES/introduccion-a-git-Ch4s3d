#include <stdio.h>
// Random Change

int main(void)
{
    // Random comment
    printf("Hola Mundo");
    decirHola("Daniel");
    printf("Adios mundo");
    decirHola("Chris");
    return 0;
}

decirHola(char *nombre)
{
    printf("Hola %s, ¿Que tal?", nombre);
}
