#include<stdio.h>
#include<conio.h>
int main(){
    int rows;
    printf("enter the number of rows");
    scanf("%d",&rows);
    for(int i=0;i<=rows-1;i++){
            for( int k=0;k<=i;k++){
                printf("*");
            }
            printf("\n");
    }
    return 0;
}