//
// Created by Lenovo on 25/06/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Khai bao cau truc sinh vien
struct Student
{
    int id;             // Ma sinh vien
    char name[100];     // Ten sinh vien
    int age;            // Tuoi
};

int main()
{
    int n;      // So luong sinh vien
    int value;  // Bien luu ID can tim

    // Nhap so luong sinh vien
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    getchar();  // Doc ky tu \n con lai trong bo dem

    // Kiem tra so luong hop le
    if(n <= 0){
        printf("So luong sinh vien khong hop le.\n");
        return 0;
    }

    // Cap phat dong mang sinh vien
    struct Student *arr = (struct Student *) malloc(n * sizeof(struct Student));
    if(arr == NULL){
        printf("Khong du bo nho de cap phat\n");
        return 1;
    }

    // Nhap thong tin cho tung sinh vien
    for(int i = 0; i < n; i++){
        printf("Nhap thong tin sinh vien thu %d\n", i + 1);

        // Nhap ID
        printf("Nhap id: ");
        scanf("%d", &arr[i].id);
        getchar(); // Loai bo ky tu xuong dong

        // Nhap ten sinh vien (co the co dau cach)
        printf("Nhap name: ");
        fgets(arr[i].name, 100, stdin);
        arr[i].name[strcspn(arr[i].name, "\n")] = '\0'; // Xoa ky tu xuong dong

        // Nhap tuoi
        printf("Nhap age: ");
        scanf("%d", &arr[i].age);
        getchar(); // Loai bo ky tu xuong dong
    }

    // In danh sach sinh vien da nhap
    for(int i = 0; i < n; i++){
        printf("Sinh Vien Thu %d\n", i + 1);
        printf("ID: %d\n", arr[i].id);
        printf("Ten: %s\n", arr[i].name);
        printf("Tuoi: %d\n", arr[i].age);
        printf("\n");
    }

    // Tim sinh vien theo ID
    printf("Nhap id hoc sinh muon tim: ");
    scanf("%d", &value);

    // Duyet mang de tim ID
    for(int i = 0; i < n; i++)
    {
        if(arr[i].id == value)
        {
            printf("Tim thay sinh vien co ID %d:\n", value);
            printf("ID: %d\n", arr[i].id);
            printf("Ten: %s\n", arr[i].name);
            printf("Tuoi: %d\n", arr[i].age);
        }
    }

    // Giai phong bo nho
    free(arr);
    return 0;
}
