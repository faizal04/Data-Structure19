#include<stdio.h>
#include<conio.h>
int main(){
    int rows;
    printf("enter the number of rows");
    scanf("%d",&rows);
    for(int i=0;i<=rows;i++){
        for(int j=i;j<=rows*2-i;j++){
            printf("*");
        }
        printf("\n");
        for( int k=0;k<=i;k++){
            printf(" ");
        }
    }
    return 0;
}