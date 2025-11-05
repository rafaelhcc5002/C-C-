#include <stdio.h>
#include <stdlib.h>
#include "esfera.h"


Esfera* defineEsfera() {
    char continuar;
    Esfera* e;

    do {
        Esfera* e = (Esfera*) malloc(sizeof(Esfera));
    if (e == NULL) {
        printf("Erro ao alocar memoria!\n");
        exit(1);
    }

        printf("Digite o raio da esfera: ");
        scanf("%lf", &e->raio);

        if (e->raio <= 0) {
            printf("Valor inválido! O raio deve ser positivo.\n");
        } else {
            mostraEsfera(e);
        }

        free(e);

        do {
            printf("Deseja inserir outra esfera? (s/n): ");
            scanf(" %c", &continuar);

            if (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
                printf("Entrada invalida! Digite apenas 's' ou 'n'.\n");
            }

        } while (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N');

    } while (continuar == 's' || continuar == 'S');
}

void mostraEsfera(Esfera* e) {
    
    printf("Raio: %.2lf\n", e->raio);
    printf("Área Total: %.2lf\n", calculaAreaTotal(e));
    printf("Volume: %.2lf\n\n", calculaVolume(e));
}

double calculaAreaTotal(Esfera* e) {
    return 4 * 3.14 * e->raio * e->raio;
}

double calculaVolume(Esfera* e) {
    return (4.0 / 3.0) * 3.14 * e->raio * e->raio * e->raio;
}
