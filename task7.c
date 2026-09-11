#include <stdio.h>

int main() {
    int plan, minutes;
    float bill = 0;
    printf("Enter plan number (1-4): ");
    scanf("%d", &plan);
    switch(plan) {
        case 1:
            printf("Enter minutes used: ");
            scanf("%d", &minutes);
            bill = 500;
            if(minutes > 1000)
                bill += (minutes - 1000) * 2;
            break;
        case 2:
            printf("Enter minutes used: ");
            scanf("%d", &minutes);
            bill = 800;
            if(minutes > 2000)
                bill += (minutes - 2000) * 2;
            break;
        case 3:
            bill = 1200;
            break;
        case 4:
            printf("Enter minutes used: ");
            scanf("%d", &minutes);
            bill = minutes;
            break;
        default:
            printf("Invalid Plan");
            return 0;
    }
    printf("Total Bill = Rs. %.2f", bill);
    return 0;
}
