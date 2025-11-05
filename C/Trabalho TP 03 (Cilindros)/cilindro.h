typedef struct {
    double raio;
    double altura;
} Cilindro;

Cilindro* defineCilindro();
void mostraCilindro(Cilindro* c);
double calculaAreaTotal(Cilindro* c);
double calculaAreaLateral(Cilindro* c);
double calculaVolume(Cilindro* c);
