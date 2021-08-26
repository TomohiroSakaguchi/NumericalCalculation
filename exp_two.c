#include<stdio.h>
#include <math.h>
double f(double x);
int main (void){
	int i;
	double a,b,m,za,zb,zm,p,q,n,zp,zq,zn;
	double significant = 7;//小数点以下どこまで使うのか
	double threshold;
	a=-4.0;
	b=-0.1;
	p=-1.0;
	q=3.0;
	//単調減少する方の解を求める
	int point = round(pow(10,significant));
	for(i=0;i<50;i++){
		m=(a+b)/2.0;
		za=f(a);
		zb=f(b);
		threshold=round(f(m)*point)/point;
		printf("負の解m=%lf,threshold=%lf, iteration=%d\n",m,threshold, i+1);
		if(threshold > 0.0){
			a=m;
		}else if (threshold == 0) {
			//printf("break!\n");//for抜け確認用
			break;
		} else {
			b=m;
		}
	}

	//単調増加する方の解を求める;
	for(i=0;i<50;i++){
		zm=(p+q)/2.0;
		zp=f(p);
		zq=f(q);
		threshold=round(f(zm)*point)/point;
		printf("正の解m=%lf,threshold=%lf, iteration=%d\n",zm,threshold, i+1);
		if(threshold < 0.0){
			p=zm;
		}else if (threshold == 0) {
			//printf("break!\n");//for抜け確認用
			break;
		} else {
			q=zm;
		}
	}
	return 0;
}

double f(double x){
	double c,e=94.8;
	c=2*exp(-e*pow(x,2))-exp(e*x);
	//printf("f(x) = %lf\n", c);
	return c;
}
