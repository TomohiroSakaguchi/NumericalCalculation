#include <stdio.h>
int main(void)
	{
		int a,s,i;
		s=0;
		scanf("%d\n",&a);
		for(i=2;i<=a;i++){
			s=a%i;
			if(s==0){
				printf("%dの約数は%d\n",a,s);
			}
		}

		return 0;
	}
