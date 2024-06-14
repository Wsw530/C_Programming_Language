//
// Created by wsl on 2024/6/13.
//
#include <stdio.h>
#define UPPER 300
#define LOWER 0
#define STEP 20

int main() {
    // print Fahrenheit-Celsius table
    printf("Celsius Fahrenheit\n");
    for (int fahrenheit = UPPER; fahrenheit >= LOWER; fahrenheit = fahrenheit - STEP) {
        printf("%3d %6.1f\n", fahrenheit, 5.0 / 9 * (fahrenheit - 32));
    }
    return 0;
}