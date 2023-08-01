#include <stdio.h>
#include <stdlib.h>

int main()
{
    float inaltimea,greutatea;
    unsigned int n;
    printf("introdu numarul de persoane\n");
    scanf("%d",&n);
    float bmi[n];
    for(int i=1; i<=n; i++)
    {
        printf("Introduceti inaltimea si greutatea persoanei %d:\n",i);
        printf("Inaltimea (in cm)=");
        scanf("%f",&inaltimea);
        printf("Greutatea (in kg)=");
        scanf("%f",&greutatea);
        inaltimea=(inaltimea/100);//Inaltimea in metri
        inaltimea=inaltimea*inaltimea;//m^2
        bmi[i]=greutatea/inaltimea;
        printf("bmi=%.1f\n",bmi[i]);
    }
    for(int i=1; i<=n; i++)
    {
        if(bmi[i]>=18.5 && bmi[i]<=24.9)
            printf("Person nr %d has normal weight\n",i);
        if(bmi[i]<18.5)
            printf("Person nr %d is underweight\n",i);
        if(bmi[i]>=25 && bmi[i]<=29.9)
            printf("Person nr %d is overweight\n",i);
        if(bmi[i]>=30)
            printf("Person nr %d is obese\n",i);
    }
    return 0;
}
