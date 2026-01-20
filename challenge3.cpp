#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cthoi_gian>
#include <iomanip>
using tenspace std;
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
void bai20();
void bai21();
void bai22();
void bai23();
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
            bai20();
            break;
        case 21:
            bai21();
            break;
        case 22:
            bai22();
            break;
        case 23:
            bai23();
            break;
        default:
            if (chon != 26) {
                cout << "lua chon khong hop le!" << endl;
            }
            break;
        }
    }
    while (chon != 26);
    return 0;
}
void bai1(){
    //nhap hai so
    int a,b;
    cout << "hay nhap hai so tuong trung cho a,b" << endl;
    cin >> a >> b;
    // toan tu dieu kien in ra hai so neu a > b thi ghi ra a lon hon
    if (a>b)
    {
        cout << "a lon b" << endl;
    }
    else
    {
        cout << "b lon hon a" << endl;
    }
    if (a==b)
    {
        cout << "a bang b" << endl;
    }
}
void bai2(){
    int chon;
    do{
        
        //dung cau lenh switch de thay the chu thanh la ma
        cout << endl << "hay chon so la ma tu 1 -> 10, chon 0 de thoat" << endl;
        cin >> chon;
        switch (chon)
        {
        case 1:
            cout << "I";
            break;
        case 2:
            cout << "II";
            break;
        case 3:
            cout << "III";
            break;
        case 4:
            cout << "IV";
            break;
        case 5:
            cout << "V";
            break;
        case 6:
            cout << "VI";
            break;
        case 7:
            cout << "VII";
            break;
        case 8:
            cout << "VIII";
            break;
        case 9:
            cout << "IX";
            break;
        case 10:
            cout << "X";
            break;
        default:
            cout << "lua chon khong hop le!" << endl;
            break;
        }
    }while (chon != 0);
}
void bai3(){
    int nam,ngay,thang,ngayphepthuat;
    cout << "hay nhap ngay, thang, nam theo dang mm/dd/yyyy, ngay phep thuat la ngay nam = thang * ngay" << '\n';
    nhaplai:
    cin >> ngay >> thang >> nam;
    ngayphepthuat = ngay * thang;
    cout << "ban da nhap " << thang << "/" << ngay << "/" << nam << endl;
    if (ngay > 31 || thang > 12 || thang < 1 || ngay < 1 || nam < 0 || nam > 99)
    {
        cout << "ban nhap sai xin moi nhap lai" << '\n';
        goto nhaplai;
    }
    if (ngayphepthuat == nam){
        cout << "day la ngay phep thuat" << '\n';
    }else
    {
        cout << "day khong phai la ngay phep thuat" << '\n';
    }
}
void bai4(){
    // Nhap chieu dai rong cua 2 hinh chu nhat
    float d1, r1, d2, r2, s1, s2;
    cout << "Nhap chieu dai va rong cua hinh 1: ";
    cin >> d1 >> r1;
    cout << "Nhap chieu dai va rong cua hinh 2: ";
    cin >> d2 >> r2;

    s1 = d1 * r1;
    s2 = d2 * r2;

    cout << "Dien tich H1: " << s1 << " | Dien tich H2: " << s2 << endl;
    if (s1 > s2) cout << "Hinh 1 lon hon" << endl;
    else if (s2 > s1) cout << "Hinh 2 lon hon" << endl;
    else cout << "Hai hinh bang nhau" << endl;
}

void bai5(){
    // Tinh chi so BMI
    float cannang, chieucao, bmi;
    cout << "Nhap can nang (kg): "; 
    cin >> cannang;
    cout << "Nhap chieu cao (m): "; 
    cin >> chieucao;

    bmi = cannang / (chieucao * chieucao);
    cout << "Chi so BMI cua ban la: " << bmi << endl;

    if (bmi < 18.5) cout << "Danh gia: Gay" << endl;
    else if (bmi >= 18.5 && bmi <= 25) cout << "Danh gia: Binh thuong" << endl;
    else cout << "Danh gia: Thua can" << endl;
}

void bai6(){
    // Tinh khoi luong va trong luong
    float m, w;
    cout << "Nhap khoi luong cua vat (kg): ";
    cin >> m;
    w = m * 9.8;
    cout << "Trong luong cua vat la: " << w << " Newton" << endl;

    if (w > 100) cout << "Vat qua nang" << endl;
    if (w < 10) cout << "Vat qua nhe" << endl;
}

