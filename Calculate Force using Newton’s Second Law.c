#include <stdio.h>

int main() {
    float mass, acceleration, force;

    scanf("%f %f", &mass, &acceleration);

    force = mass * acceleration;

    printf("Force: %.2f N\n", force);

    return 0;
}
