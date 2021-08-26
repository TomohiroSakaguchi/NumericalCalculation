#include<stdio.h>
#include <math.h>
double df(double x);
double f(double x);
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
double df(double x){
	double c,eff=904.8;
	c=4*eff*x*exp(-eff*pow(x,2))-eff*exp(eff*x);
	return c;
}
double f(double x){
	double d,eff=904.8;
	d=2*exp(-eff*pow(x,2))-exp(eff*x);
	return d;
}
