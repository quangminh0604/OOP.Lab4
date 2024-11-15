#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class GiaSuc {
protected:
    string loai;
    int soLuong;
public:
    GiaSuc(int soLuong) : soLuong(soLuong) {}
    virtual void Keu() = 0;
    virtual int SinhCon() = 0;
    virtual int ChoSua() = 0;
    int getSoLuong() { return soLuong; }
    void setSoLuong(int soLuongMoi) { soLuong = soLuongMoi; }
};

class Bo : public GiaSuc {
public:
    Bo(int soLuong) : GiaSuc(soLuong) { loai = "Bo"; }
    void Keu() override { cout << "Bo: Moo! " << endl; }
    int SinhCon() override { return rand() % 3; } // Bò sinh ngẫu nhiên từ 0 đến 2 con
    int ChoSua() override { return rand() % 21; } // Bò cho ngẫu nhiên từ 0 đến 20 lít sữa
};

class Cuu : public GiaSuc {
public:
    Cuu(int soLuong) : GiaSuc(soLuong) { loai = "Cuu"; }
    void Keu() override { cout << "Cuu: Baa! " << endl; }
    int SinhCon() override { return rand() % 3; } // Cừu sinh ngẫu nhiên từ 0 đến 2 con
    int ChoSua() override { return rand() % 6; } // Cừu cho ngẫu nhiên từ 0 đến 5 lít sữa
};

class De : public GiaSuc {
public:
    De(int soLuong) : GiaSuc(soLuong) { loai = "De"; }
    void Keu() override { cout << "De: Maa! " << endl; }
    int SinhCon() override { return rand() % 3; } // Dê sinh ngẫu nhiên từ 0 đến 2 con
    int ChoSua() override { return rand() % 11; } // Dê cho ngẫu nhiên từ 0 đến 10 lít sữa
};

int main() {
    srand(time(0)); // Khởi tạo số ngẫu nhiên

    int soBo, soCuu, soDe;
    cout << "Nhap so luong Bo: "; cin >> soBo;
    cout << "Nhap so luong Cuu: "; cin >> soCuu;
    cout << "Nhap so luong De: "; cin >> soDe;

    Bo bo(soBo);
    Cuu cuu(soCuu);
    De de(soDe);

    vector<GiaSuc*> trangTrai = { &bo, &cuu, &de };

    // a) Khi tất cả gia súc đều đói
    cout << "\nTieng keu khi gia suc doi:\n";
    for (auto &giaSuc : trangTrai) {
        giaSuc->Keu();
    }

    // b) Thống kê sau một lứa sinh và một lượt cho sữa
    int tongSua = 0;
    for (auto &giaSuc : trangTrai) {
        int soCon = giaSuc->SinhCon();
        int soLuongMoi = giaSuc->getSoLuong() + soCon;
        giaSuc->setSoLuong(soLuongMoi);

        int sua = giaSuc->ChoSua() * giaSuc->getSoLuong();
        tongSua += sua;

        cout << "\nLoai gia suc: " << typeid(*giaSuc).name() << endl;
        cout << "So luong: " << giaSuc->getSoLuong() << endl;
        cout << "Tong so sua: " << sua << " lit" << endl;
    }

    cout << "\nTong so sua cua tat ca gia suc: " << tongSua << " lit" << endl;

    return 0;
}
