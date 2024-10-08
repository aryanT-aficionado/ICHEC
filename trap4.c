#include<stdio.h>
#include<math.h>


int main(){

    int N=12;

    // Both in degrees
    float a=0;
    float b=60;

    // Conversion to radians
    float b_rad;
    b_rad=(M_PI*b)/180;
    printf("b value in radians %f\n",b_rad);

    float b_tan=tan(b_rad);

    printf("b value in tan %f\n",b_tan);

    float sum=tan(a)+tan(b_tan);
    


    int i=0;
    for(i=5;i<60;i+=5){
        sum+= 2*tan(i*M_PI/180);
        // printf("value of i is %d\n",i);

    }
    sum=((b_rad-a)/(2*N))*sum;

    printf("sum value in tan %f\n",sum);
    printf("actual value is %f\n",logf(2));

    float abs_diff=fabs(sum-logf(2));
    float rel_diff=fabs(1-(sum/logf(2)));
        printf("abs diff and rel diff value is %f%f\n",abs_diff,rel_diff);
    return 0;
}