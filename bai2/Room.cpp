#include "Room.h"

Room::Room(int soDem, double phiDichVu, double phiPhucVu)
    : soDem(soDem), phiDichVu(phiDichVu), phiPhucVu(phiPhucVu) {}

void Room::nhap() {
    std::cout << "Nhap so dem: ";
    std::cin >> soDem;
    std::cout << "Nhap phi dich vu: ";
    std::cin >> phiDichVu;
    std::cout << "Nhap phi phuc vu: ";
    std::cin >> phiPhucVu;
}
