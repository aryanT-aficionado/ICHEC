#include <stdio.h>
#include <math.h>

float degtorad (float degarg);
float traprule(int N, float TanArr[N + 1]);

int main() {

    int N=12,i;
    float a = 0.0, b_deg = 60.0;
    float TanArr [N+1];
    float deg;

//Calculate the area at pts x1, x2......x11 and add them up
    for (i=0; i <N; i+=1){
        deg = i*5.0;
        TanArr[i] = tan(M_PI*deg/180.0);
        printf("TanArr[%d]=%f\n", i, TanArr[i]);

    
    }

    float area = TanArr[0] +  tanArr[N];
    printf("\n Initial area (sum at x(0) and x(12)=%\fn",area);

    for ( i=1;i<N;i++){
        area = area + 2*TanArr[i];  
    }

    printf("The value of the sum after the loop is: %f\n",area);

    float mult_rad = degtorad((b_deg - a)/(2*N)); 
    area = mult_rad *area;

    printf("\n Trapezodial result is: %f\n",area);
    printf("Real result is: %f\n", log(2.0));

    return 0;
}

float degtorad(float degarg){
    float pi = 3.1415927;
    return ((pi*degarg)/180.0);

}

{
    return 0.0f;
}
float degtorad(float degarg)
{
    float pi = 3.1415927;
    return ((pi* degarg/180.0));
}
float trapule(int N, float TanArr){
    float area;
    int i;

    area = TanArr[0] + TanArr[N];
    printf("\n Initital area (sum at x(0) and x(12)) = %f\n, area");

}