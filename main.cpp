#include <iostream>
#include "Vetor3d.h"

using namespace std;

int main(){
    Vetor3d a;
    Vetor3d b;
    a.setVetor(3, 14, 9);
    b.setVetor(13, 22, 12);
    a.soma(b);

    float resultadoprodutoEscalar = a.produtoescalar(b);

    cout << "o resultado do produto escalar é: " << resultadoprodutoEscalar << endl;

    return 0;
    
}