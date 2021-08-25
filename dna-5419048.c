#include<stdio.h>
double f(double x);
int main (void){
	int i;
	double a,b,m,za,zb,zm,p,q,n,zp,zq,zn;
	a=-4.0;
	b=-1.0;
	p=0.4;
	q=3.0;
	//負の解を求める
	for(i=0;i<50;i++){
		m=(a+b)/2.0;
		za=f(a);
		zb=f(b);
		printf("負の解m=%lf,f=%lf, iteration=%d\n",m,zm, i+1);
		if(f(m) < 0.0){
			a=m;
		}else if (f(m) == 0) {
			break;
		} else {
			b=m;
		}
		//if(zm<(-1/100000)){
		//break;
		//}
	}
	printf("正の解");
	//for
	return 0;
}

double f(double x){
	double c;
	c=x*x-3.0;
	return c;
}
