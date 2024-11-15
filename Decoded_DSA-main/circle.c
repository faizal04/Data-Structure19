#include<stdio.h>
#include<math.h>
int main(){
    int radius;
    printf("enter the radius of circle");
    scanf("%d",&radius);
    for (int i=-radius;i<=radius;i++){
        for(int j=-radius;j<=radius;j++){
            if(sqrt(i*i+j*j)<=radius+0.5 )
            printf("* ");
        else{
            printf("  ");
        }
        }
        printf("\n");
    }
    return 0;

}