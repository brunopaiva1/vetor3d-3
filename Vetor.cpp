#include <iostream>
#include "Vetor3d.h"

using namespace std;

Vetor3d::Vetor3d(){
    setVetor(0, 0, 0);
}

void Vetor3d::setVetor(float xx, float yy, float zz){
    x = xx;
    y = yy;
    z = zz;
}

void Vetor3d::soma(Vetor3d& a){
    cout << a.x + x << ", " << a.y + y << ", " << a.z + z << endl;
}

float Vetor3d::produtoescalar(Vetor3d& a){
    float produto = (x*a.x+y*a.y+z*a.z);
    return produto;
}