#include <stdio.h>

int main() {
    int zone, limit;
    float speed;
    int fine = 0;
    printf("Enter zone type (1=School, 2=Highway, 3=Residential): ");
    scanf("%d", &zone);
    printf("Enter speed: ");
    scanf("%f", &speed);
    switch(zone) {
        case 1:
            limit = 30;
            break;
        case 2:
            limit = 100;
            break;
        case 3:
            limit = 50;
            break;
        default:
            printf("Invalid Zone");
            return 0;
    }
    if(speed > limit) {
        fine = 1000;
        if(speed > limit + 20)
            fine *= 2;
        printf("Fine Amount = Rs. %d", fine);
    }
    else {
        printf("No Fine");
    }
    return 0;
}
