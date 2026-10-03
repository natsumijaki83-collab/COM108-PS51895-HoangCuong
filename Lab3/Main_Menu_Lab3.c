#include <stdio.h>
int main()
{
    int luaChon;
    do
    {
        printf("===== MENU CHUONG TRINH LAB 3 =====\n");
        printf("1. Tinh hoc luc sinh vien\n");
        printf("2. Giai phuong trinh bac hai\n");
        printf("3. Tinh tien dien tieu thu\n");
        printf("0. Thoat chuong trinh\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &luaChon);
        switch (luaChon)
        {
        case 1:
            printf("tinhHocLuc\n");
            break;
        case 2:
            printf("giaiPTBacHai\n");
            break;
        case 3:
            printf("tinhTienDien\n");
            break;
        case 0:
            printf("Ban da thoat chuong trinh\n");
            break;
        default:
            printf("Lua chon khong hop le. Vui long thu lai.\n");
        }

    } while (luaChon != 0);
    return 0;
}