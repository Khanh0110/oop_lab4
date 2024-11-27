
#include "Cuu.h"
#include <cstdlib> // Để dùng hàm rand()

Cuu::Cuu(int soLuongBanDau) : GiaSuc(soLuongBanDau, "Bê bê") {}

int Cuu::choSua() {
    int sua = rand() % 6; // 0-5 lít
    tongSua += sua * soLuong;
    return sua * soLuong;
}

int Cuu::sinhCon() {
    int con = rand() % 4; // Mỗi con cừu sinh 0-3 con
    capNhatSoLuong(con * soLuong);
    return con * soLuong;
}
