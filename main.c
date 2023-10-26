#include <math.h>
#include <stdio.h>

float calculate(float t);

int main() {
    float first_t = 2.5;
    float first_y = 0;
    while (first_t <= 9) {
        first_y = calculate(first_t);
        printf("| %.2f | %.2f |\n", first_t, first_y);
        first_t += 0.8;
        first_y = 0;
    }

    printf("\n\n\n");

    float second_t = 0.8;
    float second_y = 0;
    for (int step = 0; step <= 6; step++) {
        second_y = calculate(second_t);
        printf("| %.2f | %.2f |\n", second_t, second_y);
        second_t += 1.2;
        second_y = 0;
    }
}

float calculate(float t) { return (1.5 * t - log(2 * t)) / (3 * t + 1); }