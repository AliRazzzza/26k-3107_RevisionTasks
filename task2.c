#include <stdio.h>
int main(){
    float totalbill, discount;
    int member;
    printf("Enter final bill: ");
    scanf("%f", &totalbill);
    printf("Are you a member? (1 for Yes, 0 for No): ");
    scanf("%d", &member);
    if(totalbill < 500){
        discount = 0;
    } else if(totalbill >= 500 && totalbill <= 1999){
        if(member == 1){
            discount = totalbill * 0.1;
        } else {
            discount = totalbill * 0.05;
        }
    } else if(totalbill >= 2000){
        if(member == 1){
            discount = totalbill * 0.18;
        } else {
            discount = totalbill * 0.08;
        }
    }
    totalbill = totalbill - discount;
    printf("Final bill: %.2f\n", totalbill);
    printf("Discount applied: %.2f\n", discount);
    return 0;
}
