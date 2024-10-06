#include<stdio.h>
#include<math.h>

int main(){

    //LOOPS
    int n=10;
    float sumf=0;
    printf("FROM FOR LOOP\n");

    for(int i=0;i<n;i++){
        // printf("iterator = %d", i);
        sumf+=i*10;
        printf("sum=%f",sumf);
    }
    printf("\n");

    printf("FROM WHILE LOOP \n");
    int j=0;
    float sumw=0;
    while(j<n){
        sumw+=j*10;
        j++;
        printf("Sum= %f",sumw);
    }
    printf("\n");

    printf("FROM FOR-IF LOOP \n");
    float sumfi=0.0;
    for(int k=0;k<n+10;k++){
        sumfi+=pow(0.5,k);
        printf("Sum with pow= %f",sumfi);
        if(fabs(sumfi-2.0)<0.0001){
            break;
        }        
    }
    printf("\n");

    printf("FROM SWITCH STATEMENT \n");
    int x=4;
    char ch='4';

    switch (ch)
    {
    case '0':
        x=1;
        printf("In case '0', x = %d\n",x);
        break;
    case '1':
    case '2':
    case '3':
        x+=1;
        printf("In case '1', '2', or '3', x = %d\n",x);
        break;
    default:
        printf("In default case, x = %d\n",x);
        break;
    }
    return 0;
}