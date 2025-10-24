#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[3], media;

    printf("Entre com as tres notas do aluno\n");

    for(int i=0; i<3; i++) {
        printf("Nota %d: ", i+1);
        scanf("%f", &notas[i]);
    }

    media = (notas[0]+notas[1]+notas[2])/3;

    printf("A media das notas eh: %.2f", media);
    return 0;
}
