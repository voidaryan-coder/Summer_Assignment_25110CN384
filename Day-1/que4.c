#include<stdio.h>
int main(){
    int n,d,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(;n!=0;){
    d=n%10;
    count++;
    n=n/10;
     }
    printf("The no. of digits are: %d",count);
    return 0;
}