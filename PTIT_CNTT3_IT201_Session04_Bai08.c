//
// Created by Lenovo on 25/06/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;          // Bien luu so luong phan tu cua mang
    int *arr;       // Con tro tro toi mang dong
    int target;     // Gia tri can tim trong mang

    // Nhap so luong phan tu
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    // Kiem tra dieu kien hop le
    if(n <= 0){
        printf("So luong phan tu khong hop le.\n");
        return 0;
    }

    // Cap phat bo nho dong cho mang
    arr = (int*)malloc(sizeof(int) * n);
    if(arr == NULL){
        printf("Khong du bo nho de cap phat\n");
        return 1;
    }

    // Nhap gia tri tung phan tu
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // In mang da nhap
    printf("Mang da nhap: ");
    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }

    // Nhap gia tri can tim kiem
    printf("\nNhap phan tu muon tim kiem: ");
    scanf("%d", &target);

    // Tim tat ca vi tri cua target trong mang
    printf("Phan tu %d xuat hien o cac vi tri: ", target);
    int found = 0; // Bien danh dau co tim thay hay khong

    for(int i = 0; i < n; i++){
        if(target == arr[i]){
            printf("%d ", i);  // In vi tri
            found = 1;
        }
    }

    if (!found) {
        printf("Khong co\n");  // Neu khong tim thay phan tu
    }

    // Giai phong bo nho
    free(arr);
    return 0;
}
