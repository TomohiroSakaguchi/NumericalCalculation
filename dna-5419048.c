#include<stdio.h>
double f(double x);
	int main (void){
		int i;
		double a,b,m,za,zb,zm,p,q,n,zp,zq,zn;
		a=-4.0;
		b=-1.0;
		p=0.4;
		q=3.0;
		printf("負の解");
		for(i=0;i<=50;i++){
			m=(a+b)/2.0;
			za=f(a);
			zb=f(b);
			zm=f(m);
			printf("m=%lf,f=%lf\n",m,zm);
			if(za*zm>0.0){
				a=m;
			}
				else{
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
