#include <stdio.h>

/* print Celsius-Fahrenheit table
    for celsius = -30, -18, ... 150 */

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -30;  // lower limit of temperature table
    upper = 150;  // upper limit
    step = 12;    // step size

    celsius = lower;
    printf("Celsius-Fahrenheit Table\n");
    while (celsius <= upper) {
        fahr = 9.0 / 5.0 * celsius + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}

