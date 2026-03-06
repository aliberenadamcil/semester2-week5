// Week 5, Session 1

/* Advanced task 1
 * Write a C program for enhanced quadratic equation solver
 * that accepts three real numbers a,b,c from the command prompt.
 * The equation is a.x^2 + b.x + c = 0
 * 
 * The program checks for the following conditions and validations:
 * 1. If a = 0, prints "Linear equation"
 * 2. Calculate determinant D: D=b^2 - 4ac
 * 2. If D > 0: Calculate and display two distinct roots
 *    You have done this in Week3, session-2-task3/quadratic.c
 * 3. If D = 0: Calculate and display the single root
 * 4. If D < 0: Identify and calculate real and imaginary parts
 *    imaginary part formula: sqrt(-D)/(2*a)
 */
 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>   //for atof()

int main(int argc, char *argv[]) {
	
	if (argc != 4) {
        printf("Usage: %s <a> <b> <c>\n", argv[0]);
        printf("Example: %s 1 -5 6\n", argv[0]);
        return 1;
    }

    // Convert string arguments to floats
    float a = atof(argv[1]);
    float b = atof(argv[2]);
    float c = atof(argv[3]);
	
	//complete the rest of the code
    if (a == 0) {
        printf("Linear equation\n");
        return 0;
    }

    float D = b*b - 4*a*c;

    if (D > 0) {
        float x1 = (-b + sqrt(D)) / (2*a);
        float x2 = (-b - sqrt(D)) / (2*a);
        printf("Two distinct real roots:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
    else if (D == 0) {
        float x = -b / (2*a);
        printf("One real root:\n");
        printf("x = %.2f\n", x);
    }
    else {
        float realPart = -b / (2*a);
        float imagPart = sqrt(-D) / (2*a);
        printf("Two complex roots:\n");
        printf("x1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("x2 = %.2f - %.2fi\n", realPart, imagPart);
    }
	
	return 0;
}

