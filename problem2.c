// Distance between Person 1 and Person 2


#include<conio.h>
#include<stdio.h>

double find_distance(double,double,double,double); // (lat1, long1, lat2, long2)

int main()
{

    double distance;
    // Location Of Person 1 23.259933 N, 77.412613 E
    // Location Of Person 2 12.9716 N, 77.5946 E

    distance  = find_distance(23.259933 , 77.412613 , 12.9716 , 77.5946 );
    printf("Distance between two person \n %.21f \n",distance);
    
    return 0;

}