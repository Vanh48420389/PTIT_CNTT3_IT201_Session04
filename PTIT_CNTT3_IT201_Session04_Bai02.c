//
// Created by Lenovo on 25/06/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;      // Bien luu so luong phan tu trong mang
    int *arr;   // Con tro mang dong
    int max;    // Bien luu gia tri lon nhat trong mang

    // Nhap so luong phan tu
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    // Kiem tra so luong co hop le hay khong
    if(n <= 0){
        printf("So luong phan tu khong hop le\n");
        return 0;
    }

    // Cap phat dong bo nho cho mang co n phan tu
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

    printf("\n");

    // Tim phan tu lon nhat trong mang
    max = arr[0];  // Gia su phan tu dau tien la lon nhat ban dau
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];  // Cap nhat gia tri lon nhat moi
        }
    }

    // In ra phan tu lon nhat
    printf("Phan tu lon nhat la: %d\n", max);

    // Tim vi tri xuat hien dau tien cua phan tu lon nhat
    printf("Phan tu lon nhat xuat hien lan dau tien tai vi tri: ");
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == max)
        {
            printf("%d\n", i);  // In vi tri (chi so) dau tien
            break;              // Dung vong lap ngay khi tim thay
        }
    }

    // Giai phong vung nho da cap phat
    free(arr);
    return 0;
}
