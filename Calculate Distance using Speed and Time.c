#include <stdio.h>

int main() {
    float speed, time, distance;

    scanf("%f %f", &speed, &time);

    distance = speed * time;

    printf("Distance: %.2f units\n", distance);

    return 0;
}
