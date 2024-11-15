// find hcf without recursion

#include<stdio.h>
#include<conio.h>
int main(){
    int num1,num2,result;
    printf("enter any two number to find the hcf");
    scanf("%d %d",&num1,&num2);
    for(int i=1;i<=num1 && i<=num2;i++){
        if(num1%i==0 && num2%i==0){
            result = i;
        }
    }
    printf("%d",result);
    return 0;
}