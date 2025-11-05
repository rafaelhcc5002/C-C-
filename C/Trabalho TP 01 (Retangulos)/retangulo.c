#include <stdio.h>
#include <stdlib.h>
#include "retangulo.h"

Retangulo* defineRetangulo(){
    int i = 0;
    char continuar;

    Retangulo* r = (Retangulo*) malloc(sizeof(Retangulo));
    do{
        if(r == NULL){
            printf("Erro ao alocar memoria!\n");
            exit(1);
        }
    
        printf("Digite o comprimento do retangulo: ");
        scanf("%lf", &r->comprimento );
        if (r->comprimento <= 0)
            printf("Valor inválido! O comprimento deve ser positivo.\n");

        printf("Digite a largura do retangulo: ");
        scanf("%lf", &r->largura);
        if (r->largura <= 0)
            printf("Valor inválido! A largura deve ser positiva.\n");
        i++;
         do {
            printf("Deseja inserir outro retangulo? (s/n): ");
            scanf(" %c", &continuar); 

            if(continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
                printf("Entrada invalida! Digite apenas 's' ou 'n'.\n");
            }

        } while(continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N'); 

    } while(continuar == 's' || continuar == 'S');
    return r;
}

void mostraRetangulo(Retangulo* r){

    printf("Comprimento: %.2lf\n", r->comprimento);
    printf("Largura: %.2lf\n", r->largura);
    printf("Área: %.2lf\n", area(r));
    printf("Perímetro: %.2lf\n", perimetro(r));

}

double perimetro(Retangulo* r){
    return 2 * (r->comprimento + r->largura);
}
double area(Retangulo* r){
    return r->comprimento * r->largura;
}