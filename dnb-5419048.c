#include<stdio.h>
#include <math.h>
double f(double x);
double df(double x);
double dfm(double x);
int main(void){
	int i;
	double x,eps;
	x=5.0;
	eps = 1.0e-4;
	for(i=0;i<=1000;i++){
		double x1 = x - f(x)/df(x);
		if(fabs(x-x1)<eps){
			break;
		}
		x=x1;
		printf("x1=%lf,x-x1=%.8f\n",x,x-x1);
	}
	x = -10.0;
	for(i=0;i<=1000;i++){
		double x1 = x - f(x)/df(x);
		//printf("%lf\n", x1);
		if(fabs(x1-x)<eps){
			break;
		}
		x=x1;
		printf("x2=%lf,x-x1=%.8f\n",x,x-x1);
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

double dfm(double x){
	double d;
	d = -2.0*x;
	return d;
}
