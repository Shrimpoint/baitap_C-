#include <iostream>
#include <iomanip>  // Dinh dang so thap phan
#include <cmath>    // Toan hoc (pow, sin, cos...)
#include <string>   // Xu ly chuoi
#include <ctime>    // Thoi gian

using namespace std;

// 1. Số dặm trên mỗi Gallon
int bai1() {
    double gallons, miles;
    cout << "\n--- BAI 1: Tinh MPG ---\n";
    cout << "Nhap so gallons xang: ";
    cin >> gallons;
    cout << "Nhap so dam (miles) di duoc: ";
    cin >> miles;
    
    double mpg = miles / gallons;
    cout << "Muc tieu thu: " << fixed << setprecision(2) << mpg << " dam/gallon" << endl;
    return 0;
}

// 2. Vị trí ngồi trên sân vận động
int bai2() {
    int a, b, c;
    cout << "\n--- BAI 2: Ban ve ---\n";
    cout << "Nhap so ve hang A, B, C: ";
    cin >> a >> b >> c;
    
    double total = (a * 15) + (b * 12) + (c * 9);
    cout << "Tong doanh thu: $" << fixed << setprecision(2) << total << endl;
    return 0;
}

// 3. Điểm trung bình
int bai3() {
    double d1, d2, d3, d4, d5;
    cout << "\n--- BAI 3: Diem trung binh ---\n";
    cout << "Nhap 5 dau diem: ";
    cin >> d1 >> d2 >> d3 >> d4 >> d5;
    
    double dtb = (d1 + d2 + d3 + d4 + d5) / 5.0;
    cout << "Diem trung binh: " << fixed << setprecision(1) << dtb << endl;
    return 0;
}

// 4. Lượng mưa trung bình
int bai4() {
    string thang1, thang2, thang3;
    double mua1, mua2, mua3;
    
    cout << "\n--- BAI 4: Luong mua ---\n";
    cout << "Nhap ten thang 1: "; cin >> thang1;
    cout << "Nhap luong mua thang 1: "; cin >> mua1;
    cout << "Nhap ten thang 2: "; cin >> thang2;
    cout << "Nhap luong mua thang 2: "; cin >> mua2;
    cout << "Nhap ten thang 3: "; cin >> thang3;
    cout << "Nhap luong mua thang 3: "; cin >> mua3;
    
    double tb = (mua1 + mua2 + mua3) / 3.0;
    cout << "Luong mua trung binh cua " << thang1 << ", " << thang2 << ", " << thang3 
         << " la: " << fixed << setprecision(2) << tb << " inches." << endl;
    return 0;
}

// 5. Tỉ lệ nam và nữ
int bai5() {
    int nam, nu;
    cout << "\n--- BAI 5: Ti le Nam/Nu ---\n";
    cout << "Nhap so nam: "; cin >> nam;
    cout << "Nhap so nu: "; cin >> nu;
    
    int tong = nam + nu;
    double tileNam = (double)nam / tong * 100;
    double tileNu = (double)nu / tong * 100;
    
    cout << "Nam: " << fixed << setprecision(0) << tileNam << "%" << endl;
    cout << "Nu:  " << fixed << setprecision(0) << tileNu << "%" << endl;
    return 0;
}

// 6. Điều chỉnh thành phần
int bai6() {
    double soBanh;
    cout << "\n--- BAI 6: Lam banh ---\n";
    cout << "Ban muon lam bao nhieu chiec banh? ";
    cin >> soBanh;
    
    double heso = soBanh / 48.0;
    cout << "Can: " << (1.5 * heso) << " coc duong" << endl;
    cout << "Can: " << (1.0 * heso) << " coc bo" << endl;
    cout << "Can: " << (2.75 * heso) << " coc bot" << endl;
    return 0;
}

// 7. Rạp chiếu phim
int bai7() {
    string tenPhim;
    int veLon, veTre;
    
    cout << "\n--- BAI 7: Doanh thu Rap ---\n";
    cin.ignore(); 
    cout << "Nhap ten phim: "; 
    getline(cin, tenPhim); 
    
    cout << "Nhap so ve Nguoi lon va Tre em: ";
    cin >> veLon >> veTre;
    
    double tongThu = (veLon * 10.0) + (veTre * 6.0);
    double loiNhuan = tongThu * 0.20;
    double tienNSX = tongThu - loiNhuan;
    
    cout << "Phim: " << tenPhim << endl;
    cout << "Doanh thu rong (Rap): $" << fixed << setprecision(2) << loiNhuan << endl;
    cout << "Tien tra NSX:         $" << tienNSX << endl;
    return 0;
}

