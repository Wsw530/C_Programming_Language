//
// Created by wsl on 2024/6/13.
//
#include <stdio.h>

int main() {
    // print Fahrenheit-Celsius table
    printf("Celsius Fahrenheit\n");
    for (int fahrenheit = 300; fahrenheit >= 0; fahrenheit = fahrenheit - 20) {
        printf("%3d %6.1f\n", fahrenheit, 5.0 / 9 * (fahrenheit - 32));
    }
    return 0;
}