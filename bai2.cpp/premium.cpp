// premium.cpp
#include "premium.h"

Premium::Premium() {}

Premium::Premium(long long so_dem, long long phi_dich_vu)
    : so_dem(so_dem), phi_dich_vu(phi_dich_vu) {}

long long Premium::doanh_thu_phong() {
    return 500000 * so_dem + phi_dich_vu;
}

