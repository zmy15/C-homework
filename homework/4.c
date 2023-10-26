#include<stdio.h>
#include<math.h>

double m, s = 0, i,j;
double factorial(double n)
{
    double result = 1.0;
    for (j = 1; j <= n; j++)
    {
        result *= j;
    }
    return result;
}


int main()

{
	scanf_s("%lf", &m);
	for (i = 1; (pow(m, i) / factorial(i)) > 1e-4; i++)
		s += pow(-1,i+1)*(pow(m, i) / factorial(i));
	printf("%.2f\n", s);
	return 0;
}
