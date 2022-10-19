#include<stdio.h>
int main()
{
	float a,r;
	printf("Enter the Radius\n");
	scanf("%f",&r);
	a=3.14*r*r;
	printf("\"Area of circle is %f having the radius %f\"",a,r);
	getch();
	return 0;
}
