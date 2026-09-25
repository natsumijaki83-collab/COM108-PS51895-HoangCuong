#include <stdio.h>
int main(){
    float diemToan, diemLy, diemHoa, diemTB;
    printf("Diem toan: ");
    scanf("%f", &diemToan);
    printf("Diem ly: ");
    scanf("%f", &diemLy);
    printf("Diem hoa: ");
    scanf("%f", &diemHoa);
    
    diemTB = (diemToan *3 + diemLy *2 + diemHoa *1) /6;
    
    printf("Diem trung binh: %f\n", diemTB);
    
    return 0;
}