/* es8_euler.c */
#include <stdio.h>
#include <math.h> // Richiede flag -lm : "gcc -lm es8.c" ()

struct Punto3D {
    float x, y, z;
};

float potenza(float b, float e){
    int res = 1;
    for(int i = 0; i < e; i++)
        res *= b;
    return res;
}

float euler_distance(struct Punto3D A, struct Punto3D B) {
    // potrei usare anche "pow(b,e)", funzione contenuta in math.h
    return sqrt(potenza(A.x - B.x, 2) + potenza(A.y - B.y, 2) + potenza(A.z - B.z, 2));
}

int main() {
    struct Punto3D p1 = {1, 2, 3};
    struct Punto3D p2 = {4, 6, 8};

    printf("Distanza: %.2f\n", euler_distance(p1, p2));
    return 0;
}