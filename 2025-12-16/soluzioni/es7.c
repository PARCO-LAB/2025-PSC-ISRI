#include <stdio.h>

struct Triangolo {
    float b;
    float h;
};

float area(struct Triangolo t) {
    return (t.b * t.h) / 2.0;
}

int main() {
    struct Triangolo t1, t2;
    
    printf("Triangolo 1 (base altezza): ");
    scanf("%f %f", &t1.b, &t1.h);
    
    printf("Triangolo 2 (base altezza): ");
    scanf("%f %f", &t2.b, &t2.h);

    if (area(t1) > area(t2)) {
        printf("Il Triangolo 1 e' maggiore (Area: %.2f)\n", area(t1));
    } else {
        printf("Il Triangolo 2 e' maggiore (Area: %.2f)\n", area(t2));
    }
    return 0;
}