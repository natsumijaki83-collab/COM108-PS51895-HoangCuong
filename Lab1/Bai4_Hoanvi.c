#include <stdio.h>
int main(){
    int a = 7;
    int b = 10;
    printf("Truoc khi hoan vi: a = %d, b = %d\n",a ,b);
    //pheptinh
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Sau khi hoan vi: a =  %d, b = %d\n", a, b);
    return 0;


}