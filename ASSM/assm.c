#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

bool laSoNguyenTo(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool laSoChinhPhuong(int n)
{
    if (n < 0)
        return false;
    int can = (int)sqrt(n);
    return (can * can == n);
}

int timUCLN(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return abs(a);
}

int timBCNN(int a, int b)
{
    if (a == 0 || b == 0)
        return 0;
    return abs(a * b) / timUCLN(a, b);
}

typedef struct
{
    char hoTen[50];
    float diem;
    char hocLuc[20];
} SinhVien;

void xepLoaiHocLuc(SinhVien *sv)
{
    if (sv->diem >= 9.0)
        strcpy(sv->hocLuc, "Xuat sac");
    else if (sv->diem >= 8.0)
        strcpy(sv->hocLuc, "Gioi");
    else if (sv->diem >= 6.5)
        strcpy(sv->hocLuc, "Kha");
    else if (sv->diem >= 5.0)
        strcpy(sv->hocLuc, "Trung binh");
    else
        strcpy(sv->hocLuc, "Yeu");
}

void chucNang1()
{
    int x;
    printf("\n--- Chuc nang 1: Kiem tra so nguyen ---\n");
    printf("Nhap vao so nguyen x: ");
    scanf("%d", &x);
    printf("+ So x co phai so nguyen? -> Dung, %d la so nguyen.\n", x);
    printf("+ So x co phai so nguyen to? -> %s\n", laSoNguyenTo(x) ? "Dung" : "Khong");
    printf("+ So x co phai so chinh phuong? -> %s\n", laSoChinhPhuong(x) ? "Dung" : "Khong");
}

void chucNang2()
{
    int x, y;
    printf("\n--- Chuc nang 2: Tim UCLN va BCNN ---\n");
    printf("Nhap vao so nguyen x: ");
    scanf("%d", &x);
    printf("Nhap vao so nguyen y: ");
    scanf("%d", &y);
    printf("+ Uoc so chung lon nhat cua 2 so: %d\n", timUCLN(x, y));
    printf("+ Boi so chung nho nhat cua 2 so: %d\n", timBCNN(x, y));
}

void chucNang3()
{
    int gioBatDau, gioKetThuc;
    printf("\n--- Chuc nang 3: Tinh tien Karaoke ---\n");
    printf("Nhap gio bat dau (12h - 23h): ");
    scanf("%d", &gioBatDau);
    printf("Nhap gio ket thuc (12h - 23h): ");
    scanf("%d", &gioKetThuc);

    if (gioBatDau < 12 || gioKetThuc > 23 || gioBatDau >= gioKetThuc)
    {
        printf("Gio hoat dong khong hop le (Quan chi mo tu 12h den 23h)!\n");
        return;
    }

    int soGio = gioKetThuc - gioBatDau;
    double tongTien = 0;

    if (soGio <= 3)
    {
        tongTien = soGio * 150000;
    }
    else
    {
        tongTien = 3 * 150000 + (soGio - 3) * 150000 * 0.7;
    }

    if (gioBatDau >= 14 && gioBatDau <= 17)
    {
        tongTien = tongTien * 0.9;
    }

    printf("+ Gia tien can thanh toan: %.0f VND\n", tongTien);
}

void chucNang4()
{
    double kwh, tienDian = 0;
    printf("\n--- Chuc nang 4: Tinh tien dien ---\n");
    printf("Nhap vao so kWh dien su dung: ");
    scanf("%lf", &kwh);

    if (kwh <= 50)
    {
        tienDian = kwh * 1678;
    }
    else if (kwh <= 100)
    {
        tienDian = 50 * 1678 + (kwh - 50) * 1734;
    }
    else if (kwh <= 200)
    {
        tienDian = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
    }
    else if (kwh <= 300)
    {
        tienDian = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
    }
    else if (kwh <= 400)
    {
        tienDian = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
    }
    else
    {
        tienDian = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
    }

    printf("+ So tien dien can phai tra: %.0f VND\n", tienDian);
}

void chucNang5()
{
    int menhGia[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int soTien, soTo;
    printf("\n--- Chuc nang 5: Doi tien ---\n");
    printf("Nhap vao so tien can doi: ");
    scanf("%d", &soTien);

    printf("Cac menh gia doi ra duoc:\n");
    for (int i = 0; i < 9; i++)
    {
        if (soTien >= menhGia[i])
        {
            soTo = soTien / menhGia[i];
            soTien = soTien % menhGia[i];
            printf("- %d to %d\n", soTo, menhGia[i]);
        }
    }
}

void chucNang6()
{
    double tienVay;
    printf("\n--- Chuc nang 6: Lai suat vay tra gop ---\n");
    printf("Nhap so tien muon vay: ");
    scanf("%lf", &tienVay);

    double gocPhaiTra = tienVay / 12;
    double soTienConLai = tienVay;

    printf("\n%-6s | %-12s | %-12s | %-16s | %-15s\n", "Ky han", "Lai phai tra", "Goc phai tra", "So tien phai tra", "So tien con lai");
    printf("-----------------------------------------------------------------------------\n");

    for (int i = 1; i <= 12; i++)
    {
        double laiPhaiTra = soTienConLai * 0.05;
        double soTienPhaiTra = laiPhaiTra + gocPhaiTra;
        soTienConLai -= gocPhaiTra;
        if (soTienConLai < 1)
            soTienConLai = 0; // Tránh sai số dấu phẩy động dạng -0

        printf("%-6d | %-12.0f | %-12.0f | %-16.0f | %-15.0f\n", i, laiPhaiTra, gocPhaiTra, soTienPhaiTra, soTienConLai);
    }
}

void chucNang7()
{
    double phanTramVay;
    printf("\n--- Chuc nang 7: Vay tien mua xe ---\n");
    printf("Nhap vao so phan tram vay toi da (vi du: 80): ");
    scanf("%lf", &phanTramVay);

    double tienVayCoDinh = 500000000; // 500 trieu
    double giaTriXe = tienVayCoDinh / (phanTramVay / 100);
    double tienTraLanDau = giaTriXe - tienVayCoDinh;

    int soThangVay = 24 * 12; // 24 nam
    double gocHangThang = tienVayCoDinh / soThangVay;
    double laiSuatThang = 0.072 / 12;

    printf("+ So tien phai tra lan dau: %.0f VND\n", tienTraLanDau);
    printf("+ Tien goc co dinh phai tra hang thang: %.0f VND\n", gocHangThang);
    printf("+ Thang dau tien phai tra: Goc %.0f + Lai %.0f = %.0f VND\n", gocHangThang, tienVayCoDinh * laiSuatThang, gocHangThang + (tienVayCoDinh * laiSuatThang));
}

void chucNang8()
{
    int n;
    printf("\n--- Chuc nang 8: Sap xep thong tin sinh vien ---\n");
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    SinhVien *ds = (SinhVien *)malloc(n * sizeof(SinhVien));

    for (int i = 0; i < n; i++)
    {
        printf("Nhap ho ten sinh vien %d: ", i + 1);
        fflush(stdin); // Xóa bộ nhớ đệm đầu vào
        scanf(" %[^\n]s", ds[i].hoTen);
        printf("Nhap diem sinh vien %d: ", i + 1);
        scanf("%f", &ds[i].diem);
        xepLoaiHocLuc(&ds[i]);
    }

    // Thuật toán sắp xếp nổi bọt (Bubble Sort) giảm dần theo điểm
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ds[i].diem < ds[j].diem)
            {
                SinhVien temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }

    printf("\nDanh sach sinh vien sau khi sap xep giam dan theo diem:\n");
    for (int i = 0; i < n; i++)
    {
        printf("- Ho ten: %s | Diem: %.1f | Hoc luc: %s\n", ds[i].hoTen, ds[i].diem, ds[i].hocLuc);
    }
    free(ds);
}

void chucNang9()
{
    int s1, s2;
    printf("\n--- Chuc nang 9: Game FPOLY-LOTT (2/15) ---\n");
    printf("Nhap vao so thu nhat (01 - 15): ");
    scanf("%d", &s1);
    printf("Nhap vao so thu hai (01 - 15): ");
    scanf("%d", &s2);

    if (s1 < 1 || s1 > 15 || s2 < 1 || s2 > 15)
    {
        printf("So nhap vao khong hop le! Vui long nhap tu 1 den 15.\n");
        return;
    }

    srand(time(NULL));
    int kq1 = rand() % 15 + 1;
    int kq2 = rand() % 15 + 1;

    printf("Ket qua he thong quay ra: %02d va %02d\n", kq1, kq2);

    int soTrung = 0;
    if (s1 == kq1 || s1 == kq2)
        soTrung++;
    if (s2 == kq1 || s2 == kq2)
        soTrung++;
    // Truong hop nguoi dung nhap 2 so trung nhau va trung voi 1 trong cac so he thong
    if (s1 == s2 && (s1 == kq1 || s1 == kq2))
        soTrung = 1;

    if (soTrung == 2)
    {
        printf("Chuc mung ban da trung giai nhat!\n");
    }
    else if (soTrung == 1)
    {
        printf("Chuc mung ban da trung giai nhi!\n");
    }
    else
    {
        printf("Chuc ban may man lan sau.\n");
    }
}

void chucNang10()
{
    int tu1, mau1, tu2, mau2;
    printf("\n--- Chuc nang 10: Tinh toan phan so ---\n");
    printf("Nhap phan so 1 (Tu va Mau cach nhau khoang trang): ");
    scanf("%d %d", &tu1, &mau1);
    printf("Nhap phan so 2 (Tu va Mau cach nhau khoang trang): ");
    scanf("%d %d", &tu2, &mau2);

    if (mau1 == 0 || mau2 == 0)
    {
        printf("Mau so phai khac 0!\n");
        return;
    }

    int tuCong = tu1 * mau2 + tu2 * mau1;
    int mauCong = mau1 * mau2;
    int uclnCong = timUCLN(tuCong, mauCong);
    printf("+ Tong 2 phan so: %d/%d\n", tuCong / uclnCong, mauCong / uclnCong);

    int tuTru = tu1 * mau2 - tu2 * mau1;
    int mauTru = mau1 * mau2;
    int uclnTru = timUCLN(tuTru, mauTru);
    printf("+ Hieu 2 phan so: %d/%d\n", tuTru / uclnTru, mauTru / uclnTru);

    int tuNhan = tu1 * tu2;
    int mauNhan = mau1 * mau2;
    int uclnNhan = timUCLN(tuNhan, mauNhan);
    printf("+ Tich 2 phan so: %d/%d\n", tuNhan / uclnNhan, mauNhan / uclnNhan);

    if (tu2 == 0)
    {
        printf("+ Thuong 2 phan so: Khong the chia vi phan so thu 2 bang 0\n");
    }
    else
    {
        int tuChia = tu1 * mau2;
        int mauChia = mau1 * tu2;
        int uclnChia = timUCLN(tuChia, mauChia);
        printf("+ Thuong 2 phan so: %d/%d\n", tuChia / uclnChia, mauChia / uclnChia);
    }
}

int main()
{
    int luaChon;

    do
    {
        printf("\n=================== MENU CHUC NANG ===================\n");
        printf("1. Kiem tra so nguyen, nguyen to, chinh phuong\n");
        printf("2. Tim Uoc so chung va Boi so chung cua 2 so\n");
        printf("3. Chuong trinh tinh tien cho quan Karaoke\n");
        printf("4. Tinh tien dien hang thang\n");
        printf("5. Chuc nang doi tien xuong menh gia nho nhat\n");
        printf("6. Tinh lai suat vay ngan hang vay tra gop\n");
        printf("7. Chuong trinh vay tien mua xe\n");
        printf("8. Sap xep thong tin hoc luc sinh vien\n");
        printf("9. Xay dung game FPOLY-LOTT (2/15)\n");
        printf("10. Chuong trinh tinh toan phan so\n");
        printf("0. Thoat chuong trinh\n");
        printf("======================================================\n");
        printf("Vui long chon chuc nang (0-10): ");
        scanf("%d", &luaChon);
        switch (luaChon)
        {
        case 1:
            chucNang1();
            break;
        case 2:
            chucNang2();
            break;
        case 3:
            chucNang3();
            break;
        case 4:
            chucNang4();
            break;
        case 5:
            chucNang5();
            break;
        case 6:
            chucNang6();
            break;
        case 7:
            chucNang7();
            break;
        case 8:
            chucNang8();
            break;
        case 9:
            chucNang9();
            break;
        case 10:
            chucNang10();
            break;
        case 0:
            printf("Cam on ban da su dung chuong trinh. Tam biet!\n");
            break;
        default:
            printf("Lua chon khong hop le! Vui long chon lai tu 0 den 10.\n");
        }
        if (luaChon != 0)
        {
            printf("\nBam Enter de tiep tuc quay lai Menu...");
            fflush(stdin);
            getchar();
        }
    } while (luaChon != 0);
    return 0;
}