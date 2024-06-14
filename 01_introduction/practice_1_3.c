//
// Created by wsl on 2024/6/13.
//
#include <stdio.h>

int main() {
    double fahrenheit;
    double celsius;
    // the lower temperature limit
    double lower = 0;
    // the upper temperature limit
    double upper = 300;
    // step size
    double step = 20;
    fahrenheit = lower;
    // print Fahrenheit-Celsius table
    printf("Fahrenheit Celsius\n");
    while (fahrenheit <= upper) {
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
        printf("%3.0f %6.1f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }
    return 0;
}