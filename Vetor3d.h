#ifndef VETOR3D_H
#define VETOR3D_H

class Vetor3d{
    private:
    float x, y, z;

    public:
    Vetor3d();
    void setVetor(float xx, float yy, float zz);
    void soma(Vetor3d& a);
    float produtoescalar(Vetor3d& a);
};

#endif //VETOR3D_H