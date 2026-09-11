#include <stdio.h>

int main() {
    float cgpa;
    int income;
    printf("Enter CGPA: ");
    scanf("%f", &cgpa);
    printf("Enter family income: ");
    scanf("%d", &income);
    if(cgpa > 3.7 && income < 50000)
        printf("Full Scholarship");
    else if(cgpa > 3.3 && income < 100000)
        printf("Half Scholarship");
    else
        printf("No Scholarship");
    return 0;
}
