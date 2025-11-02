#include <stdio.h>
#include <math.h>
int main(){
	int  row, column;
	printf("Nhap so hang:");
	scanf("%d",&row);
	printf("Nhap so cot:");
	scanf("%d",&column);
	int arr[row][column];
	for (int i=0; i<row; i++){
		for (int j=0; j<column; j++){
			printf("Nhap phan tu hang %d cot %d: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for (int i=0; i<row; i++){
		for (int j=0; j<column; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
    return 0;
}
