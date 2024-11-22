#include<stdio.h>

void change_val(int *nb);
void swap_num(int *a, int *b);

int main(){
    int nb = 48;
    change_val(&nb);

    printf("%d \n",nb);

    /* Pratice 2*/
    int a = 6;
    int b = 9;

    printf("a= %d \t b= %d \t",a,b);
    swap_num(&a, &b);
    printf("swapped num a= %d and b = %d",a,b);
    return 0;
}

//Pass by reference
void change_val(int *nb){
    *nb = 1337;
}

void swap_num(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}