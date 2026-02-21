#include <stdio.h>
void numinarr(int arr[20][20], int m, int n);
void printarr(int arr[20][20], int m, int n);

int main(){
	int M,N;
	int arr[20][20];
	scanf("%d %d", &M, &N);
	numinarr(arr, M, N);
	printarr(arr, M, N);
	return 0;
}

void numinarr(int arr[20][20], int m, int n){
	int num = 100;
	for(int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			arr[i][j]=num;
			num++;
		}
	}
}

void printarr(int arr[20][20], int m, int n){
	for(int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
