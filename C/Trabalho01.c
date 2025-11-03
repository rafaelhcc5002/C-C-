#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    float comprimento, largura, area;
    char repetir;

    do {
        // Leitura dos dados do retângulo
        printf("Digite o comprimento do retangulo: ");
        scanf("%f", &comprimento);

        printf("Digite a largura do retangulo: ");
        scanf("%f", &largura);

        // Cálculo da área
        area = comprimento * largura;
        printf("A area do retangulo e: %.2f\n", area);

        // Loop para garantir que o usuário digite 's' ou 'n'
        do {
            printf("Deseja inserir outro retangulo? (s/n): ");
            scanf(" %c", &repetir);  // espaço antes de %c para ignorar '\n'

            if(repetir != 's' && repetir != 'S' && repetir != 'n' && repetir != 'N') {
                printf("Entrada invalida! Digite apenas 's' ou 'n'.\n");
            }

        } while(repetir != 's' && repetir != 'S' && repetir != 'n' && repetir != 'N'); // repete até ser válido

    } while(repetir == 's' || repetir == 'S');  // repete o programa se for 's'

    printf("Programa encerrado.\n");
    return 0;
}
