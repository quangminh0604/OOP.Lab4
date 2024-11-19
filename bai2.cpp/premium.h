// premium.h
#ifndef PREMIUM_H
#define PREMIUM_H

class Premium {
protected:
    long long so_dem;
    long long phi_dich_vu;
public:
    Premium();
    Premium(long long so_dem, long long phi_dich_vu);
    long long doanh_thu_phong();
};

#endif // PREMIUM_H

