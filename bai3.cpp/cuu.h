// cuu.h
#ifndef CUU_H
#define CUU_H

#include "giasuc.h"

class Cuu : public GiaSuc {
public:
    Cuu(int soLuong);
    void Keu() override;
    int SinhCon() override;
    int ChoSua() override;
};

#endif // CUU_H

