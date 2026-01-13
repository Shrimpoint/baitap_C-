#include <iostream>
#include <string>
using namespace std;

// Function prototypes (declarations)
void bai1();
void bai2();
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