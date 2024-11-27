#ifndef ROOM_H
#define ROOM_H

#include <iostream>

class Room {
protected:
    int soDem;
    double phiDichVu;
    double phiPhucVu;

public:
    Room(int soDem = 0, double phiDichVu = 0, double phiPhucVu = 0);
    virtual double tinhDoanhThu() const = 0;
    virtual void nhap();
    virtual ~Room() {}
};

#endif // ROOM_H
