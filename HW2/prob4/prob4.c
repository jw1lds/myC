#include <stdio.h>
/* given input in cents, outputs combination of coins corresponding to that value that minimizes number of coins*/

int main(void) {
	
	int q = 0; /*number of quarters*/
	int d = 0; /*number of dimes*/
	int n = 0; /*number of nickels*/
	int p = 0; /*number of pennies*/
	int z; /*initial value read from stdin, as well as remaining value after each coin is subtracted*/

	printf("Input value in cents: ");
	scanf("%d",&z);

	/*removes as many quarters as possible, subtracts the value of all quarters from z*/
	for(int x=1; z>24; x++)
	{
		z = z - 25;
		q = x;
	}
	
	/*removes as many dimes as possible, subtracts the value of all dimes from z*/
	for(int x=1; z>9; x++)
	{
		z = z - 10;
		d = x;
	}

	/*removes a nickel if possible*/
	if(z>4)
	{
		n = 1;
	 	z = z-5;
	}

	/*makes up for remaining value in pennies*/
	p = z;

	printf("The combination that minimizes the number of coins for this value is %d quarters, %d dimes, %d nickels, %d pennies.\n",q,d,n,p);
}
