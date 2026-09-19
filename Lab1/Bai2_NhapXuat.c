#include <stdio.h>
int main (){
    
    char maSSV[10];
    char hovaTen[50];
    int namSinh;
    float diemTB;

    printf("Ma so sinh vien: ");
    scanf("%s",maSSV);
    printf("Ho va ten: ");
    while (getchar() != '\n');
    fgets(hovaTen, sizeof(hovaTen), stdin);
    printf("Nhap nam sinh: ");
    scanf("%d",&namSinh);
    printf("Nhap diem: ");
    scanf("%f",&diemTB);
    //xuat
    printf("Ma so sinh vien: %s\n", maSSV);
    printf("Ho va ten: %s\n", hovaTen);
    printf("Nam sinh: %d\n", namSinh);
    printf("Tuoi: %d\n", 2026 - namSinh);
    printf("Diem: %f\n", diemTB);
    return 0;


}
