#ifndef BUSINESS_H
#define BUSINESS_H

#include "Room.h"

class Business : public Room {
public:
    Business(int soDem = 0);
    double tinhDoanhThu() const override;
    void nhap() override;
};

#endif // BUSINESS_H
