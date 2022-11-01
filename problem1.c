#include<stdio.h>
#include<conio.h>
#include"library.h"

//void find_angle(double, double);

int main()
{   
    int a1,b1,c1;
    int a2,b2,c2;


    printf("General Equation of Road is ax + by + c  \n");
    printf("Enter the equation of Road 1 i.e. values of a,b,c \n");
    scanf("%d%d%d",&a1,&b1,&c1);
    printf("Enter the equation of Road 2 i.e. values of a,b,c \n");
    scanf("%d%d%d",&a2,&b2,&c2);

    double m1=0,m2=0;
    m1 = -(b1/a1);
    m2 = -(b2/a2);
    printf("\n m1 : %.1f",m1);
    printf("\n m2 : %.1f",m2);
    find_angle(m1,m2);

    getch();
    return 0;

}



/*
Suppose there are two roads,
Road 1: ABC Road, represented by equation 5x + y - 3 = 0
Road 2: XYZ Road, represented by equation 2x + 3y + 1 = 0
These two roads meet each other at a chowk, called 123 Chowk.
Determine at which angle , these two roads meet each other at chowk.
What you have to do :
Create a Program which determines angle at which these roads meet at 123 Chowk.
#include<stdio.h>
#include<conio.h>
void main(){
double angle_at_chowk;
/* We all know that, there is no function named find_angle exists, so you have to create a
library for that.

angle_at_chowk = find_angle(parameter1, parameter2,......);
printf("Angle at which these roads meets at 123 Chowk: %lf\n",angle_at_chowk);

*/