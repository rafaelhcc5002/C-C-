#include <stdio.h>
#include <stdlib.h>
#include "cilindro.h"


Cilindro* defineCilindro() {
    char continuar;
    Cilindro* c;

    do {
        Cilindro* c = (Cilindro*) malloc(sizeof(Cilindro));
    if (c == NULL) {
        printf("Erro ao alocar memoria!\n");
        exit(1);
    }

        printf("Digite o raio do cilindro: ");
        scanf("%lf", &c->raio);
        printf("Digite a altura do cilindro: ");
        scanf("%lf", &c->altura);

        if (c->raio <= 0 || c->altura <= 0) {
            printf("Valor inválido! O raio e a altura devem ser positivos.\n");
        } else {
            mostraCilindro(c);
        }

        free(c);

        do {
            printf("Deseja inserir outro cilindro? (s/n): ");
            scanf(" %c", &continuar);

            if (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
                printf("Entrada invalida! Digite apenas 's' ou 'n'.\n");
            }

        } while (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N');

    } while (continuar == 's' || continuar == 'S');
}

void mostraCilindro(Cilindro* c) {

    printf("Raio: %.2lf\n", c->raio);
    printf("Altura: %.2lf\n", c->altura);
    printf("Área Total: %.2lf\n", calculaAreaTotal(c));
    printf("Área Lateral: %.2lf\n", calculaAreaLateral(c));
    printf("Volume: %.2lf\n\n", calculaVolume(c));
}

double calculaAreaTotal(Cilindro* c) {
    return 2 * 3.14 * c->raio * (c->raio + c->altura);
}

double calculaAreaLateral(Cilindro* c) {
    return 2 * 3.14 * c->raio * c->altura;
}

double calculaVolume(Cilindro* c) {
    return 3.14 * c->raio * c->raio * c->altura;
}
