#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int fact(int x);


int main(){
int order;
double *terms;
printf("order you wish to print\n");

scanf("%d",&order);

// printf("5! is %d \n", fact(5));
terms=(double *)malloc(order * sizeof(double));

for (int i = 0; i < order; i++)
{
    terms[i]=1.0/(double)fact(i+1);
}

double e=1.0;
for (int i = 0; i < order; i++)
{
    e=e+terms[i];

}

free(terms);

printf("e is estimated as .10%lf, with difference %e\n",e,e-exp(1.0));

return 0;
}

int fact(int x){
    if(x<0) {
        printf("use positive No.");
        return(-1);
    }
    else if(x==0){
        return 1;
    }
    else
    {
        return (x*fact(x-1));
    }

}