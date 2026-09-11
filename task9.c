#include <stdio.h>

int main() {
    int people;
    float weight;
    printf("Enter number of people: ");
    scanf("%d", &people);
    printf("Enter total weight: ");
    scanf("%f", &weight);
    if(people > 10 && weight > 1000)
        printf("Entry Denied: Exceeds people and weight limits");
    else if(people > 10)
        printf("Entry Denied: Exceeds people limit");
    else if(weight > 1000)
        printf("Entry Denied: Overweight");
    else
        printf("Elevator Operating Normally");
    return 0;
}
