#ifndef BO_H
#define BO_H

#include "Giasuc.h"

class Bo : public GiaSuc {
public:
    Bo(int soLuongBanDau);
    int choSua() override;
    int sinhCon() override;
};

#endif // BO_H
