#include <stdio.h>

#define SPHERE_VOLUME_FACTOR (4.0f / 3.0f)
#define PI 3.14f

int main(void) {
    float sphere_radius, volume;
    printf("Select Sphere Radius: ");
    scanf("%f", &sphere_radius);

    volume = SPHERE_VOLUME_FACTOR * PI * sphere_radius * sphere_radius * sphere_radius;
    printf("Sphere Volume: %.3f\n", volume);
    return 0;
}