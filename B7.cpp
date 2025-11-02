#include <stdio.h>
#include <math.h>
int main(){
	int n, var;
	printf("Nhap so phan tu:");
	scanf("%d",&n);
	int arr[n], close=1;
	while (close){
		int check=0;
		printf("Nhap phan tu (so le):");
		for (int i=0; i<n; i++){
			scanf("%d",&arr[i]);
		}
		for (int i=0; i<n; i++){
			if (arr[i]%2==1){
				check+=1;
			}
		}
		if (check==n){
			printf("mang so le: ");
			for (int i=0;i<n;i++){
				printf("%d ",arr[i]);
			}
			close=0;
		} else {
			printf("Nhap lai\n");
			continue;
		}
	}
	return 0;
}
