#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador=0;
    char palavra[31];

    printf("Digite uma palavra: ");
    gets(palavra);

    for(int i=0; palavra[i] != '\0'; i++) {
        if(palavra[i] == 'e' || palavra[i] == 'E') {
            contador++;
            palavra[i] = '3';
        }
    }

    printf("\nA letra E ocorreu %d vezes", contador);
    printf("\nA palavra modificada eh: %s", palavra);
    return 0;
}
