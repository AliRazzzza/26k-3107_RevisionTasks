#include <stdio.h>
int main() {
    int mealCate, cusType;
    float bill, serviceCharge, disc;

    printf("Enter meal category (1 for FastFood, 2 for Desi Food, 3 for Chinese): ");
    scanf("%d", &mealCate);

    printf("Enter customer type (1 for Student, 2 for Regular): ");
    scanf("%d", &cusType);

    printf("Enter bill amount: ");
    scanf("%f", &bill);

    if(cusType != 1 && cusType != 2){
        printf("Invalid customer type\n");
        return 1;

    }

    switch(mealCate){
        case 1:
            serviceCharge = 5;
            
            break;
        case 2:
            serviceCharge = 8;
            
            break;
        case 3:
            serviceCharge = 10;
            
            break;
        default:
            printf("Invalid meal category\n");
            return 1;
    }

    if(bill >= 1000){
        if(cusType == 1){
            disc = 15;
            bill = bill - (bill * disc) / 100;
        }
        else{
            disc = 10;
            bill = bill - (bill * disc) / 100;
        }
    }
    else if (bill < 1000){
        if(cusType == 1){
            disc = 5;
            bill = bill - (bill * disc) / 100;
        }
    }
    bill = bill + (bill * serviceCharge) / 100;
    printf("Service charge is = %.2f%%\n", serviceCharge);
    printf("Discount is = %.2f%%\n", disc);
    printf("Total bill amount is = %.2f\n", bill);
    

    return 0;
}
