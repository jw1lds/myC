#include <stdio.h>

int main(void) {
	int v[5];	/* values taken from stdin*/
	int w[5];	/* values sorted by value*/
	float mean;
	int median;
	int mode;
	int sum = 0;
	
	printf("Type five integers in the five subsequent lines, in ascending order:\n");
	/* accepts 5 integer inputs*/
	for(int x=0; x<5; x++) 
	{
		scanf("%d",&v[x]);
		sum = sum + v[x];
	}
	/* calculates and prints mean*/ 
	mean = sum/5;
	printf("mean: %f\n", mean);
	/* prints median*/
	median = v[3];
	printf("median: %d\n", median);
}
