#include <stdio.h>
int main(){
    char maSSV[10];
    char hoTen[50];
    int namSinh;
    float diemTB;
    
    printf("Ma so sinh vien: ");
    scanf("%s", maSSV);
    printf("Ho va ten: ");
    while (getchar() != '\n');
    fgets(hoTen, sizeof(hoTen), stdin);
    printf("Nam sinh: ");
    scanf("%d", &namSinh);
    printf("Diem trung binh: ");
    scanf("%f", &diemTB);

    printf("Ma so sinh vien: %s\n", maSSV);
    printf("Ho va ten: %s\n", hoTen);
    printf("Nam sinh: %d\n", namSinh);
    printf("Tuoi: %d\n", 2026 - namSinh);
    printf("Diem: %f\n", diemTB);
    return 0;

}