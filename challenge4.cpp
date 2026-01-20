#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
void bai1();
void bai2();
void bai3();
void bai4();
void bai5();
void bai6();
void bai7();
void bai8();
void bai9();
void bai10();
void bai11();
void bai12();
void bai13();
void bai14();
void bai15();
void bai16();
void bai17();
void bai18();
void bai19();
void bai20_21();
void bai22();
void bai23();
void bai24();
int main(){
    int chon;
    do
    {
        cout << "hay nhap so bai khong lon hon 25, chon 26 de thoat" << endl;
        cin >> chon;
        switch (chon)
        {
        case 1:
            bai1();
            break;
        case 2:
            bai2();
            break;
        case 3:
            bai3();
            break;
        case 4:
            bai4();
            break;
        case 5:
            bai5();
            break;
        case 6:
            bai6();
            break;
        case 7:
            bai7();
            break;
        case 8:
            bai8();
            break;
        case 9:
            bai9();
            break;
        case 10:
            bai10();
            break;
        case 11:
            bai11();
            break;
        case 12:
            bai12();
            break;
        case 13:
            bai13();
            break;
        case 14:
            bai14();
            break;
        case 15:
            bai15();
            break;
        case 16:
            bai16();
            break;
        case 17:
            bai17();
            break;
        case 18:
            bai18();
            break;
        case 19:
            bai19();
            break;
        case 20:
        case 21:
            bai20_21();
            break;
        case 22:
            bai22();
            break;
        case 23:
            bai23();
            break;
        case 24:
            bai24();
            break;
        default:
        if (chon != 26)
        {
            cout << "lua chon khong hop le!" << endl;
        }
        break;
        }
    } while (chon != 26);
    return 0;
}
void bai1(){
    int n;
    long long tong = 0; 
    // Kiem tra dau vao
    do {
        cout << "Nhap mot so nguyen duong: ";
        cin >> n;
        if (n <= 0) {
            cout << "Khong chap nhan so am hoac so 0. Moi nhap lai!" << endl;
        }
    } while (n <= 0);
    // Tinh tong
    for (int i = 1; i <= n; i++) {
        tong += i;
    }

    cout << "Tong day so 1 + 2 + ... + " << n << " la: " << tong << endl;
}
void bai2(){
    for (int i = 0; i <= 127; i++) {
        cout << i << ": " << (char)i << "\t";
        if ((i + 1) % 16 == 0) {
            cout << endl;
        }
    }
}
void bai3() {
    for(int i = 1; i <= 25; i++) {
        cout << i << "\t" << (i * 1.5) << endl;
    }
}
void bai4() {
    const double CALO = 3.6;
    for(int i = 5; i <= 30; i += 5) {
        cout << "Sau " << i << " phut: " << (i * CALO) << " calo\n";
    }
}
void bai5() {
    double phi = 2500.0;
    for(int i = 1; i <= 6; i++) {
        phi += phi * 0.04; // Tang 4%
        cout << i << "\t$" << fixed << setprecision(2) << phi << endl;
    }
}
void bai6() {
    int toc_do, thoi_gian;
    
    do {
        cout << "Toc do cua xe (mph)? "; cin >> toc_do;
        if(toc_do < 0) cout << "Toc do phai >= 0.\n";
    } while(toc_do < 0);

    do {
        cout << "Xe da di bao nhieu gio? "; cin >> thoi_gian;
        if(thoi_gian < 1) cout << "Thoi gian phai >= 1.\n";
    } while(thoi_gian < 1);
    for(int i = 1; i <= thoi_gian; i++) {
        cout << i << "\t" << (toc_do * i) << endl;
    }
}
void bai7() {
    int ngay;
    do {
        cout << "Nhap so ngay lam viec: "; cin >> ngay;
        if(ngay < 1) cout << "So ngay phai >= 1.\n";
    } while(ngay < 1);

    double cha_ngay = 0.01; // 1 xu = 0.01 do la
    double tong_cong = 0.0;
    for(int i = 1; i <= ngay; i++) {
        cout << i << "\t$" << fixed << setprecision(2) << cha_ngay << endl;
        tong_cong += cha_ngay;
        cha_ngay *= 2; // Gap doi moi ngay
    }
}
void bai8() {
    int choice;
    do {
        int n1 = rand() % 100;
        int n2 = rand() % 100;
        if(n2 == 0) n2 = 1; // Tranh chia cho 0

        cout << "\nHai so ngau nhien la: " << n1 << " va " << n2 << endl;
        cout << "1. Cong\n2. Tru\n3. Nhan\n4. Chia\n5. Thoat\n";
        cout << "Chon phep toan: "; cin >> choice;

        double result;
        switch(choice) {
            case 1: result = n1 + n2; cout << "Tong: " << result << endl; break;
            case 2: result = n1 - n2; cout << "Hieu: " << result << endl; break;
            case 3: result = n1 * n2; cout << "Tich: " << result << endl; break;
            case 4: result = (double)n1 / n2; cout << "Thuong: " << result << endl; break;
            case 5: cout << "Ket thuc chuong trinh.\n"; break;
            default: cout << "Loi: Vui long chon lai tu 1-5.\n";
        }
    } while(choice != 5);
}
void bai9() {
    int tang, phong, cocho;
    int totalphong = 0, totalcocho = 0;

    do {
        cout << "Khach san co bao nhieu tang? "; cin >> tang;
    } while(tang < 1);

    for(int i = 1; i <= tang; i++) {
        if(i == 13) continue; // Bo qua tang 13

        do {
            cout << "Tang " << i << " co bao nhieu phong (>=10)? "; cin >> phong;
        } while(phong < 10);

        do {
            cout << "So phong da duoc su dung? "; cin >> cocho;
            if (cocho > phong) cout << "So phong su dung khong the lon hon tong so phong!\n";
        } while(cocho < 0 || cocho > phong);

        totalphong += phong;
        totalcocho += cocho;
    }

    cout << "\n--- THONG KE ---\n";
    cout << "Tong so phong: " << totalphong << endl;
    cout << "Phong da su dung: " << totalcocho << endl;
    cout << "Phong trong: " << (totalphong - totalcocho) << endl;
    if(totalphong > 0)
        cout << "Ty le su dung: " << fixed << setprecision(2) << ((double)totalcocho / totalphong * 100) << "%\n";
}
void bai10() {
    int nam;
    do {
        cout << "Nhap so nam: "; cin >> nam;
    } while(nam < 1);

    double luong_mua = 0;
    for(int y = 1; y <= nam; y++) {
        cout << "Nam thu " << y << ":\n";
        for(int m = 1; m <= 12; m++) {
            double mua;
            do {
                cout << "  Luong mua thang " << m << ": "; cin >> mua;
            } while(mua < 0);
            luong_mua += mua;
        }
    }

    int tatcathang = nam * 12;
    cout << "\nTong so thang: " << tatcathang << endl;
    cout << "Tong luong mua: " << luong_mua << " inches" << endl;
    cout << "Luong mua TB/thang: " << (luong_mua / tatcathang) << " inches" << endl;
}
void bai11() {
    double noi, rate;
    int ngay;

    do { 
        cout << "So luong ban dau (>=2): "; cin >> noi; 
    } while(noi < 2);
    do {
         cout << "Muc tang TB hang ngay (%): "; cin >> rate; 
    } while(rate < 0);
    do {
         cout << "So ngay nhan len (>=1): "; cin >> ngay; 
    } while(ngay < 1);

    cout << "Ngay\tSo luong\n";
    for(int i = 1; i <= ngay; i++) {
        cout << i << "\t" << (int)noi << endl;
        noi += (noi * (rate / 100.0));
    }
}
void bai12() {
    cout << "Do C\tDo F\n";
    for(int c = 0; c <= 20; c++) {
        double f = (9.0/5.0) * c + 32;
        cout << c << "\t" << fixed << setprecision(1) << f << endl;
    }
}
void bai13() {
    int so, toidaVal = -999999, toithieuVal = 999999;
    bool dau = true;

    cout << "Nhap cac so nguyen (nhap -99 de ket thuc):\n";
    while(true) {
        cin >> so;
        if(so == -99) break;

        if(dau) { // Khoi tao gia tri ban dau
            toidaVal = so;
            toithieuVal = so;
            dau = false;
        } else {
            if(so > toidaVal) toidaVal = so;
            if(so < toithieuVal) toithieuVal = so;
        }
    }
    
    if(!dau) {
        cout << "Lon nhat: " << toidaVal << endl;
        cout << "Nho nhat: " << toithieuVal << endl;
    } else {
        cout << "Chua nhap so nao.\n";
    }
}
void bai14() {
    int soStd;
    do {
        cout << "Nhap so luong hoc sinh (1-25): "; cin >> soStd;
    } while(soStd < 1 || soStd > 25);
    cin.ignore(); // Xoa buffer

    string ten, dau, cuoi;
    for(int i = 1; i <= soStd; i++) {
        cout << "Nhap ten hoc sinh " << i << ": ";
        getline(cin, ten);

        if(i == 1) {
            dau = ten;
            cuoi = ten;
        } else {
            if(ten < dau) dau = ten; // So sanh chuoi
            if(ten > cuoi) cuoi = ten;
        }
    }
    cout << "Dau hang: " << dau << endl;
    cout << "Cuoi hang: " << cuoi << endl;
}
void bai15() {
    int empID;
    double gross, state, fed, fica;

    while(true) {
        cout << "\nNhap Ma NV (0 de thoat): "; cin >> empID;
        if(empID == 0) break;

        do {
             cout << "Tong luong: "; cin >> gross; 
        } while(gross < 0);
        do {
             cout << "Thue tieu bang: "; cin >> state;
        } while(state < 0);
        do {
             cout << "Thue lien bang: "; cin >> fed; 
        } while(fed < 0);
        do {
             cout << "Thue thu nhap (FICA): "; cin >> fica; 
        } while(fica < 0);

        if(state + fed + fica > gross) {
            cout << "LOI: Tong thue > Tong luong. Vui long nhap lai.\n";
            continue;
        }

        cout << "--- Phieu Luong NV " << empID << " ---\n";
        cout << "Tong luong: $" << gross << endl;
        cout << "Thue TB:    $" << state << endl;
        cout << "Thue LB:    $" << fed << endl;
        cout << "FICA:       $" << fica << endl;
        cout << "THUC LANH:  $" << (gross - state - fed - fica) << endl;
    }
}
void bai16() {
    double loinhuan, taikhoan;
    int months;

    cout << "Lai suat hang nam: "; cin >> loinhuan;
    cout << "So du ban dau: "; cin >> taikhoan;
    cout << "So thang da qua: "; cin >> months;

    double thang = loinhuan / 12.0;
    double totalDep = 0, totalWith = 0, totalInt = 0;

    for(int i = 1; i <= months; i++) {
        double dep, with, loinhuan;
        cout << "\nThang " << i << ":\n";
        
        do { cout << "  So tien gui: "; cin >> dep; } while(dep < 0);
        taikhoan += dep; totalDep += dep;

        do { cout << "  So tien rut: "; cin >> with; } while(with < 0);
        taikhoan -= with; totalWith += with;

        if(taikhoan < 0) {
            cout << "Tai khoan da bi dong vi so du am!\n";
            break;
        }

        loinhuan = taikhoan * thang;
        taikhoan += loinhuan; totalInt += loinhuan;
    }

    cout << "\n--- TONG KET ---\n";
    cout << "So du cuoi ky: $" << fixed << setprecision(2) << taikhoan << endl;
    cout << "Tong tien gui: $" << totalDep << endl;
    cout << "Tong tien rut: $" << totalWith << endl;
    cout << "Tong tien lai: $" << totalInt << endl;
}
void bai17() {
    int giamgia[5];
    for(int i = 0; i < 5; i++) {
        cout << "Nhap doanh so cua hang " << i+1 << ": ";
        cin >> giamgia[i];
    }

    cout << "\ngiamgia BAR CHART (Each * = $100)\n";
    for(int i = 0; i < 5; i++) {
        cout << "Cua hang " << i+1 << ": ";
        int stars = giamgia[i] / 100;
        for(int j = 0; j < stars; j++) cout << "*";
        cout << endl;
    }
}


