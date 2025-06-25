#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Hàm kiểm tra đoạn từ arr[start] đến arr[end] có đối xứng không
bool isPalindrome(int arr[], int start, int end) {
    while (start < end) {
        if (arr[start] != arr[end])
            return false;
        start++;
        end--;
    }
    return true;
}

int main() {
    int n;
    int *arr;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So luong phan tu khong hop le.\n");
        return 1;
    }

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\n== Cac doan con doi xung trong mang ==\n");

    int found = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (isPalindrome(arr, i, j)) {
                printf("Doan arr[%d..%d] la doi xung: { ", i, j);
                for (int k = i; k <= j; k++)
                    printf("%d ", arr[k]);
                printf("}\n");
                found = 1;
            }
        }
    }

    if (!found) {
        printf("Khong co doan doi xung nao.\n");
    }

    free(arr);
    return 0;
}
