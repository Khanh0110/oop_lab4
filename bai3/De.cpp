#include "De.h"
#include <cstdlib> // Để dùng hàm rand()

De::De(int soLuongBanDau) : GiaSuc(soLuongBanDau, "Be be") {}

int De::choSua() {
    int sua = rand() % 11; // 0-10 lít
    tongSua += sua * soLuong;
    return sua * soLuong;
}

int De::sinhCon() {
    int con = rand() % 5; // Mỗi con dê sinh 0-4 con
    capNhatSoLuong(con * soLuong);
    return con * soLuong;
}
