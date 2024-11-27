#ifndef QUANLY_H
#define QUANLY_H
#include "nhanvien.h"
class Quanly : public Nhanvien{
    private:
        float tilethuong ;
    public:
        Quanly() ;
        Quanly(string MSNV , string Ten , float LuongCB , float tilethuong);
        void nhap() ;
        int Tienthuong() ;
        void xuat() ;

};

#endif QUANLY_H