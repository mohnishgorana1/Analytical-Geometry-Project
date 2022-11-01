#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"library.h"

//void find_angle(double,double );
//double find_distance(double,double,double,double);
//double find_area(float,float,float,float,float,float);

// for problem 1
void find_angle(double m1,double m2)
{   
    double theta;
    theta = (m1-m2)/(1+m1*m2);

    printf("\nAngle = %.lf ",fabs( tan(theta) ) );
    
}



// for problem 2
double find_distance(double lat1 ,double long1 ,double lat2 ,double long2)
{
    double P = 0.017444 ;   //P = pi/180
    double a = sin( (lat2 - lat1) * P/2 ) * sin((lat2 - lat1) * P/2) +   cos(lat1 * P) * cos(lat2 * P) * sin((long2-long1) * P /2) * sin((long2-long1) * P /2);

    return (6371 * (2 * atan2( sqrt(a) , sqrt(1-a)) ) ) ;

    /*
        a = [sin²(Δφ/2)] + [cos φ1 * cos φ2] ⋅ [sin²(Δλ/2)]
        c = 2 * atan2( √a, √(1−a) )
        d = R * c
    */
    
}


// for problem 3
double find_area(float x1 ,float y1, float x2 , float y2, float x3, float y3)
{   
    double A;

    A = x1*(y2 - y3) + x2*(y3 -y1) + x3*(y1-y2) ;
    if( A<0 )
    {
        A = -A;
    }
    
    return A/2;


}
