#include <stdio.h>
int main() {
    float orderAmount;
    int premiumMember, withinCity;
    printf("Enter order amount: ");
    scanf("%f", &orderAmount);
    printf("Enter premium membership status (1 = Yes, 0 = No): ");
    scanf("%d", &premiumMember);
    printf("Enter city status (1 = Within City, 0 = Outside City): ");
    scanf("%d", &withinCity);
    if (orderAmount > 3000 || premiumMember == 1)
        printf("Delivery Status: Free Delivery\n");
    else
        printf("Delivery Status: Delivery Charges Apply\n");
    if (orderAmount < 50000 && withinCity == 1)
        printf("COD Status: Available\n");
    else
        printf("COD Status: Not Available\n");
    return 0;
}
