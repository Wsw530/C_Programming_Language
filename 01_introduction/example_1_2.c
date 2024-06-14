//
// Created by wsl on 2024/6/13.
//
#include <stdio.h>

int main() {
    int fahrenheit;
    int celsius;
    // the lower temperature limit
    int lower = 0;
    // the upper temperature limit
    int upper = 300;
    // step size
    int step = 20;
    fahrenheit = lower;
    // print Fahrenheit-Celsius table
    while (fahrenheit <= upper) {
        celsius = 5 * (fahrenheit - 32) / 9;
        printf("%3d %6d\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }
    return 0;
}