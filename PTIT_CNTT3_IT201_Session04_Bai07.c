#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So luong phan tu khong hop le!\n");
        return 1;
    }

    int *array = (int *)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Khong the cap phat bo nho!\n");
        return 1;
    }

    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", &array[i]);
    }

    int found = 0;
    for (int i = 0; i < n / 2; i++) {
        if (array[i] == array[n - 1 - i]) {
            printf("Cap doi xung: (%d, %d)\n", array[i], array[n - 1 - i]);
            found = 1;
        }
    }

    if (!found) {
        printf("Khong co phan tu doi xung\n");
    }

    free(array);

    return 0;
}