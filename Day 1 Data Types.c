#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    int int2;
    double dub;
    char s2[100];
    // Declare second integer, double, and String variables.
    
    scanf("%d", &int2);
    scanf("%lf", &dub);
    scanf("%*[\n] %[^\n]", s2); 
    // Read and save an integer, double, and String to your variables.
    
    printf("%d \n",(int2+i));
    // Print the sum of both integer variables on a new line.
    
    printf("%.1lf \n",(dub+d));
    // Print the sum of the double variables on a new line.
    
    printf("%s%s",s,s2);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}