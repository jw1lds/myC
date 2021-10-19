#include <stdio.h>
/* Takes in integer number of minutes, outputs number of hours and minutes.*/
int main(void) {
	int t; /* total minutes */
	int h; /* hours */
	int m; /* minutes within hour*/
	int q = 1;

	printf("Total minutes: ");
	scanf("%d",&t);
		m = t%60;
	for(int n=0; q>0; n++)
	{
		q = t - (60 * n);
		h = n - 1;
	}	
	printf("%d hr, %d min\n",h,m);
}
