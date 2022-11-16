// Fig. 5.3: fig05_03.c
// Creating and using a programmer-defined function.
#include <stdio.h> 


int facto(int);
double expo(int); // function prototype  
double power(int,int);

int main(void)
{int x;
	// loop 10 times and calculate and output square of x each time
	for (x = 1; x <= 10; ++x) {
		printf("%d ", facto(x)); // function call
		printf("value of e is:%lf\n",expo(x));
	}
	printf("%lf",power(2,3));
	puts("");
}

// square function definition returns the square of its parameter 
int facto(int y) // y is a copy of the argument to the function
{int result=1,i;
 for(i=1;i<=y;i++)
 	result=result*i;
 return result; // returns the square of y as an int    
}

double expo(int y) // y is a copy of the argument to the function
{int result=1,i;
double expo=1;
 for(i=1;i<=y;i++){
 	result=result*i;
 	expo=expo+(1.0/result);
 }
 return expo; 
}

double power(int x,int y) // y is a copy of the argument to the function
{double power=1;
	for(int i=1;i<=y;i++)
	power=power*x; 
 return power; // returns the square of y as an int    
}

