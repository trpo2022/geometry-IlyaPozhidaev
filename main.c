#include <stdio.h>
#include <math.h>

const float Pi = 3.14;

int main(int argc, char *argv[])
{
	float area,perimetr,r,p,x,a,b,c;
	int m;
	
	printf("\n Enter the shape type(1 - a circle, 2 - triangle): "); scanf("%d",&m);
	
	switch(m)
	{
		case 1:
			printf(" Enter the radius: ");
			scanf("%f",&r);
			if (r < 0)
			{
				printf("\n Error: you may have entered a wrong number \n\n");
			}else
			{
				perimetr=Pi*r*r;
				area=2*Pi*r;
				printf(" Area = %f, Perimetr = %f \n",area,perimetr); 
			}
			break;
			
		case 2:
			printf(" Enter 3 sides: ");
			scanf("%f %f %f",&a,&b,&c);
			if (a < 0 || b < 0 || c < 0)
			{
				printf("\n Error: you may have entered a wrong number \n\n");
			}else
			{
				p=(a+b+c)/2;
				x=p*((p-a)*(p-b)*(p-c));
				area=sqrt((float)x);
				perimetr=(a+b+c);
				printf(" Area = %f Perimetr = %f \n",area,perimetr); 
			}
			break;
			
		default: 
			printf("\n Error: you may have entered a wrong number \n\n");
	}
	
	return 0;
}
