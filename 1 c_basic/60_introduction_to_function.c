// Defination of function
// Function is basically a set of statements that performs takes inputs, perform some operation and then returns the output.

// syntax:
// Return_type function_name(input1, input2, input3, ...)
// It is not necessary to provide input values.

// Why functions?
// There are two important reasons of why we are using functions:
// 1. Reusability
// 2. Abstracion

#include <stdio.h>

int areaOfRect(int, int);

int main()
{
    int l = 10, b = 5;
    int area = areaOfRect(l, b);
    printf("Area of rectangle is %d", area);
}

int areaOfRect(int length, int breadth)
{
    int area;
    area = length * breadth;
    return area;
}
