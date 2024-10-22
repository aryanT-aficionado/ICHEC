#include<stdio.h>
#include<stdlib.h>

void printFib(int *a,int *b);


int main(){

    int n;
    printf("input the number \n");
    scanf("%d", &n);
    if (n < 1) {
        printf("n must be bigger than 1\n");
        exit(1);
    }

    int f0=0;
    int f1=1;
    printf("Fibonacci Series: \n");
    printf("%d, %d ",f0,f1);

    for (int i = 2; i <= n; i++)
    {
        printFib(&f1,&f0);
        printf("%d ",f1);
        if((i+1)%10==0){
            printf("\n");
        }
    }
    
    return 0;
}

void printFib(int *a,int *b){
    int next;
    next= *a + *b;

    *b = *a;
    *a = next;

}