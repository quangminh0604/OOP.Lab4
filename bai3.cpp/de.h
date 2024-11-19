// de.h
#ifndef DE_H
#define DE_H

#include "giasuc.h"

class De : public GiaSuc {
public:
    De(int soLuong);
    void Keu() override;
    int SinhCon() override;
    int ChoSua() override;
};

#endif // DE_H

