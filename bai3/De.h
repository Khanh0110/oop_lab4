#ifndef DE_H
#define DE_H

#include "Giasuc.h"

class De : public GiaSuc {
public:
    De(int soLuongBanDau);
    int choSua() override;
    int sinhCon() override;
};

#endif // DE_H
