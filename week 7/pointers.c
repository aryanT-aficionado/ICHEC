#include<stdio.h>
#include<stdlib.h>

int *allocate(int n);
void fillwiththones(int *p,int n);
void printarray(int *p,int n);
void freePtr(int *p);

int main(){

    int size=5;
    int *array;
    array=allocate(size);
    fillwiththones(array,size);
    printarray(array, size);
    freePtr(array);
    
    return 0;
}

int *allocate(int n){

    return ((int*)malloc(n*sizeof(int)));

}

void fillwiththones(int *p,int n){

    for (int i = 0; i < n; i++)
    {
        p[i]=1;
    }
    
}

void printarray(int *p,int n){
    int i;
    for ( i = 0; i < n; i++)
    {
        printf(" %d ",p[i]);
    }
    
}

void freePtr(int *p){
    free(p);
}