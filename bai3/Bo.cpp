#include "Bo.h"
#include <cstdlib> // Để dùng hàm rand()

Bo::Bo(int soLuongBanDau) : GiaSuc(soLuongBanDau, "Ò Ò") {}

int Bo::choSua() {
    int sua = rand() % 21; // 0-20 lít
    tongSua += sua * soLuong;
    return sua * soLuong;
}

int Bo::sinhCon() {
    int con = rand() % 3; // Mỗi con bò sinh 0-2 con
    capNhatSoLuong(con * soLuong);
    return con * soLuong;
}
