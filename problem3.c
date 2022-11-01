#include<conio.h>
#include<stdio.h>
// A(20.077, 11.598) , B(26.526, 90.138) , C(23.674, 32.579)
// c=AB , a=BC , b=AC;
// We have to Find Area of Triangle ABC to Color that Area
double find_area(float,float,float,float,float,float);

int main()
{
    float a1,b1,c1  ,  a2,b2,c2 ;
    double Area;
    // find_area((20.077, 11.598) , B(26.526, 90.138) , C(23.674, 32.579))
    Area = find_area (20.077 , 11.598 , 26.526 , 90.138 , 23.674 , 32.579);
    printf("\n Area to color of Triangle ABC = %.21f sq km",Area);



    return 0;

}