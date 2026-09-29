#include <stdio.h>
int main() {
    int matches, fitness;
    float bavg;
    printf("Enter the number of matches played: ");
    scanf("%d", &matches);

    printf("Enter batting average: ");
    scanf("%f", &bavg);

    printf("Enter your fitness status (1 for fit, 0 for unfit): ");
    scanf("%d", &fitness);

    if(matches < 5){
        printf("Rejected -- Insufficient matches\n");
    }
    if(bavg >= 35 && matches >= 10){
        printf("Selected\n");
    }
    else if(bavg >= 25 && bavg <= 34.99 && matches >= 20){
        if(fitness == 1){
            printf("Selected (Experience Quota)\n");
        }else{
            printf("Rejected -- Fitness\n");
        }
    }
    else{
        printf("Rejected -- Not selected\n");
    }
    return 0;
}
