// bo.h
#ifndef BO_H
#define BO_H

#include "giasuc.h"

class Bo : public GiaSuc {
public:
    Bo(int soLuong);
    void Keu() override;
    int SinhCon() override;
    int ChoSua() override;
};

#endif // BO_H

