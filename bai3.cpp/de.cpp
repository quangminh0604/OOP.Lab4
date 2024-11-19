// de.cpp
#include "de.h"
#include <cstdlib>

De::De(int soLuong) : GiaSuc(soLuong) {
    loai = "De";
}

void De::Keu() {
    cout << "De: Maa!" << endl;
}

int De::SinhCon() {
    return rand() % 3; // Random between 0 and 2
}

int De::ChoSua() {
    return rand() % 11; // Random between 0 and 10 liters
}

