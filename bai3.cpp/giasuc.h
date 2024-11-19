// giasuc.h
#ifndef GIASUC_H
#define GIASUC_H

#include <string>
#include <iostream>
using namespace std;

class GiaSuc {
protected:
    std::string loai;
    int soLuong;

public:
    GiaSuc(int soLuong);
    virtual void Keu() = 0;
    virtual int SinhCon() = 0;
    virtual int ChoSua() = 0;
    int getSoLuong();
    void setSoLuong(int soLuongMoi);
};

#endif // GIASUC_H

