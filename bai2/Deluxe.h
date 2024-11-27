#ifndef DELUXE_H
#define DELUXE_H

#include "Room.h"

class Deluxe : public Room {
public:
    Deluxe(int soDem = 0, double phiDichVu = 0, double phiPhucVu = 0);
    double tinhDoanhThu() const override;
    void nhap() override;
};

#endif // DELUXE_H
