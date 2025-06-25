//
// Created by Lenovo on 25/06/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;          // Bien luu so luong phan tu
    int *arr;       // Con tro mang dong
    int target;     // Bien luu gia tri can tim

    // Nhap so luong phan tu
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    // Kiem tra gia tri n hop le
    if(n <= 0){
        printf("So luong phan tu khong hop le\n");
        return 0;
    }

    // Cap phat dong mang so nguyen co n phan tu
    arr = (int*)malloc(sizeof(int) * n);
    if(arr == NULL){
        printf("Khong du bo nho de cap phat\n");
        return 1;
    }

    // Nhap gia tri cho tung phan tu cua mang
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // In mang vua nhap
    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }

    // Nhap gia tri can tim kiem
    printf("\n");
    printf("Nhap phan tu muon tim kiem: ");
    scanf("%d", &target);

    // Tim va in vi tri xuat hien dau tien cua phan tu target
    printf("\n");
    printf("Phan tu %d xuat hien lan dau tien tai vi tri: ", target);
    for(int i = 0; i < n; i++){
        if(target == arr[i]){
            printf("%d\n", i);  // In chi so (bat dau tu 0)
            break;              // Dung vong lap sau khi tim thay
        }
    }

    // Giai phong bo nho
    free(arr);
    return 0;
}
