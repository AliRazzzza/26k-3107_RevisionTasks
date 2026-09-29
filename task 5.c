#include <stdio.h>
int main() {
    float amount, bonus, finalBalance;
    int network, week;
    printf("Enter load amount: ");
    scanf("%f", & amount);
    printf("Enter network code (1=Jazz, 2=Telenor, 3=Ufone): ");
    scanf("%d", & network);
    printf("Enter weekend status (1=Weekend, 0=Weekday): ");
    scanf("%d", & week);
    if (amount < 100){
        bonus = 0;
    }
    else {
        if (amount < 500){
            if (week == 1){
                if (network == 3){
                    bonus = 5;
                }
                else {
                    bonus = 10;
                }
            }
            else{
                bonus = 5;
            }
        }
        else{
            if (network == 1){
                bonus = 20;
            }
            else{
                if (week == 1){
                    bonus = 20;
                }
                else{
                    bonus = 12;
                }
            }
        }
    }
    finalBalance = amount + (amount * bonus / 100);
    printf("\nbonus = %.2f%%\n", bonus);
    printf("Final balance = %.2f\n", finalBalance);
    return 0;
}
