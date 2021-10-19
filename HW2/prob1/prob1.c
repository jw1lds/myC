#include <stdio.h>
/*calculates perimeter of rectangle given side lengths as inputs*/
int main(void) {
	int p; /* perimeter of rectangle */
	int b; /* base of rectangle */
	int h; /* height of rectangle*/
	printf("Enter base of rectangle: ");
	scanf("%d",&b);
	printf("Enter height of rectangle: ");
	scanf("%d",&h);
	p = (2*b)+(2*h);
	printf("Perimeter: %d\n", p);
}
