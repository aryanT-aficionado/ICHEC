/*
Iterative and recursive method for euclid algo
*/

#include<stdio.h>


int iterativeGCD(int a, int b){
    int temp;
    while (b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;

    }

    return a;
}

int recursiveGCD(int a, int b){
    if (b==0)
    {
        return a;
    }
    else
    {
        return recursiveGCD(b,a%b);
    }
    
}

int main(){

    int a , b, error;
    printf("please enter 2 positive INT \n");
    error=scanf("%d %d",&a,&b);

    if (error!=2)   
    {
        printf("enter 2 INT \n");
        return 1;
    }

    if (a<=0 || b<=0)
    {
        printf("ENTER POSITIVE INT \n");
        return 1;
    }

    printf("Iterative GCD(%d %d): %d \n",a,b,iterativeGCD(a,b));

    printf("Recursive GCD(%d %d): %d \n",a,b,recursiveGCD(a,b));
    
    


    return 0;
}