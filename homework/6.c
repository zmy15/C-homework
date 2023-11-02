#include<stdio.h>
#include<math.h>
#define pi 3.14

double Area_of_surface();
double Volume();
int main()
{
	double r, h, A, V;
	printf("请输入圆锥的底面半径和高:");
	scanf_s("%lf%lf", &r, &h);
	A = Area_of_surface(r, h);
	V = Volume(r, h);
	printf("radius=%lf, height=%lf, Area of surface=%lf, Volume=%lf\n",r,h,A,V);
	return 0;
}

double Area_of_surface(double r,double h)
{
	double A, l;
	l = sqrt(pow(r , 2) + pow(h, 2));
	A = pi * r * l + pi * pow(r, 2);
	return A;
}

double Volume(double r, double h)
{
	double V;
	V = 1 / 3.0 * pi * pow(r, 2) * h;
	return V;
}