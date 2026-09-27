#include <stdio.h>
int main(){
    int maxwater, currwater, mint;
    float motorrate, time, cost;
    printf("Enter the maximum water level: ");
    scanf("%d", &maxwater);
    printf("Enter the current water level: ");
    scanf("%d", &currwater);
    printf("Enter the motor fill rate per minute: ");
    scanf("%f", &motorrate);
    if(currwater >= maxwater){
        printf("Tank already full\n");
        return 0;
    }else{
        time = (maxwater - currwater) / motorrate;
        mint = time;
        if(time > mint){
            mint++;
        }
        cost = mint * 0.25;
        printf("Time to fill the tank: %.2f minutes\n", time);
        printf("Cost to fill the tank: %.2f\n", cost);
    }
    return 0;
}
