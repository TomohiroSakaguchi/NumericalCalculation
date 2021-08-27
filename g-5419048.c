#include<stdio.h>
#include<math.h>
int main (void){
	double a[ 3 ][ 4 ] ={{1.0,1.0,1.0,3.0},{2.0,3.0,4.0,9.0},{3.0,2.0,2.0,7.0}};
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%lf ",a[ i ][ j ]);
		}
		printf("\n");
	}
	printf("->\n");
	//ここからガウス・ジョルダン法で計算する
	int k;
	double t;
	//一列目操作
	//a[0][0]を1にする
	t=a[0][0];
	t=a[0][0];
	for (int j = 0; j < 4; j++) {
		a[0][j] = a[0][j]/t;
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%lf ",a[ i ][ j ]);
		}
		printf("\n");
	}
	printf("->\n");
	//a[0][0]を1にした
	//a[1][0]が0になるように2行目引き算
	t=a[1][0];
	for (j = 0; j < 4; j++) {
		a[1][j]=a[1][j] - a[0][j]*t;
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%lf ",a[ i ][ j ]);
		}
		printf("\n");
	}
	printf("->\n");
	//a[1][0]が0になるように2行目引き算した
	//a[2][0]が0になるように3行目引き算
	t=a[2][0];
	for (j = 0; j < 4; j++) {
		a[2][j]=a[2][j] - a[0][j]*t;
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%lf ",a[ i ][ j ]);
		}
		printf("\n");
	}
	printf("->\n");
	//a[2][0]が0になるように3行目引き算した
	//一列目の操作終わり
	//二列目の操作
	t=a[1][1];
	for (j = 0; j < 4; j++) {
		a[1][j]=a[1][j]/t;
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%lf ",a[ i ][ j ]);
		}
		printf("\n");
	}
	printf("->\n");
	t=a[0][1];
	for (j = 0; j < 4; j++) {
		a[0][j]=a[0][j]-a[1][j]*t;
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%lf ",a[ i ][ j ]);
		}
		printf("\n");
	}
	printf("->\n");
	t=a[2][1];
	for (j = 0; j < 4; j++) {
		a[2][j]=a[2][j]-a[1][j]*t;
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%lf ",a[ i ][ j ]);
		}
		printf("\n");
	}
	printf("->\n");
	//2列目操作終わり
	//3列目操作ここから
	t=a[2][2];
	for (j = 0; j < 4; j++) {
		a[2][j]=a[2][j]/t;
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%lf ",a[ i ][ j ]);
		}
		printf("\n");
	}
	printf("->\n");
	t=a[0][2];
	for (j = 0; j < 4; j++) {
		a[0][j]=a[0][j]-a[2][j]*t;
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%lf ",a[ i ][ j ]);
		}
		printf("\n");
	}
	printf("->\n");
	t=a[1][2];
	for (j = 0; j < 4; j++) {
		a[1][j]=a[1][j]-a[2][j]*t;
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%lf ",a[ i ][ j ]);
		}
		printf("\n");
	}
	printf("->\n");
	//3列目おわり
	/*for(i=0;i<=1;i++){
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
	}*/
	/*for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%lf ",a[ i ][ j ]);
		}
		printf("\n");
	}*/
	return 0;
}
