#include "Giasuc.h"

GiaSuc::GiaSuc(int soLuongBanDau, const string& tiengKeu)
    : soLuong(soLuongBanDau), tongSua(0), tiengKeu(tiengKeu) {}

int GiaSuc::laySoLuong() const {
    return soLuong;
}

int GiaSuc::layTongSua() const {
    return tongSua;
}

const string& GiaSuc::layTiengKeu() const {
    return tiengKeu;
}

void GiaSuc::capNhatSoLuong(int them) {
    soLuong += them;
}
