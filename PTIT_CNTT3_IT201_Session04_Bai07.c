#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;

    // Yeu cau nguoi dung nhap so luong phan tu cua mang
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    // Kiem tra neu so luong khong hop le (<= 0)
    if (n <= 0) {
        printf("So luong phan tu khong hop le!\n");
        return 1; // Ket thuc chuong trinh voi ma loi
    }

    // Cap phat bo nho dong cho mang co n phan tu kieu int
    int *array = (int *)malloc(n * sizeof(int));
    if (array == NULL) {
        // Neu khong cap phat duoc bo nho
        printf("Khong the cap phat bo nho!\n");
        return 1;
    }

    // Nhap gia tri cho tung phan tu cua mang
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", &array[i]);
    }

    int found = 0; // Bien danh dau xem co cap doi xung nao khong

    // Duyet tu dau den giua mang de kiem tra cac cap doi xung
    for (int i = 0; i < n / 2; i++) {
        if (array[i] == array[n - 1 - i]) {
            // Neu 2 phan tu doi xung nhau co gia tri bang nhau thi in ra
            printf("Cap doi xung: (%d, %d)\n", array[i], array[n - 1 - i]);
            found = 1; // Danh dau da tim thay cap doi xung
        }
    }

    // Neu khong tim thay cap doi xung nao
    if (!found) {
        printf("Khong co phan tu doi xung\n");
    }

    free(array);

    return 0;
}