void bai7(){
    // Tinh gio phut giay tu tong so giay
    long long tong_giay, ngay, gio, phut, giay;
    cout << "Nhap vao tong so giay: ";
    cin >> tong_giay;

    ngay = tong_giay / 86400;
    tong_giay = tong_giay % 86400; // so giay con lai sau khi tinh ngay
    gio = tong_giay / 3600;
    tong_giay = tong_giay % 3600; // so giay con lai sau khi tinh gio
    phut = tong_giay / 60;
    giay = tong_giay % 60;

    cout << "Ket qua: ";
    if (ngay > 0) cout << ngay << " ngay ";
    if (gio > 0) cout << gio << " gio ";
    if (phut > 0) cout << phut << " phut ";
    if (giay > 0) cout << giay << " giay";
    cout << endl;
}

void bai8(){
    // Tron mau co ban
    string m1, m2;
    cout << "Nhap ten 2 mau co ban tieng Anh (red, blue, yellow): " << endl;
    cin >> m1 >> m2;

    if ((m1 == "red" && m2 == "blue") || (m1 == "blue" && m2 == "red"))
        cout << "Mau pha tron: purple (tim)" << endl;
    else if ((m1 == "red" && m2 == "yellow") || (m1 == "yellow" && m2 == "red"))
        cout << "Mau pha tron: orange (cam)" << endl;
    else if ((m1 == "blue" && m2 == "yellow") || (m1 == "yellow" && m2 == "blue"))
        cout << "Mau pha tron: green (xanh la)" << endl;
    else
        cout << "Loi: Mau nhap vao khong hop le!" << endl;
}

void bai9(){
    // Tro choi doi 1 do la
    int penny, nickel, dime, quarter;
    int tong_cent;
    cout << "Nhap so luong dong penny (1 cent): "; cin >> penny;
    cout << "Nhap so luong dong nickel (5 cent): "; cin >> nickel;
    cout << "Nhap so luong dong dime (10 cent): "; cin >> dime;
    cout << "Nhap so luong dong quarter (25 cent): "; cin >> quarter;

    tong_cent = penny * 1 + nickel * 5 + dime * 10 + quarter * 25;

    if (tong_cent == 100)
        cout << "Chuc mung! Ban da thang (Vua du 1 do la)." << endl;
    else if (tong_cent > 100)
        cout << "Ban thua roi. Tong la " << tong_cent << " cent (Lon hon 1 do la)." << endl;
    else
        cout << "Ban thua roi. Tong la " << tong_cent << " cent (Nho hon 1 do la)." << endl;
}

void bai10(){
    // Tinh so ngay cua thang va nam nhuan
    int thang, nam, songay;
    cout << "Nhap thang (1-12): "; cin >> thang;
    cout << "Nhap nam: "; cin >> nam;

    switch (thang)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        songay = 31;
        break;
    case 4: case 6: case 9: case 11:
        songay = 30;
        break;
    case 2:
        // Kiem tra nam nhuan: chia het cho 400 hoac (chia het cho 4 nhung khong chia het cho 100)
        if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0))
            songay = 29;
        else
            songay = 28;
        break;
    default:
        cout << "Thang khong hop le!" << endl;
        return; // Thoat khoi ham neu thang sai
    }
    
    cout << "Thang " << thang << " nam " << nam << " co " << songay << " ngay." << endl;
}
void bai11(){
    // Gia su toan (Random)
    int so1, so2, tong, ketqua;
    
    // Tao 2 so ngau nhien tu 1 den 500
    so1 = rand() % 500 + 1;
    so2 = rand() % 500 + 1;
    
    tong = so1 + so2;

    cout << "Bai toan cong:" << endl;
    cout << "  " << so1 << endl;
    cout << "+ " << so2 << endl;
    cout << "-------" << endl;
    cout << "Nhap ket qua cua ban: ";
    cin >> ketqua;

    if (ketqua == tong){
        cout << "Chuc mung! Ban da tinh dung." << endl;
    } else {
        cout << "Ket qua khong chinh xac." << endl;
        cout << "Ket qua dung la: " << tong << endl;
    }
}

void bai12(){
    // Ban phan mem (Giam gia)
    int soluong;
    double dongia = 99.0;
    double tongtien, chietkhau = 0;

    cout << "Nhap so luong phan mem can mua: ";
    cin >> soluong;

    if (soluong < 0){
        cout << "So luong khong hop le." << endl;
        return;
    }

    if (soluong >= 10 && soluong <= 19) chietkhau = 0.20;
    else if (soluong >= 20 && soluong <= 49) chietkhau = 0.30;
    else if (soluong >= 50 && soluong <= 99) chietkhau = 0.40;
    else if (soluong >= 100) chietkhau = 0.50;

    tongtien = soluong * dongia * (1.0 - chietkhau);

    cout << "Muc chiet khau duoc huong: " << chietkhau * 100 << "%" << endl;
    cout << "Tong chi phi phai tra: $" << tongtien << endl;
}

