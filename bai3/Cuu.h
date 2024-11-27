#ifndef CUU_H
#define CUU_H

#include "Giasuc.h"

class Cuu : public GiaSuc {
public:
    Cuu(int soLuongBanDau);
    int choSua() override;
    int sinhCon() override;
};

#endif // CUU_H