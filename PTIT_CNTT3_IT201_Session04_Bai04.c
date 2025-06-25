//
// Created by Lenovo on 25/06/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;          // Bien luu so luong phan tu cua mang
    int *arr;       // Con tro mang dong
    int target;     // Gia tri can tim trong mang

    // Nhap so luong phan tu
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    // Kiem tra n hop le
    if(n <= 0){
        printf("So luong phan tu khong hop le.\n");
        return 0;
    }

    // Cap phat dong bo nho cho mang
    arr = (int*)malloc(sizeof(int) * n);
    if(arr == NULL){
        printf("Khong du bo nho de cap phat\n");
        return 1;
    }

    // Nhap tung phan tu cho mang
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // In ra cac phan tu cua mang
    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }

    // Nhap gia tri can tim
    printf("\n");
    printf("Nhap phan tu muon tim kiem: ");
    scanf("%d", &target);

    // Tim vi tri xuat hien cuoi cung cua target
    printf("\n");
    int index = -1; // Bien luu vi tri cuoi cung cua target

    for(int i = 0; i < n; i++){
        if(target == arr[i]){
            index = i; // Luu lai vi tri (se cap nhat neu tim thay tiep)
        }
    }

    // In ket qua tim kiem
    if(index != -1) {
        printf("Phan tu %d xuat hien lan cuoi cung o vi tri %d\n", target, index);
    } else {
        printf("Khong tim thay %d trong mang.\n", target);
    }

    printf("\n");

    // Giai phong bo nho da cap phat
    free(arr);
    return 0;
}