// 8. Có bao nhiêu vật dụng
int bai8() {
    double palletRong, palletDay;
    cout << "\n--- BAI 8: Tinh so Widget ---\n";
    cout << "Nhap trong luong pallet rong (lbs): "; cin >> palletRong;
    cout << "Nhap trong luong pallet day (lbs): "; cin >> palletDay;
    
    int soLuong = (int)((palletDay - palletRong) / 12.5);
    cout << "So luong vat dung: " << soLuong << endl;
    return 0;
}

// 9. Bao nhiêu Calories
int bai9() {
    int soBanh;
    cout << "\n--- BAI 9: Calories ---\n";
    cout << "So banh quy ban da an: "; 
    cin >> soBanh;
    cout << "Tong calories tieu thu: " << (soBanh * 100) << endl;
    return 0;
}

// 10. Bảo hiểm
int bai10() {
    double chiPhi;
    cout << "\n--- BAI 10: Bao hiem ---\n";
    cout << "Nhap chi phi thay the toa nha: $";
    cin >> chiPhi;
    cout << "Bao hiem toi thieu (80%): $" << fixed << setprecision(2) << (chiPhi * 0.8) << endl;
    return 0;
}

// --- PHẦN 2: TÀI CHÍNH & TÍNH TOÁN (11-20) ---

// 11. Chi phí ô tô
int bai11() {
    double loan, ins, gas, oil, tires, maint;
    cout << "\n--- BAI 11: Chi phi O to ---\n";
    cout << "Nhap chi phi hang thang (Loan, Ins, Gas, Oil, Tires, Maint): ";
    cin >> loan >> ins >> gas >> oil >> tires >> maint;
    
    double totalMonth = loan + ins + gas + oil + tires + maint;
    cout << "Chi phi thang: $" << fixed << setprecision(2) << totalMonth << endl;
    cout << "Chi phi nam:   $" << totalMonth * 12 << endl;
    return 0;
}

// 12. Celsius to Fahrenheit
int bai12() {
    double c;
    cout << "\n--- BAI 12: Doi nhiet do ---\n";
    cout << "Nhap do C: ";
    cin >> c;
    double f = (9.0/5.0) * c + 32;
    cout << "Do F: " << fixed << setprecision(2) << f << endl;
    return 0;
}

// 13. Currency
int bai13() {
    double dollars;
    const double YEN_PER_USD = 98.93;
    const double EURO_PER_USD = 0.74;
    
    cout << "\n--- BAI 13: Doi tien ---\n";
    cout << "Nhap so USD: ";
    cin >> dollars;
    
    cout << dollars << " USD = " << fixed << setprecision(2) << (dollars * YEN_PER_USD) << " YEN" << endl;
    cout << dollars << " USD = " << (dollars * EURO_PER_USD) << " EUROS" << endl;
    return 0;
}

// 14. Thuế bán hàng
int bai14() {
    double totalCollected;
    cout << "\n--- BAI 14: Thue ban hang ---\n";
    cout << "Nhap tong so tien thu duoc: $";
    cin >> totalCollected;
    
    double sales = totalCollected / 1.06;
    double countyTax = sales * 0.02;
    double stateTax = sales * 0.04;
    
    cout << "Doanh thu:    $" << fixed << setprecision(2) << sales << endl;
    cout << "Thue huyen:   $" << countyTax << endl;
    cout << "Thue bang:    $" << stateTax << endl;
    cout << "Tong thue:    $" << (countyTax + stateTax) << endl;
    return 0;
}

// 15. Thuế bất động sản
int bai15() {
    double actualValue;
    cout << "\n--- BAI 15: Thue bat dong san ---\n";
    cout << "Nhap gia tri thuc cua tai san: $";
    cin >> actualValue;
    
    double assessed = actualValue * 0.60;
    double tax = (assessed / 100.0) * 0.75;
    
    cout << "Gia tri danh gia: $" << fixed << setprecision(2) << assessed << endl;
    cout << "Thue phai dong:   $" << tax << endl;
    return 0;
}

