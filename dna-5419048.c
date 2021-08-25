#include<stdio.h>
#include <math.h>
double f(double x);
int main (void){
	int i;
	double a,b,m,za,zb,zm,p,q,n,zp,zq,zn;
	double significant = 4;//小数点以下どこまで使うのか
	double threshold;
	a=-4.0;
	b=-1.0;
	p=0.4;
	q=3.0;
	//負の解を求める
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

	//正の解を求める;
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
	double c;
	c=x*x-3.0;
	return c;
}
