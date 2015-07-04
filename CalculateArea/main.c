//
//  main.c
//  CalculateArea
//
//  Created by Vajira on 4/7/15.
//  Copyright (c) 2015 cosmic. All rights reserved.
//

#include <stdio.h>

void calculateAngles(float a, float b);

int main(int argc, const char * argv[]) {
    
    float angle1, angle2;
    
    printf("Enter first angle of the triangle: ");
    scanf("%f", &angle1);
    
    printf("Enter second angle of the triangle: ");
    scanf("%f", &angle2);
    
    calculateAngles(angle1, angle2);
    
    return 0;
}


void calculateAngles(float value1, float value2) {
    
    if(value1<=0 || value2<=0)
    {
        printf("Entered values are not angles of a triangle");
    }
    else
    {
        float result = 180 - (value1+value2);
    
        if(result>0)
        {
            printf("Third angle is: %.2f \n", result);
        }
        else
        {
            printf("Entered values are not angles of a triangle");
        }
    }
    
}