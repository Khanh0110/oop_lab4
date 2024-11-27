#ifndef PREMIUM_H
#define PREMIUM_H

#include "Room.h"

class Premium : public Room {
public:
    Premium(int soDem = 0, double phiDichVu = 0);
    double tinhDoanhThu() const override;
    void nhap() override;
};

#endif // PREMIUM_H
