// kysu.h
#ifndef KYSU_H
#define KYSU_H

#include "nhanvien.h"

class KySu : public NhanVien {
private:
    int soGioLamThem;
public:
    KySu(string maSo, string ten, double luongCoBan, int soGioLamThem);
    double TienThuong() override;
    void Xuat() override;
};

#endif // KYSU_H

