#include <stdio.h>
void leftRotate(int arr[], int n, int R) {
   int i,j;
    for (i = 0; i < R; i++) {
       int temp = arr[0];
       for (j = 0; j < n - 1; j++)
           arr[j] = arr[j + 1];
       arr[j] = temp;
   }
}
int main() {
    int arr[] = {2, 1, 3, 5, 6, 4, 7};
   int n = sizeof(arr) / sizeof(arr[0]);
   int R = 3;
    leftRotate(arr, n, R);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
