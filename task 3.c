#include <stdio.h>
int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if(marks <=0 || marks > 100){
        printf("Invalid marks\n");
    }
    else if(marks >= 90){
        printf("Grade: A+\n");
        printf("Pass");
    }
    else if(marks >= 80){
        printf("Grade: A\n");
        printf("Pass");
    }
    else if(marks >= 70){
        printf("Grade: B\n");
        printf("Pass");
    }
    else if(marks >= 60){
        printf("Grade: C\n");
        printf("Pass");
    }
    else if(marks >= 50){
        printf("Grade: D\n");
        printf("Pass");

    }else{
        printf("Grade: F\n");
        printf("Fail");
    }
    return 0;
}
