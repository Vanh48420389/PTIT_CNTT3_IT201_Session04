//
// Created by Lenovo on 25/06/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n;      // Bien luu so luong phan tu cua mang
    int *arr;   // Con tro mang dong
    int min;    // Bien luu gia tri nho nhat trong mang

    // Nhap so luong phan tu
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    // Kiem tra neu n khong hop le thi dung chuong trinh
    if(n <= 0){
        printf("So luong phan tu khong hop le.\n");
        return 0;
    }

    // Cap phat dong bo nho cho mang co n phan tu
    arr = (int*)malloc(sizeof(int) * n);
    if(arr == NULL){
        printf("Khong du bo nho de cap phat\n");
        return 1;
    }

    // Nhap tung phan tu vao mang
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // In mang vua nhap
    printf("Mang vua nhap: ");
    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");

    // Tim phan tu nho nhat trong mang
    min = arr[0];  // Gia su phan tu dau tien la nho nhat
    for(int i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];  // Cap nhat gia tri nho nhat moi
        }
    }

    // In gia tri nho nhat tim duoc
    printf("Phan tu nho nhat la: %d\n", min);

    // Tim va in vi tri xuat hien dau tien cua phan tu nho nhat
    printf("Phan tu nho nhat xuat hien lan dau tien tai vi tri: ");
    for(int i = 0; i < n; i++) {
        if(arr[i] == min) {
            printf("%d\n", i);  // In chi so (bat dau tu 0)
            break;              // Dung ngay khi tim thay
        }
    }

    // Giai phong vung nho da cap phat
    free(arr);
    return 0;
}