// 16. Thuế tài sản người cao tuổi
int bai16() {
    double actualValue, taxRate;
    cout << "\n--- BAI 16: Thue cho Nguoi cao tuoi ---\n";
    cout << "Nhap gia tri thuc: $"; cin >> actualValue;
    cout << "Nhap thue suat (tren moi $100): $"; cin >> taxRate;
    
    double assessed = (actualValue * 0.60) - 5000;
    double annualTax = (assessed / 100.0) * taxRate;
    
    cout << "Thue hang nam: $" << fixed << setprecision(2) << annualTax << endl;
    cout << "Thue hang quy: $" << annualTax / 4.0 << endl;
    return 0;
}

// 17. Gia sư toán
int bai17() {
    int n1 = rand() % 900 + 100;
    int n2 = rand() % 900 + 100;
    
    cout << "\n--- BAI 17: Gia su toan ---\n";
    cout << "  " << n1 << endl;
    cout << "+ " << n2 << endl;
    cout << "-------" << endl;
    cout << "Nhan Enter de xem dap an...";
    cin.ignore(); cin.get(); 
    
    cout << "  " << (n1 + n2) << endl;
    return 0;
}

// 18. Lãi suất
int bai18() {
    double principal, rate;
    int times;
    cout << "\n--- BAI 18: Lai suat ---\n";
    cout << "Nhap tien goc: "; cin >> principal;
    cout << "Nhap lai suat (vd 0.0425): "; cin >> rate;
    cout << "So lan gop lai trong nam: "; cin >> times;
    
    double amount = principal * pow((1 + rate/times), times);
    cout << "So tien sau 1 nam: $" << fixed << setprecision(2) << amount << endl;
    return 0;
}

// 19. Thanh toán hàng tháng
int bai19() {
    double loan, rate;
    int payments;
    cout << "\n--- BAI 19: Tra gop ---\n";
    cout << "Nhap khoan vay: $"; cin >> loan;
    cout << "Nhap lai suat nam (decimal): "; cin >> rate;
    cout << "So lan thanh toan: "; cin >> payments;
    
    double monthlyRate = rate / 12.0;
    double term = pow(1 + monthlyRate, payments);
    double monthlyPayment = (monthlyRate * term) / (term - 1) * loan;
    
    cout << "Thanh toan hang thang: $" << fixed << setprecision(2) << monthlyPayment << endl;
    cout << "Tong so tien tra:      $" << (monthlyPayment * payments) << endl;
    cout << "Tong lai phai tra:     $" << (monthlyPayment * payments - loan) << endl;
    return 0;
}

// 20. Pizza Pi
int bai20() {
    double diameter;
    cout << "\n--- BAI 20: Pizza Pi ---\n";
    cout << "Nhap duong kinh pizza: "; cin >> diameter;
    
    double radius = diameter / 2.0;
    const double PI = 3.14159;
    double area = PI * pow(radius, 2);
    double slices = area / 14.125;
    
    cout << "So mieng cat duoc: " << fixed << setprecision(1) << slices << endl;
    return 0;
}

// 21. Bao nhiêu chiếc Pizza
int bai21() {
    int people;
    double diameter;
    cout << "\n--- BAI 21: Tiec Pizza ---\n";
    cout << "So nguoi tham du: "; cin >> people;
    cout << "Duong kinh pizza: "; cin >> diameter;
    
    double radius = diameter / 2.0;
    const double PI = 3.14159;
    double area = PI * pow(radius, 2);
    double slicesPerPizza = area / 14.125;
    
    double totalSlicesNeeded = people * 4.0;
    double pizzasNeeded = ceil(totalSlicesNeeded / slicesPerPizza);
    
    cout << "Can mua " << (int)pizzasNeeded << " chiec pizza." << endl;
    return 0;
}

// 22. Tính góc
int bai22() {
    double radians;
    cout << "\n--- BAI 22: Luong giac ---\n";
    cout << "Nhap goc (radians): "; cin >> radians;
    
    cout << fixed << setprecision(4);
    cout << "Sin: " << sin(radians) << endl;
    cout << "Cos: " << cos(radians) << endl;
    cout << "Tan: " << tan(radians) << endl;
    return 0;
}

int main(){
	bai1();
	bai2();
	bai3();
	bai4();
	bai5();
	bai6();
	bai7();
	bai8();
	bai9();
	bai10();
	bai11();
	bai12();
	bai13();
	bai14();
	bai15();
	bai16();
	bai17();
	bai18();
	bai19();
	bai20();
	bai21();
	bai22();
	return 0;
}
