#include <stdio.h>
#include <math.h>

float distancia(float x, float y) {
    return sqrt(x*x + y*y);
}

int main() {

    float dist;

    dist = distancia(5, 5);

    printf("%f", dist);

    getchar();
    getchar();

    return 0;
}