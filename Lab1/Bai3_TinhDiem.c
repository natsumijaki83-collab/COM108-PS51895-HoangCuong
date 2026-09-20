#include <stdio.h>
int main(){
    char maSSV[10];
    char hovaTen[50];
    float diemTB, diemToan, diemLy, diemHoa;

    printf("Ma so sinh vien: ");
    scanf("%s", maSSV);
    printf("Ho va ten: ");
    while (getchar() != '\n');
    fgets(hovaTen, sizeof(hovaTen), stdin);
    printf("Diem toan: ");
    scanf("%f", &diemToan);
    printf("Diem ly: ");
    scanf("%f", &diemLy);
    printf("Diem hoa: ");
    scanf("%f", &diemHoa);
    diemTB = (diemToan *2 + diemLy + diemHoa) / 4;

    printf("Ma so sinh vien: %s\n", maSSV);
    printf("Ho va ten: %s\n", hovaTen);
    printf("Diem trung binh: %f\n", diemTB);
    return 0;

}