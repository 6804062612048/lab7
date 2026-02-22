#include <stdio.h>
void numinarr(int arr[20][20], int m, int n);
void shuffle(int arr[20][20], int m, int n);
void printarr(int arr[20][20], int m, int n);

int main(){
	int M,N;
	int arr[20][20];
	scanf("%d %d", &M, &N);
	numinarr(arr, M, N);
	shuffle(arr, M, N);
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

void shuffle(int arr[20][20], int m, int n){
	for(int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			int ni=(i*3+j*5)%m;
			int nj=(j*7+i*2)%n;

			int temp=arr[i][j];
			arr[i][j]=arr[ni][nj];
			arr[ni][nj]=temp;
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