void bai13(){
    // Cau lac bo sach (Tinh diem)
    int sosach, diem;
    cout << "Nhap so luong sach da mua trong thang: ";
    cin >> sosach;

    if (sosach < 0){
        cout << "So sach khong duoc am!" << endl;
    } else {
        if (sosach == 0) diem = 0;
        else if (sosach == 1) diem = 5;
        else if (sosach == 2) diem = 15;
        else if (sosach == 3) diem = 30;
        else diem = 60; // Tu 4 cuon tro len

        cout << "So diem thuong ban nhan duoc la: " << diem << endl;
    }
}

void bai14(){
    // Phi ngan hang
    double sodu, phi_sec = 0, tong_phi = 10; // Phi co ban la 10$
    int so_sec;

    cout << "Nhap so du tai khoan hien tai: $";
    cin >> sodu;
    cout << "Nhap so luong sec da dung: ";
    cin >> so_sec;

    if (sodu < 0 || so_sec < 0) {
        cout << "So lieu khong duoc am!" << endl;
        return;
    }

    // Tinh phi su dung sec
    if (so_sec < 20) phi_sec = so_sec * 0.10;
    else if (so_sec <= 39) phi_sec = so_sec * 0.08;
    else if (so_sec <= 59) phi_sec = so_sec * 0.06;
    else phi_sec = so_sec * 0.04;

    tong_phi = tong_phi + phi_sec;

    // Tinh phi phat neu so du duoi 400
    if (sodu < 400){
        cout << "So du thap (<400$), tinh them phi phat $15." << endl;
        tong_phi = tong_phi + 15;
    }

    cout << "Tong phi dich vu ngan hang thang nay: $" << tong_phi << endl;
}
void bai15(){
    // Phi van chuyen
    double trongluong, khoangcach, mucphi;
    cout << "Nhap trong luong kien hang (kg): "; cin >> trongluong;
    cout << "Nhap khoang cach (dam): "; cin >> khoangcach;

    if (trongluong <= 0 || trongluong > 20){
        cout << "Khoi luong khong hop le (0 < kl <= 20)." << endl; return;
    }
    if (khoangcach < 10 || khoangcach > 3000){
        cout << "Khoang cach khong hop le (10 <= kc <= 3000)." << endl; return;
    }

    if (trongluong <= 2) mucphi = 1.10;
    else if (trongluong <= 6) mucphi = 2.20;
    else if (trongluong <= 10) mucphi = 3.70;
    else mucphi = 4.80;

    cout << "Tong cuoc phi: $" << mucphi * khoangcach << endl;
}

void bai16(){
    // Chay dua - Xep hang 3 nguoi theo thoi gian (Be nhat la Nhat)
    string ten1, ten2, ten3;
    float t1, t2, t3;

    cout << "Nhap ten VDV 1: "; cin >> ten1;
    cout << "Nhap thoi gian chay VDV 1: "; cin >> t1;
    cout << "Nhap ten VDV 2: "; cin >> ten2;
    cout << "Nhap thoi gian chay VDV 2: "; cin >> t2;
    cout << "Nhap ten VDV 3: "; cin >> ten3;
    cout << "Nhap thoi gian chay VDV 3: "; cin >> t3;

    if (t1 < 0 || t2 < 0 || t3 < 0) {
        cout << "Thoi gian khong duoc am!" << endl; return;
    }

    cout << "\n--- KET QUA XEP HANG ---" << endl;
    if (t1 <= t2 && t1 <= t3) { // t1 nhat
        cout << "1. " << ten1 << endl;
        if (t2 <= t3) { cout << "2. " << ten2 << "\n3. " << ten3 << endl; }
        else { cout << "2. " << ten3 << "\n3. " << ten2 << endl; }
    } 
    else if (t2 <= t1 && t2 <= t3) { // t2 nhat
        cout << "1. " << ten2 << endl;
        if (t1 <= t3) { cout << "2. " << ten1 << "\n3. " << ten3 << endl; }
        else { cout << "2. " << ten3 << "\n3. " << ten1 << endl; }
    } 
    else { // t3 nhat
        cout << "1. " << ten3 << endl;
        if (t1 <= t2) { cout << "2. " << ten1 << "\n3. " << ten2 << endl; }
        else { cout << "2. " << ten2 << "\n3. " << ten1 << endl; }
    }
}

