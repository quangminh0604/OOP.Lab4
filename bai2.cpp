#include<bits/stdc++.h>
using namespace std;

class Deluxe {
protected:
    long long so_dem;
    long long phi_dich_vu;
public: 
    Deluxe() {}
    Deluxe(int so_dem, int phi_dich_vu) : so_dem(so_dem), phi_dich_vu(phi_dich_vu) {}
    long long doanh_thu_phong() {
        return 750000 * so_dem + 2 * phi_dich_vu;
    }    
};
class Premium {
protected:
    long long so_dem;
    long long phi_dich_vu;
public: 
    Premium() {}
    Premium(int so_dem, int phi_dich_vu) : so_dem(so_dem), phi_dich_vu(phi_dich_vu) {}
    long long doanh_thu_phong() {
        return 500000 * so_dem + phi_dich_vu;
    }    
};
class Bussiness {
protected:
    long long so_dem;
public: 
    Bussiness() {}
    Bussiness(int so_dem) : so_dem(so_dem) {}
    long long doanh_thu_phong() {
        return 300000 * so_dem;
    }    
};
int main() {
    Deluxe a(1, 100000);
    Deluxe b(2, 150000);
    Premium c(3, 75000);
    Premium d(4, 70000);
    Bussiness e(5);
    long long arr[5];
    arr[0] = a.doanh_thu_phong();
    arr[1] = b.doanh_thu_phong();
    arr[2] = c.doanh_thu_phong();
    arr[3] = d.doanh_thu_phong();
    arr[4] = e.doanh_thu_phong();
    long long mx = *max_element(arr, arr + 5);
    if (arr[0] == mx) cout << "Phòng a có doanh thu cao nhất!"; else
    if (arr[1] == mx) cout << "Phòng b có doanh thu cao nhất!"; else 
    if (arr[2] == mx) cout << "Phòng c có doanh thu cao nhất!"; else 
    if (arr[3] == mx) cout << "Phòng d có doanh thu cao nhất!"; else 
    if (arr[4] == mx) cout << "Phòng e có doanh thu cao nhất!";
}