#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initArray(int arr[20][20], int m, int n);
void printArray(int arr[20][20], int m, int n);

int main(void) {

    int M, N;
    int arr[20][20];

    scanf("%d %d", &M, &N);

    if (M <= 2 || N <= 2 || M >= 20 || N >= 20) {
        printf("Invalid size\n");
        return 0;
    }

    srand(time(NULL));

    initArray(arr, M, N);
    printArray(arr, M, N);

    return 0;
}

void initArray(int arr[20][20], int m, int n) {

    int used[201] = {0};

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            int num;
            do {
                num = rand() % 101 + 100;
            } while (used[num] == 1);

            arr[i][j] = num;
            used[num] = 1;
        }
    }
}

void printArray(int arr[20][20], int m, int n) {

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
