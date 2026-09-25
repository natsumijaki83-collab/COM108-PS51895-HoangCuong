#include <stdio.h>
int main(){
    float diemTB;
    int hanhKiem;
    int dieukienDiem, dieukienhanhKiem, ketquaxetTB;
    printf("Diem trung binh: ");
    scanf("%f", &diemTB);
    printf("Hanh kiem: ");
    scanf("%d", &hanhKiem);

    if (diemTB >= 8.0) {
        dieukienDiem = 1;
    } else {
        dieukienDiem = 0;
    }
    if (hanhKiem == 1) {
        dieukienhanhKiem = 1;
    } else {
        dieukienhanhKiem =0;
    }
    if (dieukienDiem == 1 && dieukienhanhKiem == 1) {
        ketquaxetTB = 1;    
    } else {
        ketquaxetTB = 0;
    }

    printf("Dieu kien diem trung binh: >=8: %d\n", dieukienDiem);
    printf("Dieu kien hanh kiem tot: %d\n", dieukienhanhKiem);
    printf("Ket qua xet hoc bong(1: Dat, 0: Khong dat): %d\n", ketquaxetTB);
    return 0;
}