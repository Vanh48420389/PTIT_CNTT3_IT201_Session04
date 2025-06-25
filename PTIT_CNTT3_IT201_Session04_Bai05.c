//
// Created by Lenovo on 25/06/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;       // Bien luu so luong phan tu trong mang
    int *arr;    // Con tro mang dong

    // Nhap so luong phan tu cua mang
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    printf("\n");

    // Cap phat dong bo nho cho mang
    arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL)
    {
        // Neu cap phat that bai thi thong bao loi
        printf("Malloc Error");
        free(arr);
        return 1;
    }

    // Nhap cac phan tu cho mang
    for(int i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    // In mang ban dau
    printf("Mang ban dau la: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sap xep mang tang dan bang Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // In mang sau khi da sap xep
    printf("\nMang sau khi duoc sap xep la: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    // Nhap gia tri can tim kiem
    printf("\nNhap phan tu can tim: ");
    int num;
    scanf("%d", &num);

    // Tim kiem nhi phan (binary search) tren mang da sap xep
    int start = 0;
    int end = n - 1;
    int found = -1;

    while(start <= end)
    {
        int mid = (start + end) / 2;
        if(arr[mid] == num)
        {
            found = mid; // Luu vi tri tim thay
            break;
        }
        else if(arr[mid] > num)
        {
            end = mid - 1;
        }
        else // arr[mid] < num
        {
            start = mid + 1;
        }
    }

    // Thong bao ket qua tim kiem
    if(found != -1)
        printf("Phan tu %d tim thay tai vi tri %d (chi so tu 0).\n", num, found);
    else
        printf("Khong tim thay %d trong mang.\n", num);

    // Giai phong bo nho cap phat
    free(arr);
    return 0;
}