void bai18() {
    // Tao file People.txt gia lap de ban co the chay duoc
    ofstream outFile("People.txt");
    outFile << "1900 2000\n1920 4000\n1940 5000\n1960 9000\n1980 14000\n2000 18000";
    outFile.close();

    ifstream inFile("People.txt");
    if(!inFile) {
        cout << "Loi mo file People.txt\n";
        return;
    }

    cout << "TANG TRUONG DAN SO PRAIRIEVILLE (* = 1000 nguoi)\n";
    int year, noi;
    while(inFile >> year >> noi) {
        cout << year << " ";
        int stars = noi / 1000;
        for(int i = 0; i < stars; i++) cout << "*";
        cout << endl;
    }
    inFile.close();
}

void bai19() {
    double budget, expense, totalExpense = 0;
    cout << "Nhap ngan sach thang: "; cin >> budget;

    cout << "Nhap cac khoan chi (nhap 0 de ket thuc):\n";
    do {
        cin >> expense;
        totalExpense += expense;
    } while(expense != 0);

    cout << "Tong chi tieu: $" << totalExpense << endl;
    if(totalExpense > budget)
        cout << "Ban da vuot ngan sach $" << (totalExpense - budget) << endl;
    else
        cout << "Ban du ngan sach $" << (budget - totalExpense) << endl;
}
void bai20_21() {
    int bimat = rand() % 100 + 1; // 1 to 100
    int doan, count = 0;
    cout << "Toi dang nghi den 1 so tu 1 den 100.\n";
    do {
        cout << "Doan xem: "; cin >> doan;
        count++;
        if(doan > bimat) cout << "Rat cao, thu lai!\n";
        else if(doan < bimat) cout << "Rat thap, thu lai!\n";
        else cout << "Chinh xac! So bi mat la " << bimat << ".\n";
    } while(doan != bimat);
    
    cout << "So lan doan: " << count << endl;
}
void bai22() {
    int n;
    do {
        cout << "Nhap so nguyen duong (<=15): "; cin >> n;
    } while(n < 1 || n > 15);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) cout << "X";
        cout << endl;
    }
}
void bai23() {
    cout << "Hinh 1:\n";
    for(int i = 1; i <= 10; i++) {
        for(int j = 0; j < i; j++) 
        cout << "+";
        cout << endl;
    }

    cout << "\nHinh 2:\n";
    for(int i = 10; i >= 1; i--) {
        for(int j = 0; j < i; j++) cout << "+";
        cout << endl;
    }
}
void bai24() {
    ofstream outFile("random.txt");
    for(int i = 0; i < 50; i++) outFile << (rand() % 100) << endl;
    outFile.close();

    ifstream inFile("random.txt");
    if(!inFile) {
        cout << "Khong the mo file random.txt\n";
        return;
    }

    int so, count = 0;
    double sum = 0;

    while(inFile >> so) {
        count++;
        sum += so;
    }
    inFile.close();

    cout << "So luong cac so: " << count << endl;
    cout << "Tong cua cac so: " << sum << endl;
    if(count > 0)
        cout << "Gia tri trung binh: " << (sum / count) << endl;
    else
        cout << "File rong.\n";
}