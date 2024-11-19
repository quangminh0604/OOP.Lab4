// nhanvien.h
#ifndef NHANVIEN_H
#define NHANVIEN_H

#include <string>
using namespace std;

class NhanVien {
protected:
    string maSo;
    string ten;
    double luongCoBan;
public:
    NhanVien(string maSo, string ten, double luongCoBan);
    virtual double TienThuong() = 0; // Pure virtual function
    virtual void Xuat();
    virtual ~NhanVien() {} // Virtual destructor
};

#endif // NHANVIEN_H

