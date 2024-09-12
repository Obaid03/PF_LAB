/* Question#6
Construct a C program where you calculate the slope of two point (5,4), (3,2). Use format specifiers to
cap the result to 3 decimal places.*/

#include <stdio.h>

int main()
 {
   
    float x1 = 5.0, y1 = 4.0, x2 = 3.0, y2 = 2.0;
    float slope;

    slope = (y2 - y1) / (x2 - x1);

    printf("The slope of the line between points (5,4) and (3,2) is: %.3f\n", slope);

    return 0;
}
