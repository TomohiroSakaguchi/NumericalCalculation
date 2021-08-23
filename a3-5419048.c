#include <stdio.h>
int main(void)
	{
		int a,s,i;
		s=0;
		scanf("%d",&a);
		printf("%dの約数は", a);
		for(i=1;i<=a;i++){
			s=a%i;
			if(s==0){
				printf("%d ",i);
			}
		}
		printf("\n");
		return 0;
	}
