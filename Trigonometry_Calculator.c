#include <stdio.h>
#include <math.h>

#ifndef M_PI
#    define M_PI 3.14159265358979323846
#endif

int main(){

        double window[100][50];

        double theta;

        printf("\n");
        printf("Trigonometric_Computation\n");
        printf("                /|  \n");
        printf("               / |  \n");
        printf("              /  |  \n");
        printf("             /   |  \n");
        printf("            /    |  \n");
        printf("           /     |  \n");
        printf("          /      |  \n");
        printf("         /       |  \n");
        printf("     c  /        | a\n");
        printf("       /         |  \n");
        printf("      /          |  \n");
        printf("     /θ          |  \n");
        printf("    /)___________|  \n");
        printf("             b     \n");
        for (;;){

          printf("(in degrees)\n");
          printf("θ = ");
          scanf("%lf", &theta);
        
          printf("sin(θ) = a/c = %lf\n", sin(theta*(3.14159265 / 180)));

          printf("cos(θ) = b/c = %lf\n", cos(theta*(3.14159265 / 180)));
          printf("\n");

          printf("tan(θ) = a/b = %lf\n", sin(theta*(3.14159265 /  180))/cos(theta*(3.14159265 / 180)));
          
         
        }
          //printf("sec(θ) = c/a = %lf\n", sec(theta*(3.14159265 / 180)));

          //printf("cosec(θ) = c/b = %lf\n", cosec(theta*(3.14159265 / 180)));

          //printf("cot(θ) = b/a = %lf\n", cot(theta*(3.14159265 / 180)));
        
       
        return 0;
}
