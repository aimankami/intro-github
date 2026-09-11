#include <stdio.h>

int main() {
    float temperature, pressure;
    printf("Enter temperature: ");
    scanf("%f", &temperature);
    printf("Enter pressure: ");
    scanf("%f", &pressure);
    if (temperature > 100 || pressure > 250)
        printf("Machine Status: SHUT DOWN");
    else if ((temperature >= 85 && temperature <= 100) &&
             (pressure >= 200 && pressure <= 250))
        printf("Machine Status: WARNING MODE");
    else
        printf("Machine Status: NORMAL OPERATION");
    return 0;
}
