#ifndef KYSU_H
#define KYSU_H
#include "nhanvien.h"

class Kysu : public Nhanvien{
    private:
        int GioLT ;
    public: 
        Kysu() ;
        Kysu(string MSNV , string Ten , float LuongCB , int GioLT) ;
        void nhap() ;
        int Tienthuong() ;
        void xuat() ;

};
#endif KYSU_H