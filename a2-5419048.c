#include <stdio.h>
int main(void)
	{
		int i, j,max,min;
		int a[ ]={18,23,41,31,11,21,36};
		max=0;
		min=18;
			for(i=0;i<=6;i++){
			printf("max=%d, a[%d]=%d\n", max , i, a[ i ] );
				if(max < a[i]){
			max=a[i];
			}
		}
			for(j=0;j<=6;j++){
				printf("min=%d, a[%d]=%d\n", min , j, a[ j ] );
					if(min<a[j]){
						min=min;
					}
			}

		printf("max=%d\n", max );
		printf("min=%d\n", min );


			int m,n,Max,Min;
			int b[6];
			Max=0;
			Min=a[ m ];
			for(m=0;m<=6;m++){
				scanf("%d",&b[ m ]);
				printf("Max=%d,a[%d]=%d\n", Max , m , b[ m ]);
					if(Max<a[ m ]){
						Max=a[ m ];
					}
			}
			for(n=0;n<=6;n++){
				printf("min=%d, a[%d]=%d\n", Min , n , b[ n ] );
					if(Min<a[ n ]){
						Min=min;
					}
			}

		printf("Max=%d\n", max );
		printf("Min=%d\n", min );
		return 0;
	}