void bai17(){
    // Nhay sao - Xep hang 3 nguoi theo chieu cao (Lon nhat la Nhat)
    string ten1, ten2, ten3, ngay;
    float h1, h2, h3;

    cout << "Nhap ngay thi dau: "; cin >> ngay;
    cout << "VDV 1 (Ten, chieu cao): "; cin >> ten1 >> h1;
    cout << "VDV 2 (Ten, chieu cao): "; cin >> ten2 >> h2;
    cout << "VDV 3 (Ten, chieu cao): "; cin >> ten3 >> h3;

    if (h1 < 2.0 || h1 > 5.0 || h2 < 2.0 || h2 > 5.0 || h3 < 2.0 || h3 > 5.0){
        cout << "Chieu cao phai trong khoang 2.0m den 5.0m" << endl; return;
    }

    cout << "\n--- THANH TICH NGAY " << ngay << " ---" << endl;
    if (h1 >= h2 && h1 >= h3) { // h1 cao nhat
        cout << "Nhat: " << ten1 << endl;
        if (h2 >= h3) { cout << "Nhi: " << ten2 << "\nBa: " << ten3 << endl; }
        else { cout << "Nhi: " << ten3 << "\nBa: " << ten2 << endl; }
    }
    else if (h2 >= h1 && h2 >= h3) { // h2 cao nhat
        cout << "Nhat: " << ten2 << endl;
        if (h1 >= h3) { cout << "Nhi: " << ten1 << "\nBa: " << ten3 << endl; }
        else { cout << "Nhi: " << ten3 << "\nBa: " << ten1 << endl; }
    }
    else { // h3 cao nhat
        cout << "Nhat: " << ten3 << endl;
        if (h1 >= h2) { cout << "Nhi: " << ten1 << "\nBa: " << ten2 << endl; }
        else { cout << "Nhi: " << ten2 << "\nBa: " << ten1 << endl; }
    }
}

void bai18(){
    // Tinh gram chat beo
    float calo_tong, gam_chatbeo, calo_tu_beo;
    cout << "Nhap tong luong calo: "; cin >> calo_tong;
    cout << "Nhap so gram chat beo: "; cin >> gam_chatbeo;

    if (calo_tong < 0 || gam_chatbeo < 0) {
        cout << "So lieu khong duoc am!" << endl; return;
    }

    calo_tu_beo = gam_chatbeo * 9;

    if (calo_tu_beo > calo_tong) {
        cout << "Loi: Luong calo tu chat beo lon hon tong so calo!" << endl;
    } else {
        float phantram = (calo_tu_beo / calo_tong) * 100;
        cout << "Phan tram calo tu chat beo: " << phantram << "%" << endl;
        if (phantram < 30) {
            cout << "Thuc pham nay it chat beo." << endl;
        }
    }
}

void bai19(){
    // Phan loai song dien tu
    double lamda; // Dung double vi so rat nho (10 mu -11)
    cout << "Nhap buoc song (met), vi du 1e-2 la 10^-2: ";
    cin >> lamda;

    if (lamda >= 1e-2) cout << "Loai song: Song Radio" << endl;
    else if (lamda >= 1e-3) cout << "Loai song: Song lo vi song" << endl;
    else if (lamda >= 7e-7) cout << "Loai song: Song hong ngoai" << endl;
    else if (lamda >= 4e-7) cout << "Loai song: Song anh sang (Nhin thay)" << endl;
    else if (lamda >= 1e-8) cout << "Loai song: Song tu ngoai (UV)" << endl;
    else if (lamda >= 1e-11) cout << "Loai song: Tia X" << endl;
    else cout << "Loai song: Tia Gamma" << endl;
}

