#include<stdio.h>
#include<math.h>
int main(void){
	double a,b,c;
	/*
	a=1.0;
	b=3.0;
	c=2.0;
	*/
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	//ax^2+bx+c=0の解を求める
	//判別式で解の表記を場合わけ
	if((b*b)-(4*a*c)>0){
		double x1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
		double x2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
		printf("2次方程式 %lf x^2 + %lf x + %lfの解は%lf, %lf\n",a, b, c, x1, x2);
	}else if ((b*b)-(4*a*c)==0) {
		double x=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
		printf("2次方程式 %lf x^2 + %lf x + %lfの解は%lf\n",a, b, c, x);
	} else {
		double _Complex x1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
		double _Complex x2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
		printf("2次方程式 %lf x^2 + %lf x + %lfの解は%f%+fi, %f%+fi\n",a, b, c, __real__ x1, __imag__ x1, __real__ x2, __imag__ x2);
	}
	//x1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
	//x2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);

	//printf("x1=%lf\n",x1);
	//printf("x2=%lf\n",x2);
	return 0;
}
