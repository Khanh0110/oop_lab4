#include "Business.h"

Business::Business(int soDem) : Room(soDem, 0, 0) {}

double Business::tinhDoanhThu() const {
    return soDem * 300000;
}

void Business::nhap() {
    std::cout << "--- Nhap thong tin phong Business ---\n";
    std::cout << "Nhap so dem: ";
    std::cin >> soDem;
}
