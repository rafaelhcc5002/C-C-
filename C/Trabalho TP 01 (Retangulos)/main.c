#include <stdio.h>
#include <stdlib.h>
#include "retangulo.h"

int main(int argc, char const *argv[])
{
    Retangulo* r = defineRetangulo();
    mostraRetangulo(r);
    free(r);

    return 0;
}



