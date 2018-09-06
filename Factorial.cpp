/*
   This program will show the user the number factor that enters
   
   Author: Victor Manuel Gastelum Huitzil
   Date: 05/09/18
   e-mail: A01411985@itesm.mx
*/
#include<stdio.h>

int main()
{
	// I declare the variables
    int n;
    int i;
    int f;
    
    // I given to the i and f variables a value of 1
    // since that a factorial always starts by one
	i=1;
	
    // I asked the user what number he wants to find his factorial
    printf("Give me a number to find the factorial: ");
    scanf("%i",&n);
    while(i<=n)  // I establish a "while" to start the loop
    {
        f*=i; // The variable "f" is multiplied by the variable "i", then 1 is added to the variable "i"
        i++; // in this way the "f" will be multiplied with the "i" depending on the times the cycle is repeated
    }
    printf("The Factorial of %i is: %i",n,f); // I print the factorial
return 0;
}
