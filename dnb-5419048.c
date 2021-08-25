#include<stdio.h>
double f(double x);
double df(double x);
int main(void){
	int i;
	double a,z;
	a=1.0;
	for(i=0;i<=10;i++){
		a=a-f(a)/df(a);
		z=f(a);
		printf("a=%lf,f=%lf\n",a,z);
	}
	return 0;
}
double f(double x){
	double c;
	c=x*x-2.0;
	return c;
}
double df(double x){
	double d;
	d=2.0*x;
	return d;
}
