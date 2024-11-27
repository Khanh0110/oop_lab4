#include "Deluxe.h"

Deluxe::Deluxe(int soDem, double phiDichVu, double phiPhucVu)
    : Room(soDem, phiDichVu, phiPhucVu) {}

double Deluxe::tinhDoanhThu() const {
    return soDem * 750000 + phiDichVu + phiPhucVu;
}

void Deluxe::nhap() {
    std::cout << "--- Nhap thong tin phong Deluxe ---\n";
    Room::nhap(); // Gọi phương thức nhập từ lớp cha
}
