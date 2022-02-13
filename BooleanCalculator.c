#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int NegationX(int X){
	if (X == 1){
		X = 0;
		return X;
	}

	if (X == 0){
		X = 1;
		return X;
	}

	
}

int NegationY(int Y){
	if (Y == 1){
		Y = 0;
		return Y;
	}

	if (Y == 0){
		Y = 1;
		return Y;
	}
}
int main(){

	printf("\n");
	printf("BOOLEAN ALGEBRA Calculator\n");
	
	for (;;){
		char operator[10];
		int X;
		int Y;
		printf("X = ");
		scanf("%d", &X);

		printf("\n");
		printf("Y = ");
		scanf("%d", &Y);

                if (X > 1 & Y > 1){
                        printf("X = 1\nY=1\n");
                        X = 1;
			Y = 1;
                } else if (X == 1 & Y==1){
                        X = 1;
			Y = 1;
                } else if (X == 0 & Y == 0){
                        X = 0;
			Y = 0;
		} else if (X == 1 & Y == 0){
			X = 1;
			Y = 0;
		} else if (X == 0 & Y == 1){
			X = 0;
			Y = 1;
                } else {
                        printf("\nERROR!");
                        exit(0);
                }
		


		printf("Boolean operator? (&(AND), |(OR), ~(negation), &&(logical AND), ||(logical OR), ^(exclusive OR) ");
		scanf("%s", &operator);
		printf("\n");
	
	        if (strcmp(operator, "&") == 0) {
			printf("X ∧ Y = %d\n", (X&Y));
			
		} else if (strcmp(operator, "|") == 0){
			printf("X v Y = %d\n", (X|Y));
			
		} else if (strcmp(operator, "~") == 0){
			printf("¬(X)=%d\n¬(Y)=%d\n", NegationX(X), NegationX(Y));
		} else if (strcmp(operator, "&&") == 0) {
			printf("X && Y = %d\n", (X&&Y));
		} else if (strcmp(operator, "||") == 0) {
			printf("X || Y = %d\n", (X||Y));
		} else if (strcmp(operator, "^") == 0){
			printf("X ⊕ Y = %d\n", (X^Y));		
		} else {
			printf("ERROR!");
			exit(0);
		}
				
		
	}
}
