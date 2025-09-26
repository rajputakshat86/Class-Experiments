#include<stdio.h>
int fibo(int n){
    if(n==0){
        return 0 ;
    }
    if(n==1){
        return 1 ;
    }
    return fibo(n-1) + fibo(n-2);
}
 
int main(){
    int n ;
    printf("Enter a number :");
    scanf("%d",&n);
    if (n<0){
        printf("Invalid input , please enter a non-negative integer.\n");
    } else {
        printf("Fibonacci of %d is %d\n",n,fibo(n));
    }
    return 0 ;
}