#include <stdio.h>
int main() {
    int overdue, booktype, priomembership;
    float cost, discount;
    printf("Enter the number of days overdue: ");
    scanf("%d", &overdue);

    printf("Enter the type of book (1 for regular, 2 for refernce, 3 for rare): ");
    scanf("%d", &booktype);

    printf("Is the member a priority member? (1 for yes, 0 for no): ");
    scanf("%d", &priomembership);

    if(booktype == 1){
        if(overdue <= 7){
            cost = 5 * overdue;
        }else{
            cost = 10 * overdue;
        }
    }
    else if(booktype == 2){
        cost = 15 * overdue;
    }
    else if(booktype == 3){
        cost = 30 * overdue;
        if(overdue > 10){
            printf("Banned from borrowing");
        }
    }
    
    if(priomembership == 1){
        if(booktype == 3){
            discount = 0;
        }
        else{
            discount = cost * 0.8;
        }
    }
    cost = cost - discount;
    printf("Total fine is = %.2f\n", cost);
    return 0;
}
