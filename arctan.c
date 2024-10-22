#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double arctanh1(double x,double delta);
double arctanh2(double x);


int main(){

    double delta;
    printf("enter +ve real no,\n");
    scanf("%lf",&delta);

    if(delta<0){
        printf("delta < 0 \n");
        exit(1);
    }

    double x=-0.9;
    int length=1000;
    double tan1[length];
    double tan2[length];
    int i=0;

    while (x<0.9 && i<length)
    {
        /* code */
        tan1[i]=arctanh1(x,delta);
        tan2[i]=arctanh2(x);
        printf("the dif, at x=%lf, is %0.10lf \n",x,fabs((tan1[i]-tan2[i])/tan2[i]));
        i++;
        x+=0.01;

    }
    
    return 0;
}

double arctanh1(double x,double delta){
    double sum=0;
    double ele, val;
    int n=0;

    do
    {
        /* code */
        val=2*n+1;
        ele=pow(x,val)/val;
        sum+=ele;
        n++;


    } while (fabs(ele)>=delta);

    return sum;
    
}

double arctanh2(double x){
    return (log(1+x)-log(1-x))/2;
}