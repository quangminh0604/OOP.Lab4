// quanly.h
#ifndef QUANLY_H
#define QUANLY_H

#include "nhanvien.h"

class QuanLy : public NhanVien {
private:
    double tyLeThuong;
public:
    QuanLy(string maSo, string ten, double luongCoBan, double tyLeThuong);
    double TienThuong() override;
    void Xuat() override;
};

#endif // QUANLY_H

