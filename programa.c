#include <stdio.h>

char cookie[] = "ganaste!";
int main()
{
    char buffer[32];
    printf("cookie: %08x\n", &cookie);

    gets(buffer);
    printf(buffer);
    printf("\n");
}

/*Hecho por: Alvaro Vazquez Aguirre*/