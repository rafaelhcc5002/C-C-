typedef struct {
    double comprimento;
    double largura;
} Retangulo;

Retangulo* defineRetangulo();
void mostraRetangulo(Retangulo* r);
double perimetro(Retangulo* r);
double area(Retangulo* r);