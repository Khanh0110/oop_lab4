#include "Premium.h"

Premium::Premium(int soDem, double phiDichVu): Room(soDem, phiDichVu, 0) {}

double Premium::tinhDoanhThu() const {
    return soDem * 500000 + phiDichVu;
}

void Premium::nhap() {
    std::cout << "--- Nhap thong tin phong Premium ---\n";
    std::cout << "Nhap so dem: ";
    std::cin >> soDem;
    std::cout << "Nhap phi dich vu: ";
    std::cin >> phiDichVu;
}
