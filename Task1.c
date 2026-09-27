#include <stdio.h>
int main(){
    float km, totalfare;
    int hr;
    printf("Enter the distance travelled in km: ");
    scanf("%f", &km);
    printf("Enter the time in hours: ");
    scanf("%d", &hr);
    if(km <= 0){
        printf("Invalid distance\n");
        return 0;
    }
    if(hr < 6 || hr > 22){
        totalfare = (km-1) * 22 + 40 + 50;

    }else{
        totalfare = (km-1) * 22 + 50;
    }
    
    printf("Total fare is %.2f\n", totalfare);
    return 0;
}
