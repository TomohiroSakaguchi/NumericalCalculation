#include<stdio.h>
#include<math.h>
int main (void){
	double a[ 3 ][ 4 ] ={{1.0,1.0,1.0,3.0},{2.0,3.0,4.0,9.0},{3.0,2.0,2.0,7.0}};
	int i,j;
	/*for(j=0;j<3;j++){
		for(i=0;i<4;i++){
			printf("%lf ",a[ i ][ j ]);
		}
		printf("\n");
	}*/
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("a[%d][%d]=%lf ",i ,j ,a[ i ][ j ]);
		}
		printf("\n");
	}
	int k;
	double t;
	printf("->\n");
	for(i=0;i<=1;i++){
		t=a [ i ][ i ];
		for(k=i;k<=3;k++){
			a[ i ][ k ] = a[ i ][ k ]/t;
		}
		for(j=i+1;j<=2;j++){
			t=a[ j ][ i ];
			for(k=i;k<=3;k++){
				a[ j ][ k ]=a[ j ][ k ]-t*a[ j ][ k ];
			}
		}
	}
	for(i=2;i>=0;i--){
		t=a[ i ][ i ];
		for(k=i;k<=3;k++){
			a[ i ][ k ]=a[ i ][ k ]/t;
		}
		for(j=i-1;j>=0;j--){
			t=a[ i ][ j ];
			for(k=j;j>=0;j--){
				a[ j ][ k ]=a[ j ][ k ]-t*a[ i ][ k ];
			}
		}
	}
	/*for(j=0;j<3;j++){
		for(i=0;i<4;i++){
			printf("%lf ",a[ j ][ i ]);
		}
		printf("\n");
	}*/
	return 0;
}
