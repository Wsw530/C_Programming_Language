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
    celsius = lower;
    // print Celsius-Fahrenheit table
    printf("Celsius Fahrenheit\n");
    while (celsius <= upper) {
        fahrenheit = celsius * 9.0 / 5.0 + 32.0;
        printf("%3.0f  %6.1f\n", celsius, fahrenheit);
        celsius = celsius + step;
    }
    return 0;
}