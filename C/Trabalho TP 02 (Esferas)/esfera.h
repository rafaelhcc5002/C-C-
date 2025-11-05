typedef struct {
    double raio;
} Esfera;

Esfera* defineEsfera();
void mostraEsfera(Esfera* e);
double calculaAreaTotal(Esfera* e);
double calculaVolume(Esfera* e);
