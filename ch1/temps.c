#include <stdio.h>

#define LOWER 0   /* lower limit of the table */
#define UPPER 300 /* upper limit */
#define STEP  20  /* step size */

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */
int main() {
    for (float fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        float celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
    }
}