void bai20(){
    // Toc do am thanh (Menu con)
    int moi_truong;
    float khoang_cach, toc_do;

    cout << "\n--- CHON MOI TRUONG TRUYEN AM ---" << endl;
    cout << "1. Khong khi (1.100 ft/s)" << endl;
    cout << "2. Nuoc (4.900 ft/s)" << endl;
    cout << "3. Thep (16.400 ft/s)" << endl;
    cout << "Nhap lua chon (1-3): ";
    cin >> moi_truong;

    if (moi_truong < 1 || moi_truong > 3) {
        cout << "Lua chon khong hop le!" << endl; return;
    }

    cout << "Nhap khoang cach (feet): ";
    cin >> khoang_cach;

    if (khoang_cach < 0) {
        cout << "Khoang cach khong duoc am!" << endl; return;
    }

    if (moi_truong == 1) toc_do = 1100;
    else if (moi_truong == 2) toc_do = 4900;
    else toc_do = 16400;

    float thoi_gian = khoang_cach / toc_do;
    
    // In ra voi do chinh xac 4 so thap phan
    cout << fixed << setprecision(4);
    cout << "Thoi gian truyen am la: " << thoi_gian << " giay." << endl;
    // Reset lai format mac dinh de khong anh huong bai khac
    cout.unsetf(ios::fixed);
}
void bai21(){
    // Toc do am thanh trong khi (Menu 4 loai khi)
    int loai_khi;
    float giay, toc_do;

    cout << "Chon loai khi:" << endl;
    cout << "1. Carbon Dioxide (258.0 m/s)" << endl;
    cout << "2. Khong khi (331.5 m/s)" << endl;
    cout << "3. Helium (972.2 m/s)" << endl;
    cout << "4. Hydro (1,270.0 m/s)" << endl;
    cout << "Nhap lua chon (1-4): ";
    cin >> loai_khi;

    if (loai_khi < 1 || loai_khi > 4) {
        cout << "Lua chon khong dung menu!" << endl; return;
    }

    cout << "Nhap thoi gian (giay): ";
    cin >> giay;

    // Kiem tra thoi gian tu 0 den 30s
    if (giay < 0 || giay > 30) {
        cout << "Thoi gian khong hop le (Phai tu 0 den 30 giay)." << endl; return;
    }

    if (loai_khi == 1) toc_do = 258.0;
    else if (loai_khi == 2) toc_do = 331.5;
    else if (loai_khi == 3) toc_do = 972.2;
    else toc_do = 1270.0;

    cout << "Khoang cach tu nguon phat la: " << toc_do * giay << " met." << endl;
}

void bai22(){
    // Diem dong va soi
    // Chat:      Dong(F)   Soi(F)
    // Ethyl      -173      172
    // Thuy ngan  -38       676
    // Oxy        -362      -306
    // Nuoc       32        212

    float nhiet_do;
    cout << "Nhap nhiet do (do F): ";
    cin >> nhiet_do;

    cout << "Tai " << nhiet_do << " do F:" << endl;
    
    // Kiem tra dong dac (Nhiet do <= Diem dong)
    cout << "- Cac chat se DONG DAC: ";
    if (nhiet_do <= -173) cout << "Ethyl ";
    if (nhiet_do <= -38)  cout << "Thuy ngan ";
    if (nhiet_do <= -362) cout << "Oxy ";
    if (nhiet_do <= 32)   cout << "Nuoc ";
    cout << endl;

    // Kiem tra soi (Nhiet do >= Diem soi)
    cout << "- Cac chat se SOI: ";
    if (nhiet_do >= 172)  cout << "Ethyl ";
    if (nhiet_do >= 676)  cout << "Thuy ngan ";
    if (nhiet_do >= -306) cout << "Oxy ";
    if (nhiet_do >= 212)  cout << "Nuoc ";
    cout << endl;
}

void bai23(){
    // Tinh hinh hoc (Menu con)
    int chon_hinh;
    const float PI = 3.14159; // Hang so Pi

    cout << "\n--- TINH HINH HOC ---" << endl;
    cout << "1. Tinh dien tich hinh tron" << endl;
    cout << "2. Tinh dien tich hinh chu nhat" << endl;
    cout << "3. Tinh dien tich hinh tam giac vuong" << endl;
    cout << "4. Thoat ve menu chinh" << endl;
    cout << "Nhap lua chon [1-4]: ";
    cin >> chon_hinh;

    if (chon_hinh == 1) {
        float r;
        cout << "Nhap ban kinh hinh tron: "; cin >> r;
        if (r < 0) cout << "Ban kinh khong duoc am!" << endl;
        else cout << "Dien tich hinh tron: " << PI * r * r << endl;
    }
    else if (chon_hinh == 2) {
        float dai, rong;
        cout << "Nhap chieu dai: "; cin >> dai;
        cout << "Nhap chieu rong: "; cin >> rong;
        if (dai < 0 || rong < 0) cout << "Canh khong duoc am!" << endl;
        else cout << "Dien tich HCN: " << dai * rong << endl;
    }
    else if (chon_hinh == 3) {
        float a, b;
        cout << "Nhap 2 canh goc vuong: "; cin >> a >> b;
        if (a < 0 || b < 0) cout << "Canh khong duoc am!" << endl;
        else cout << "Dien tich tam giac vuong: " << 0.5 * a * b << endl;
    }
    else if (chon_hinh == 4) {
        cout << "Da thoat menu hinh hoc." << endl;
    }
    else {
        cout << "Lua chon khong hop le!" << endl;
    }
}