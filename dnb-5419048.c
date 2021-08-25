#include<stdio.h>
#include <math.h>
double f(double x);
double df(double x);
int main(void){
	int i;
	double a,z,eps;
	a=1.0;
	eps = 1.0e-2;
	for(i=0;i<=1000;i++){
		z=a-f(a)/df(a);

		if(fabs(z-a)<eps){
			break;
		}
		a=z;
		printf("a=%lf,z-a=%.8f\n",a,z-a);
	}
	return 0;
}
double f(double x){
	double c;
	c=x*x-3.0;
	return c;
}
double df(double x){
	double d;
	d=2.0*x;
	return d;
}
