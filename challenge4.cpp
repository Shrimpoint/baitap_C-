#include <iostream>
using namespace std;
void bai1();
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