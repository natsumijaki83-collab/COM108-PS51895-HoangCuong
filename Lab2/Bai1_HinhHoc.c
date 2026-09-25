#include <stdio.h>
#define PI 3.14159
int main(){
  float chieuDai, chieuRong, r, chuVi, dienTich;
  printf("Chieu dai: ");
  scanf("%f", &chieuDai);

  printf("Chieu rong: ");
  scanf("%f", &chieuRong);
  
  printf("Ban kinh: ");
  scanf("%f", &r);

  chuVi = (chieuDai + chieuRong) *2;
  dienTich = chieuDai * chieuRong;
  
  printf("Chu vi hinh chu nhat: %f\n", chuVi);
  printf("Dien tich hinh chu nhat: %f\n", dienTich);
  
  chuVi = r *2 * PI;
  dienTich = (r * r) * PI;

  printf("Chu vi hinh tron: %f\n", chuVi);
  printf("Dien tich hinh tron: %f\n", dienTich);
  return 0;
}